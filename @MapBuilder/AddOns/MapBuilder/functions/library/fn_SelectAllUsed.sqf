#include "\MB\MapBuilder\ui\includes\dik.hpp"
private["_display","_ctrl","_class"];
	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 170801;
	_class = _ctrl tvData(tvCurSel _ctrl);
	if(_class != "") then {
		if(!([DIK_LSHIFT] call MB_fnc_isPressed)) then {
			[] call MB_fnc_DeselectAll;
		};
		{
			if((typeof _x) == _class) then {
				[_x] call MB_fnc_Select;
			};
		} foreach MB_Objects;
	};