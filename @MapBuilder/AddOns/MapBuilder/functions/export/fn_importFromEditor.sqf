{
		if(!(_x in MB_Objects)) then {
			_obj = _x;
			_pos = getposATL _obj;
			_yawpitchbank = [(vectorDir _obj),(vectorUp _obj)] call MB_fnc_CalcEulerAngles;
			_obj setvariable["MB_ObjVar_PositionATL",_pos,false];
			_obj setvariable["MB_ObjVar_Pitch",(_yawpitchbank select 1),false];
			_obj setvariable["MB_ObjVar_Bank",(_yawpitchbank select 2),false];
			_obj setvariable["MB_ObjVar_Yaw",(_yawpitchbank select 0),false];
			_obj setvariable["MB_ObjVar_Simulate",simulationEnabled _obj,false];
			_obj setvariable["MB_ObjVar_Locked",false,false];
			_obj setvariable["MB_ObjVar_Scale",1,false];
			MB_Objects pushBack _obj;
		};
	} foreach allMissionObjects "Static";