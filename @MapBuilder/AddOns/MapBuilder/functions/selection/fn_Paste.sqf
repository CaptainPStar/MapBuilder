private["_vars","_offset"];
	[] call MB_fnc_DeselectAll;
	//_objects = [screenToWorld MB_MousePosition,MB_CopyPaste] call MB_fnc_ReconstructSelection;
	_center = MB_MousePosition;
	{
		_type = _x select 0;
		_offset = _x select 1;
		_vars = _x select 2;
		_pos = _center vectorAdd _offset;
		_obj = [_type,_pos] call MB_fnc_CreateObject;
		_vars set[0,_pos];
		[_obj,_vars] call MB_fnc_setObjVars;
		[_obj] call MB_fnc_Select;
	} foreach MB_CopyPaste;