private["_dx","_dy","_obj","_pitch","_bank"];
	_dx = _this select 0;
	_dy = _this select 1;
	{
		_obj = _x;
		_pitch = _obj getvariable ["MB_ObjVar_Pitch",0];
		_bank = _obj getvariable ["MB_ObjVar_Bank",0];

		_pitch = _pitch+_dy;
		_bank = _bank +_dx; 
		if(_pitch>180) then {
			_pitch = 180;
		};
		if(_bank>180) then {
			_bank = 180;
		};
		if(_pitch<-180) then {
			_pitch = -180;
		};
		if(_bank<-180) then {
			_bank = -180;
		};
		
		_obj setvariable["MB_ObjVar_Pitch",_pitch,false];
		_obj setvariable["MB_ObjVar_Bank",_bank,false];
		[_obj] call MB_fnc_UpdateObject;
	} foreach MB_Selected;	