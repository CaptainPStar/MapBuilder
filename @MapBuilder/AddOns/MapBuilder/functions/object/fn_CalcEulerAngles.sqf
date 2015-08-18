_vdir = _this select 0;
    _vup = _this select 1;
	private ["_obj","_pitch","_bank","_yaw","_vdir","_vup","_sign"];

	_yaw = acos((_vdir) vectorCos [0,1,0]);

	//rotate it around the origin according to the object's yaw (direction)
	//we will then be left with the objects vectordir if it were facing north
	_vdir = [_vdir, _yaw] call BIS_fnc_rotateVector2D;
	_vdirY = _vdir select 1;
	if (_vdirY == 0) then {_vdirY = 0.01;};

	//if we reverse the process we used to set pitch, we can now get pitch
	_pitch = atan ((_vdir select 2) / _vdirY);


	//----------------------------
	//find bank
	//----------------------------

	//repeat for bank (vectorup) with the same process as above
	//for some reason, the results of this are not fully accurate
	//the amount it is off depends on the pitch (you'd think I'd be able to figure it out from that clue...)

	_vup = [_vup, _yaw] call BIS_fnc_rotateVector2D;
	_vupZ = _vup select 2;
	if (_vupZ == 0) then {_vupZ = 0.01;};
	_bank = atan ((_vup select 0) / _vupZ);

	//if we are rolled over (abs bank > 90), we need to adjust our result
	if((_vup select 2) < 0) then
	{
		_sign = [1,-1] select (_bank < 0);
		_bank = _bank - _sign*180;
	};


	//----------------------------
	//return value
	//----------------------------

	[_yaw, _pitch, _bank];