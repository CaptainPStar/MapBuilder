_center = MB_MousePosition;
	{
		_vars = [_x] call MB_fnc_getObjectVars;
		_offset = (_vars select 0) vectorDiff _center;
		MB_ObjectMoveSelection pushBack [_x,(_vars select 0),_offset];
	} foreach MB_Selected;