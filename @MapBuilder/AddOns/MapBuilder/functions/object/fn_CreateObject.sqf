private["_obj","_class","_pos","_dir","_uid","_var","_sync"];
	_class = [_this,0] call bis_fnc_param;
	_pos = [_this,1] call bis_fnc_param;
	_uid =  [_this,2,-1] call bis_fnc_param;
	_sync =  [_this,3,true] call bis_fnc_param;
	if(_uid == -1) then {
		_uid = MB_NUID;
		MB_NUID = MB_NUID + 1;
		publicVariable "MB_NUID";
	};
	_var = format["MB_Object_UID%1",_uid];
	if(!isNil _var) exitwith {
		systemChat format["Error: Object with ID %1 can't be created. Already exists.",_uid];
		_uid = -1;
		_obj = objNull;
		_obj;
	};

	if(_uid>=0) then {
		_obj = _class createvehiclelocal _pos;
		if(isNull _obj) exitwith {
			systemChat "Error creating object!";
		};
		_obj setpos _pos;
		_obj setvehiclevarname _var;
		call compile format["%1 = _obj;",_var];
		_obj setvariable["MB_ObjVar_UID",_uid,false];
		MB_Objects pushback _obj;
		[_obj,_sync] call MB_fnc_InitObject;
		[_obj,true] call MB_fnc_BBupdate;
	} else {
		_obj = objNull;
	};
	_obj;