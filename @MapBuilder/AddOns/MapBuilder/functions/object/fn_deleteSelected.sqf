private["_selected"];
_selected = +MB_Selected;
{
	[_x] call MB_fnc_DeleteObject;
} foreach _selected;