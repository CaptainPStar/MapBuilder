private["_uX","_uY","_layer","_obj","_pos","_opos","_objects","_shift","_isSelected"];
	_uX = _this select 2;
	_uY = _this select 3;
	_shift = _this select 4;
	_obj = _this call MB_fnc_getClickedObject;
	if(!isNull _obj) then {
		if((_obj in MB_Objects)) then {
			if(!_shift) then {
				[] call MB_fnc_DeselectAll;
			};
			_isSelected = [_obj] call MB_fnc_isSelected;
			if(!_isSelected) then {
				[_obj] call MB_fnc_Select;
			} else {
				[_obj] call MB_fnc_Deselect;
			};

		} else {
			[] call MB_fnc_DeselectAll;
		};
	} else {
		[] call MB_fnc_DeselectAll;
	};
