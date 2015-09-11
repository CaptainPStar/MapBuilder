private["_vector"];
_vector = MB_MousePosition vectorAdd MB_BrushingLookAt;

if(MB_BrushCamFollowAngleLock) then {
	private ["_centerPos", "_pos", "_dir"];
	private ["_px", "_py", "_mpx", "_mpy", "_ma", "_rpx", "_rpy"];
	
	_centerPos = MB_MousePosition;
	_pos = _vector;
	_dir = MB_BrushDirection + MB_BrushCamAngle;

		_px = _pos select 0;
		_py = _pos select 1;
		_mpx = _centerPos select 0;
		_mpy = _centerPos select 1;
		_ma = _dir;

		//Now, rotate point
		_rpx = ( (_px - _mpx) * cos(_ma) ) + ( (_py - _mpy) * sin(_ma) ) + _mpx;
		_rpy = (-(_px - _mpx) * sin(_ma) ) + ( (_py - _mpy) * cos(_ma) ) + _mpy;

	_vector = [_rpx, _rpy, (_pos select 2)];
	MB_CamPos set[1,MB_BrushDirection];
};

MB_CamPos set[0,_vector];

