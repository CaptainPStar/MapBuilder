	private["_type","_uid","_pos","_pitch","_bank","_yaw","_simulate","_locked","_create"];
	_type = [_this,0] call bis_fnc_param;
	_uid = [_this,1] call bis_fnc_param;
	_pos = [_this,2] call bis_fnc_param;
	_pitch = [_this,3] call bis_fnc_param;
	_bank = [_this,4] call bis_fnc_param;
	_yaw = [_this,5] call bis_fnc_param;
	_simulate = [_this,6] call bis_fnc_param;
	_locked = [_this,7] call bis_fnc_param; 
	_create = false;
	
	systemChat format["Receiving Sync of %1",_uid];
	_var = format["MB_Object_UID%1",_uid];
	
	if(isNil _var) then {
		_create = true;
	};
	_obj = objNull;
	if(_create) then {
		_obj = [_type,_pos,_uid,false] call MB_fnc_CreateObject;
	} else {
		_obj = call compile _var;
	};
	if(!isNull(_obj)) then {
		_obj setvariable["MB_ObjVar_PositionATL",_pos,false];
		_obj setvariable["MB_ObjVar_Pitch",_pitch,false];
		_obj setvariable["MB_ObjVar_Bank",_bank,false];
		_obj setvariable["MB_ObjVar_Yaw",_yaw,false];	
		_obj setvariable["MB_ObjVar_Simulate",_simulate,false];
		_obj setvariable["MB_ObjVar_Locked",_locked,false];
		[_obj,false] call MB_fnc_UpdateObject;
	} else {
		systemChat "Error while creating a remote objects!";
	};