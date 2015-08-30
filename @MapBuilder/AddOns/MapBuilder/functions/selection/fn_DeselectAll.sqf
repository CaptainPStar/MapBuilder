{
	_x setVariable["MB_isSelected",false,false];
	[_x] call MB_FNC_BBupdate;
} foreach MB_Selected;

MB_Selected = [];