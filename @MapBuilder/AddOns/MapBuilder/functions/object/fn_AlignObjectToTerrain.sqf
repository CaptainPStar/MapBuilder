_obj = _this select 0;
	_pos = _obj getvariable "MB_ObjVar_PositionATL";
	
	_surfaceNormal = surfaceNormal _pos;
	_obj setvectorUp _surfaceNormal;
	_eulers = _obj call BIS_fnc_getPitchBank;
	
	_obj setvariable["MB_ObjVar_Pitch",(_eulers select 0),false];
	_obj setvariable["MB_ObjVar_Bank",(_eulers select 1),false];
	[_obj] call MB_fnc_UpdateObject;