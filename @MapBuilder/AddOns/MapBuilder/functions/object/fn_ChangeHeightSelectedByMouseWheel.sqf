#include "\MB\MapBuilder\ui\includes\dik.hpp"
private["_delta","_camPos"];
_delta = _this select 0;
if(_delta > 0) then {
	if([DIK_LCONTROL] call MB_fnc_isPressed) then {
		["Up",2] call MB_fnc_MoveSelection;
	} else {
		["Up",0.5] call MB_fnc_MoveSelection;
	};
} else {
	if([DIK_LCONTROL] call MB_fnc_isPressed) then {
		["Down",2] call MB_fnc_MoveSelection;
	} else {
		["Down",0.5] call MB_fnc_MoveSelection;
	};
};