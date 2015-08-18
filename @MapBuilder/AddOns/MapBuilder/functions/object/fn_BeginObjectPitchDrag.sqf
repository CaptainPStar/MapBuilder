private["_pitch","_obj","_bank"];
	{
		_obj = _x;
		_pitch = _obj getvariable "MB_ObjVar_Pitch";

		MB_ObjectChangePitchSelection pushBack [_obj,_pitch];
	} foreach MB_Selected;