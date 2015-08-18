private["_pos","_obj"];
	{
		_obj = _x;
		_pos = _obj getvariable "MB_ObjVar_PositionATL";
		MB_ObjectChangeHeightSelection pushBack [_obj,_pos];
	} foreach MB_Selected;