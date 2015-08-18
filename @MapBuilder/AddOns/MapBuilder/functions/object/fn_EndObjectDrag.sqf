_center = MB_MousePosition;
{
	_obj = _x select 0;
	_pos = _x select 1;
	_offset = _x select 2;
	
	_obj setvariable["MB_ObjVar_PositionATL",_pos,false];
	[_obj] call MB_fnc_UpdateObject;
} foreach MB_ObjectMoveSelection;
MB_ObjectMoveSelection = [];
MB_ObjectMoveHeight = false;