private["_screenDelta","_pitch","_obj","_bank","_yaw","_pos"];
if(!MB_ObjectDrag_Mutex) then {
	MB_ObjectDrag_Mutex = true;
	_screenDelta = _this select 0;
	{
		_obj = _x select 0;
		_bank = _x select 1;

		_bank = (_bank + (_screenDelta select 1)*100);
		
		if(_bank>180) then {
			_bank = 180;
		};
		if(_bank<-180) then {
			_bank = -180;
		};
		
		
		
		_yaw = _obj getvariable "MB_ObjVar_Yaw";
		_pos = _obj getvariable "MB_ObjVar_PositionATL";
		_pitch = _obj getvariable "MB_ObjVar_Pitch";
		_x set [1,_bank];
		_obj setposATL _pos;
		[_obj,[_pitch,_bank,_yaw]] call MB_fnc_SetPitchBankYaw;
		_obj setposATL _pos;
		[_obj] call MB_fnc_BBupdate;
	} foreach MB_ObjectChangeBankSelection;
	MB_ObjectDrag_Mutex = false;
};