private["_initialMousePos","_offset","_pos","_relPos","_height","_delta","_camdir"];
	_delta  = param [0];
	_relative  = param [1, false];
	//_delta set [2,0];
	if(!_relative) then {
		_camdir = (getDir MBCamera) + 90;
		
		_x = (_delta select 0)*cos(_camdir)+(_delta select 1)*sin(_camdir);
		_y = (_delta select 0)*sin(_camdir)-(_delta select 1)*cos(_camdir);
		_delta = [_y,_x,_delta select 2];
		_delta = (getpos MBCamera vectorAdd _delta) vectorDiff (getpos MBCamera);
	};
		{
		
			_opos = _x getvariable "MB_ObjVar_PositionATL";
			_npos = [0,0,0];
			if(_relative) then {
				_npos = (_x modelToWorld _delta);
				_npos set[2,(_opos select 2)+(_delta select 2)];
			} else {
				_npos = _opos vectorAdd _delta;
			};
			_x setvariable ["MB_ObjVar_PositionATL",_npos,false];
			[_x] call MB_fnc_UpdateObject;
		} foreach MB_Selected;
	//};