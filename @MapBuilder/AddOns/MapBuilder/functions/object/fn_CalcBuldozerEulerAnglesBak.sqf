private["_vdir","_vup","_bank","_pitch","_return"];
	_obj = _this select 0;
	_vdir = vectordir _obj;
    _vup = vectorup _obj;
	_right = _vdir vectorCrossProduct _vup;
	_mpitch = _obj getvariable "MB_ObjVar_Pitch";
	_mbank = _obj getvariable "MB_ObjVar_Bank";
	_mpitch = _obj getvariable "MB_ObjVar_Pitch";
	_myaw = _obj getvariable "MB_ObjVar_Yaw";
	
	_pitchedNorth = [[0,1,0],[1,0,0],_pitch] call MB_fnc_RotateVector3D;
	_pitchBankedNorth = [_pitchedNorth,_vdir,_mbank] call MB_fnc_RotateVector3D;
	_yaw = acos(_pitchBankedNorth vectorcos _vdir);
	
	_debankedUp = [_vup,_vdir,_mbank] call MB_fnc_RotateVector3D;
	_dePitchBankedDir = [_vdir,_debankedUp,_myaw] call MB_fnc_RotateVector3D;
	_pitch = acos(_dePitchBankedDir vectorcos _vdir);
	
	
	_yawNorth =  [[0,1,0],[1,0,0],-1*_yaw] call MB_fnc_RotateVector3D;
	_bank = acos(_yawNorth vectorcos _right);
	
	_return = [_yaw,_pitch,_bank];

	_return;