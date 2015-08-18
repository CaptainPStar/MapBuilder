private["_obj","_pos","_pitch","_bank","_yaw","_simulate","_locked"];
	_obj = [_this,0] call bis_fnc_param;
	
	_pos = [_this,1] call bis_fnc_param;
	_pitch =[_this,2] call bis_fnc_param;
	_bank = [_this,3] call bis_fnc_param;
	_yaw = [_this,4] call bis_fnc_param;
	//_simulate = _obj getvariable "MB_ObjVar_Simulate";
	//_locked = _obj getvariable "MB_ObjVar_Locked";
	
	_obj setposATL _pos;
	[_obj,[_pitch,_bank,_yaw]] call MB_fnc_SetPitchBankYaw;
	_obj setposATL _pos;
//	_obj enableSimulation _simulate;