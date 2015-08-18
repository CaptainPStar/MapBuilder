{
	_x setvariable["MB_ObjVar_Pitch",0,false];
	_x setvariable["MB_ObjVar_Bank",0,false];
	_x setvariable["MB_ObjVar_Yaw",0,false];
	[_x] call MB_fnc_UpdateObject;
} foreach MB_Selected;