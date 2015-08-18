private["_obj","_objArray","_index"];
	_obj = _this select 0;
	[_obj] call MB_fnc_Deselect;
	_index = MB_Objects find _obj;
	if(_index >= 0) then {
		[_obj] call MB_fnc_quadTreeRemove;
		MB_Objects set[_index,ObjNull];
		deletevehicle _obj;
		[_index] call MB_fnc_syncDelete;
		[] call MB_fnc_updateUsed;
	};