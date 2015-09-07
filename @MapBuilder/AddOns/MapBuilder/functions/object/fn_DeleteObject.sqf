private["_obj","_objArray","_index","_box","_base"];
	_obj = _this select 0;
	_sync = param[1,true];
	[_obj] call MB_fnc_Deselect;
	_index = _obj getvariable "MB_ObjVar_UID";
	
	[_obj] call MB_fnc_quadTreeRemove;
	_var = format["MB_Object_UID%1",_index];
	if(!isNil _var) then {
		_i = (MB_Objects find _obj);
		systemchat format["Deleting %1 at index %2",_var,_i];
		MB_Objects deleteAt _i;
		
		_box = _obj getVariable["MB_BoundingBox",objNull];
		_base = _obj getVariable["MB_BaseHelper",objNull];
		
		if(!isNull _box) then {
			deletevehicle _box;
		};
		if(!isNull _base) then {
			deletevehicle _base;
		};
		deletevehicle _obj;
		if(_sync) then {
			[_index] call MB_fnc_syncDelete;
		};
		[] call MB_fnc_updateUsed;
	};
