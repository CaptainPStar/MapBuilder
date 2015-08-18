private["_vdir","_vup","_bank","_pitch","_return"];
	_obj = _this select 0;
	_vdir = vectordir _obj;
    _vup = vectorup _obj;
	_vright = _vdir vectorCrossProduct _vup;
	_mpitch = _obj getvariable "MB_ObjVar_Pitch";
	_mbank = _obj getvariable "MB_ObjVar_Bank";
	_myaw = _obj getvariable "MB_ObjVar_Yaw";
	
	_pitchedNorth = [[0,1,0],[1,0,0],_mpitch] call MB_fnc_RotateVector3D;
	_pitchBankedNorth = [_pitchedNorth,_vdir,_mbank] call MB_fnc_RotateVector3D;
	_yaw = acos(_pitchedNorth vectorcos _vdir);
	
	_vdirRot = [_vdir,_vup,_myaw] call MB_fnc_RotateVector3D;
	_vrightRot = [_vright,_vup,_myaw] call MB_fnc_RotateVector3D;
	_pitch = acos((_vdirRot vectorcos [0,1,0]));
	_bank = acos((_vrightRot vectorcos [1,0,0]));
	
	RotatedNorth = _vdirRot;
	RotatedRight = _vrightRot;


	_return = [_yaw,_pitch,_bank];
	_return;