private["_pitch","_obj","_bank"];
{
	_obj = _x select 0;
	_bank = _x select 1;
	_obj setvariable["MB_ObjVar_Bank",_bank,false];
	[_obj] call MB_fnc_UpdateObject;
} foreach MB_ObjectChangeBankSelection;
MB_ObjectChangeBankSelection = [];