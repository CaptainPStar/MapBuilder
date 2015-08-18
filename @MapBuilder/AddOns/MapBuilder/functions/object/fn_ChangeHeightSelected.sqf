private["_delta","_pos","_obj"];
	_delta = _this select 0;	
	{
		_obj = _x;
		_pos = _obj getvariable "MB_ObjVar_PositionATL";
		_pos = [_pos select 0, _pos select 1,(_pos select 2)-_delta];
		_obj setvariable ["MB_ObjVar_PositionATL",_pos,false];
		[_obj] call MB_fnc_UpdateObject;
	} foreach MB_Selected;	