#include "\MB\MapBuilder\ui\dik.hpp"
private["_mod"];
	//Update Mouse pos var (so we don't have to rely on mouse move when the cam was moved by a key)
	MB_MousePosition = screenToWorld MB_MouseScreenPosition;

	// if lshift and any direction key is pressed increase camspeed
	if(([DIK_LSHIFT] call MB_fnc_isPressed) && ( ([DIK_W] call MB_fnc_isPressed) || ([DIK_S] call MB_fnc_isPressed) || ([DIK_A] call MB_fnc_isPressed) || ([DIK_D] call MB_fnc_isPressed) || ([DIK_Q] call MB_fnc_isPressed) || ([DIK_Z] call MB_fnc_isPressed) )) then {
		MB_CamSpeed = MB_CamSpeed + 0.1;
	}
	else {
		MB_CamSpeed = MB_CamSpeed - 1.0;
	};
	
	if(([DIK_LALT] call MB_fnc_isPressed)) then {
		MB_CamSpeed = 30;
	} else {
		MB_CamSpeed = MB_CamSpeed max 0.8 min 10.0;
	};
	_mod = MB_CamSpeed;
	_camPos = MB_CamPos select 0;
	//Move forward
	if([DIK_W] call MB_fnc_isPressed) then {
		_camPos set[0,(_camPos select 0)+_mod*0.1*sin(MB_CamPos select 1)];
		_camPos set[1,(_camPos select 1)+_mod*0.1*cos(MB_CamPos select 1)];
		// only move in height while LALT is pressed
		if([MB_M] call MB_fnc_ViewIsMouseButtonPressed) then {
			_camPos set[2,(_camPos select 2)+_mod*0.1*sin(MB_CamPos select 2)];
		};
	};
	//Move backward
	if([DIK_S] call MB_fnc_isPressed) then {
		_camPos set[0,(_camPos select 0)-_mod*0.1*sin(MB_CamPos select 1)];
		_camPos set[1,(_camPos select 1)-_mod*0.1*cos(MB_CamPos select 1)];
		// only move in height while LALT is pressed
		if([MB_M] call MB_fnc_ViewIsMouseButtonPressed) then {
			_camPos set[2,(_camPos select 2)-_mod*0.1*sin(MB_CamPos select 2)];
		};
	};
	//Move Left
	if([DIK_A] call MB_fnc_isPressed) then {
		_camPos set[0,(_camPos select 0)-_mod*0.1*cos(MB_CamPos select 1)];
		_camPos set[1,(_camPos select 1)+_mod*0.1*sin(MB_CamPos select 1)];
	};
	//Move Right
	if([DIK_D] call MB_fnc_isPressed) then {
		_camPos set[0,(_camPos select 0)+_mod*0.1*cos(MB_CamPos select 1)];
		_camPos set[1,(_camPos select 1)-_mod*0.1*sin(MB_CamPos select 1)];
	};
	//Move up
	if([DIK_Q] call MB_fnc_isPressed) then {
		_camPos set [2,(_camPos select 2)+_mod*0.1];
	};
	//Move Down
	if([DIK_Z] call MB_fnc_isPressed ) then {
		_camPos set [2,(_camPos select 2)-_mod*0.1];
	};
	
	//Look up
	if([DIK_PGUP] call MB_fnc_isPressed || [DIK_NUMPAD8] call MB_fnc_isPressed) then {
		MB_CamPos set [2,((MB_CamPos select 2) + 0.75)];
	};
	//Look Down
	if([DIK_PGDN] call MB_fnc_isPressed || [DIK_NUMPAD2] call MB_fnc_isPressed) then {
		MB_CamPos set [2,((MB_CamPos select 2) - 0.75)];
	};
	
	//Look left
	if([DIK_NUMPAD4] call MB_fnc_isPressed ) then {
		MB_CamPos set [1,(MB_CamPos select 1)-0.75];
	};
	//Look right
	if([DIK_NUMPAD6] call MB_fnc_isPressed ) then {
		MB_CamPos set [1,(MB_CamPos select 1)+0.75];
	};
	
	if((MB_CamPos select 1)>360) then {
		MB_CamPos set[1,(MB_CamPos select 1)-360];
	};
	
	if((_camPos select 2)<0) then {
		_camPos set[2,0];
	};
	if((MB_CamPos select 1)>=360) then {
		MB_CamPos set[1,(MB_CamPos select 1)%360];
	};
	if((MB_CamPos select 1)<0) then {
		MB_CamPos set[1,360+(MB_CamPos select 1)%360];
	};
	if((MB_CamPos select 2)<-90) then {
		MB_CamPos set[2,-90];
	};
	if((MB_CamPos select 2)>90) then {
		MB_CamPos set[2,90];
	};
	//MBCamera setDir (MB_CamPos select 1);
	//MBCamera camSetDir [(MB_CamPos select 1),0,0];
	//[MBCamera,(MB_CamPos select 2),0] call bis_fnc_setPitchBank;	
	//MBCamera camSetDive (MB_CamPos select 2);
	_dirNUp = [(MB_CamPos select 2),0,(MB_CamPos select 1)] call MB_fnc_CalcDirAndUpVector;
	MBCamera setVectorDirAndUp _dirNUp;
	MBCamera camSetPos [(_camPos select 0),(_camPos select 1),(_camPos select 2)];
	MBCamera camCommit MB_CamCommit;
	MB_CamPos set [0,_camPos];
	//systemchat format["Real: [%1,%2,%3] : O : %4", getposATL MBCamera,getdir MBCamera,MBCamera call bis_fnc_getPitchBank, MB_CamPos];
	//diag_log format["Real: %1 : O : %2", getposATL MBCamera, MB_CamPos];