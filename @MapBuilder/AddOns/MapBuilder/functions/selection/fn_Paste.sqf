private["_vars","_offset","_center"];
	[] call MB_fnc_DeselectAll;
	//_objects = [screenToWorld MB_MousePosition,MB_CopyPaste] call MB_fnc_ReconstructSelection;
	_center = +MB_MousePosition;
	{
		private["_type","_offset","_vars","_pos"];
		_type = _x select 0;
		_offset = _x select 1;
		_vars = _x select 2;
		_pos = _center vectorAdd _offset;
		_obj = [_type,_pos] call MB_fnc_CreateObject;
		_vars set[0,_pos];
		systemchat format["%1",_vars];
		[_obj,_vars] call MB_fnc_setObjVars;
		[_obj] call MB_fnc_Select;
	} foreach MB_CopyPaste;