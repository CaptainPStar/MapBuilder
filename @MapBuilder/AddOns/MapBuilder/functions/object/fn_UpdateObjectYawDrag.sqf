private["_screenDelta","_pos","_obj","_rot","_yaw","_pitch","_bank"];
	_screenDelta = _this select 0;
	if(!MB_UpdateObjectYawLock) then {
		MB_UpdateObjectYawLock = true;
		_rot = (_screenDelta select 0)*100;
		{
			_obj = _x select 0;
			_yaw = _x select 1;
			_pos = _x select 2;
			
			_yaw = _yaw + _rot;
			if(_yaw < 0) then {
				_yaw = 360 + _yaw;
			};
			if(_yaw > 360) then {
				_yaw = (_yaw - 360);
			};
			_pos = [MB_ObjectChangeYawRotationCenter,_pos,_rot] call MB_fnc_RotatePos;
			_x set [1,_yaw];
			_x set [2,_pos];
			_pitch = _obj getvariable "MB_ObjVar_Pitch";
			_bank = _obj getvariable "MB_ObjVar_Bank";
			[_obj,[_pitch,_bank,_yaw]] call MB_fnc_SetPitchBankYaw;
			_obj setposATL _pos;
		} foreach MB_ObjectChangeYawSelection;
		MB_UpdateObjectYawLock = false;
	};