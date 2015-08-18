private["_pitch","_obj","_bank"];
	{
		_obj = _x;
		_bank = _obj getvariable "MB_ObjVar_Bank";
		MB_ObjectChangeBankSelection pushBack [_obj,_bank];
	} foreach MB_Selected;