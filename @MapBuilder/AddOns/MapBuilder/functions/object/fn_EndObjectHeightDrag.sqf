private["_pos","_obj"];
{
	_obj = _x select 0;
	_pos = _x select 1;
	
	_obj setvariable["MB_ObjVar_PositionATL",_pos,false];
	[_obj] call MB_fnc_UpdateObject;
} foreach MB_ObjectChangeHeightSelection;
MB_ObjectChangeHeightSelection = [];