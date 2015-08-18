	#include "\MB\MapBuilder\ui\dik.hpp"
	private["_handled", "_ctrl", "_dikCode", "_shift", "_ctrlKey", "_alt"];
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
		closeDialog 0;
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
		[3] call MB_fnc_togglePopup;
	};
	
	if([DIK_LCONTROL] call MB_fnc_isPressed && _dikCode == DIK_T) exitwith {
		{
			if(!isNull _x) then {
				[_x] call MB_fnc_AlignObjectToTerrain;
			};
		} foreach MB_Selected;
	};
	
	_handled;  