private["_screenDelta","_pitch","_obj","_bank","_yaw","_pos"];

if(!MB_ObjectDrag_Mutex) then {
	MB_ObjectDrag_Mutex = true;
	_screenDelta = _this select 0;
	{
		_obj = _x select 0;
		_pitch = _x select 1;

		_pitch = (_pitch + (_screenDelta select 0)*100);

		
		if(_pitch>180) then {
			_pitch = 180;
		};
		if(_pitch<-180) then {
			_pitch = -180;
		};
		
		_yaw = _obj getvariable "MB_ObjVar_Yaw";
		_pos = _obj getvariable "MB_ObjVar_PositionATL";
		_bank = _obj getvariable "MB_ObjVar_Bank";
		_x set [1,_pitch];
		_obj setposATL _pos;
		[_obj,[_pitch,_bank,_yaw]] call MB_fnc_SetPitchBankYaw;
		_obj setposATL _pos;
		[_obj] call MB_fnc_BBupdate;
	} foreach MB_ObjectChangePitchSelection;
	MB_ObjectDrag_Mutex = false;
};