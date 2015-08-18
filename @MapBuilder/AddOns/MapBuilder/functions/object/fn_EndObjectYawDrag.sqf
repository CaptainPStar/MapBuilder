private["_pos","_obj"];
{
	_obj = _x select 0;
	_yaw = _x select 1;
	_pos = _x select 2;
	_obj setvariable["MB_ObjVar_Yaw",_yaw,false];
	_obj setvariable["MB_ObjVar_PositionATL",_pos,false];
	[_obj] call MB_fnc_UpdateObject;
} foreach MB_ObjectChangeYawSelection;
MB_ObjectChangeYawSelection = [];