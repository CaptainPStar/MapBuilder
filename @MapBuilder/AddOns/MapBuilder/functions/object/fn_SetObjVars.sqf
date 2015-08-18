private["_obj","_vars"];
	_obj = [_this,0] call bis_fnc_param;
	_vars = [_this,1] call bis_fnc_param;
	
	_obj setvariable["MB_ObjVar_PositionATL",(_vars select 0),false];

	_obj setvariable["MB_ObjVar_Pitch",(_vars select 1),false];
	_obj setvariable["MB_ObjVar_Bank",(_vars select 2),false];
	_obj setvariable["MB_ObjVar_Yaw",(_vars select 3),false];
	
	_obj setvariable["MB_ObjVar_Simulate",(_vars select 4),false];
	_obj setvariable["MB_ObjVar_Locked",(_vars select 5),false];
	
	_obj setvariable["MB_ObjVar_Scale",(_vars select 6),false];
	
	[_obj] call MB_fnc_UpdateObject;