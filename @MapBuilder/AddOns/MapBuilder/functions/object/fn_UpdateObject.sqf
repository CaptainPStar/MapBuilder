private["_obj","_pos","_pitch","_bank","_yaw","_simulate","_locked","_sync"];
	_obj = [_this,0] call bis_fnc_param;
	_sync = [_this,1,true] call bis_fnc_param; //Should the object beeing synced in MP
	_pos = _obj getvariable "MB_ObjVar_PositionATL";
	_pitch = _obj getvariable "MB_ObjVar_Pitch";
	_bank = _obj getvariable "MB_ObjVar_Bank";
	_yaw = _obj getvariable "MB_ObjVar_Yaw";
	_simulate = _obj getvariable "MB_ObjVar_Simulate";
	_locked = _obj getvariable "MB_ObjVar_Locked";

	
	_obj setposATL _pos;
	[_obj,[_pitch,_bank,_yaw]] call MB_fnc_SetPitchBankYaw;
	_obj setposATL _pos;
	_obj enableSimulation _simulate;
	if(isMultiplayer && _sync) then {
		[_obj] call MB_fnc_syncObject;
	};
	[_obj] call MB_fnc_quadTreeUpdate;
	[_obj] call MB_fnc_BBupdate;