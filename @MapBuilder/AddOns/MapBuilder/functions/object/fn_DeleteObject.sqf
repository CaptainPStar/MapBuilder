private["_obj","_objArray","_index"];
	_obj = _this select 0;
	[_obj] call MB_fnc_Deselect;
	_index = _obj getvariable "MB_ObjVar_UID";
	
	[_obj] call MB_fnc_quadTreeRemove;
	_var = format["MB_Object_UID%1",_index];
	if(!isNil _var) then {
		_i = (MB_Objects find _obj);
		systemchat format["Deleting %1 at index %2",_var,_i];
		MB_Objects deleteAt _i;
		deletevehicle _obj;
		[_index] call MB_fnc_syncDelete;
		[] call MB_fnc_updateUsed;
	};
