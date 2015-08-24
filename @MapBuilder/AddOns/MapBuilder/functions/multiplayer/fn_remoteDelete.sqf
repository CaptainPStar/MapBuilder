	private["_uid","_obj"];
	_uid = [_this,0] call bis_fnc_param;
	
	_var = format["MB_Object_UID%1",_uid];
	
	if(!isNil _var) then {
		_obj = call compile _var;
		if(!isNull(_obj)) then {
			MB_Objects deleteAt (MB_Objects find _var);
			deletevehicle _obj;
			systemChat format["Remotedelete of object %1",_uid];
		};
	};