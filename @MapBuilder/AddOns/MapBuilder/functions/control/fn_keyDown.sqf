	#include "\MB\MapBuilder\ui\dik.hpp"
	private["_handled", "_ctrl", "_dikCode", "_shift", "_ctrlKey", "_alt","_factor"];
	_ctrl = _this select 0;
	_dikCode = _this select 1;
	_shift = _this select 2;
	_ctrlKey = _this select 3;
	_alt = _this select 4;
	

	if(!MB_RegisterKeys) exitwith {};
	MB_Keys set[_dikCode,true];
	
	_handled = true;

	//MBCamera camSetPos [(getpos MBCamera select 0),(getpos MBCamera select 1),(getpos MBCamera select 2)+0.1];
	//MBCamera camCommit 0;

	if(_dikCode == DIK_DELETE) exitwith {
		[] call MB_fnc_DeleteSelected;
	};
	if(_dikCode == DIK_ESCAPE) exitwith {
		if([] call MB_FNC_mapOpen) then {
			[false] call MB_fnc_toggleMap;
		} else {
			closeDialog 0;
		};
	};
	//if(_dikCode == DIK_T) exitwith {
		//[] call	MB_fnc_ToggleMode;
	//};
	if([DIK_LCONTROL] call MB_fnc_isPressed && _dikCode == DIK_R) exitwith {
		[] call MB_fnc_resetOrientation;
	};
	if([DIK_LCONTROL] call MB_fnc_isPressed && _dikCode == DIK_C) exitwith {
		[] call MB_fnc_Copy;
	};
	if([DIK_LCONTROL] call MB_fnc_isPressed && _dikCode == DIK_V) exitwith {
		[] call MB_fnc_Paste;
	};
	if(_dikCode == DIK_M) exitwith {
		[] call MB_fnc_toggleMap;
	};
	
	if([DIK_LCONTROL] call MB_fnc_isPressed && _dikCode == DIK_T) exitwith {
		{
			if(!isNull _x) then {
				[_x] call MB_fnc_AlignObjectToTerrain;
			};
		} foreach MB_Selected;
	};
	_factor = 1;
	if([DIK_LCONTROL] call MB_fnc_isPressed) then {
		_factor = 10;
	};
	
	
	if(_dikCode == DIK_UP) exitwith {
		if([DIK_LALT] call MB_fnc_isPressed) then {
			["Up",_factor] call MB_fnc_MoveSelection;
		} else {
			["Forward",_factor] call MB_fnc_MoveSelection;
		};
	};
	if(_dikCode == DIK_DOWN) exitwith {
		if([DIK_LALT] call MB_fnc_isPressed) then {
			["Down",_factor] call MB_fnc_MoveSelection;
		} else {
			["Backward",_factor] call MB_fnc_MoveSelection;
		};
	};
	if(_dikCode == DIK_LEFT) exitwith {
		if([DIK_LSHIFT] call MB_fnc_isPressed) then {
			["RotLeft",_factor] call MB_fnc_MoveSelection;
		} else {
			["Left",_factor] call MB_fnc_MoveSelection;
		};
	};
	if(_dikCode == DIK_RIGHT) exitwith {
		if([DIK_LSHIFT] call MB_fnc_isPressed) then {
			["RotRight",_factor] call MB_fnc_MoveSelection;
		} else {
			["Right",_factor] call MB_fnc_MoveSelection;
		};
	};
	if(_dikCode == DIK_NUMPAD7) exitwith {
		["north"] call MB_fnc_applyCamPreset;
	};
	if(_dikCode == DIK_NUMPAD9) exitwith {
		["east"] call MB_fnc_applyCamPreset;
	};
	if(_dikCode == DIK_NUMPAD3) exitwith {
		["south"] call MB_fnc_applyCamPreset;
	};
	if(_dikCode == DIK_NUMPAD1) exitwith {
		["west"] call MB_fnc_applyCamPreset;
	};
	if(_dikCode == DIK_NUMPAD5) exitwith {
		["top"] call MB_fnc_applyCamPreset;
	};
	if(_dikCode == DIK_NUMPAD0) exitwith {
		["45"] call MB_fnc_applyCamPreset;
	};
	if(_dikCode == DIK_SLASH) exitwith {
		[] spawn MB_FNC_ChatToggle;
	};
	if(_dikCode == DIK_RETURN) exitwith {
		[] call MB_FNC_ChatSend;
	};
	
	_handled;  