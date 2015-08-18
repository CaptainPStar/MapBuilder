private["_center"];
	_center = [0,0,0];
	{
		_center = _center vectorAdd (_x getvariable "MB_ObjVar_PositionATL");
	} foreach MB_Selected;
	_center = _center vectorMultiply 1/count(MB_Selected);
	_center;