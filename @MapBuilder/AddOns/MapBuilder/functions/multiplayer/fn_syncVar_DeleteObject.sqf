	private["_obj","_uid","_pos","_pitch","_bank","_yaw","_simulate","_locked","_owner"];
	_obj = _this select 0;
	_uid = MB_Objects find _obj;
	_pos = _obj getvariable "MB_ObjVar_PositionATL";
	_pitch = _obj getvariable "MB_ObjVar_Pitch";
	_bank = _obj getvariable "MB_ObjVar_Bank";
	_yaw = _obj getvariable "MB_ObjVar_Yaw";
	_simulate = _obj getvariable "MB_ObjVar_Simulate";
	_locked = _obj getvariable "MB_ObjVar_Locked";
	_owner = owner _obj;
	if(_uid>=0) then {
		systemChat format["Sending sync of %1",_uid];
		MB_syncVar_Object = [typeof _obj,_uid,_pos,_pitch,_bank,_yaw,_simulate,_locked, _owner];
		publicVariable "MB_syncVar_Object";
		
		//[_params, "MB_fnc_syncRemoteObject", true, false, false] call BIS_fnc_MP;
	};