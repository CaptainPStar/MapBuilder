private["_initialMousePos","_offset","_pos","_relPos","_height","_delta"];
	_delta  = [_this,0] call bis_fnc_param;
		_delta set [2,0];

		{
		
			_opos = _x getvariable "MB_ObjVar_PositionATL";
			_npos = _opos vectorAdd _delta;
			_x setvariable ["MB_ObjVar_PositionATL",_npos,false];
			[_x] call MB_fnc_UpdateObject;
		} foreach MB_Selected;
	//};