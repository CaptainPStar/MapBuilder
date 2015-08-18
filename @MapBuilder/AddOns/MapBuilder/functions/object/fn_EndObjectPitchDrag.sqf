private["_pitch","_obj","_bank"];
{
	_obj = _x select 0;
	_pitch = _x select 1;
	_obj setvariable["MB_ObjVar_Pitch",_pitch,false];
	[_obj] call MB_fnc_UpdateObject;
} foreach MB_ObjectChangePitchSelection;
MB_ObjectChangePitchSelection = [];