private["_rotateCenter","_rot","_"];
	_rot = _this select 0;
	if(isNull(MB_ClickedObject)) then {
		_rotateCenter = (MB_Selected select 0) getvariable "MB_ObjVar_PositionATL";
	} else {
		_rotateCenter = MB_ClickedObject getvariable "MB_ObjVar_PositionATL";
	};
	if(([DIK_LSHIFT] call MB_fnc_isPressed)) then {
		_rotateCenter = MB_ClickedPosition;
	};	
	{
		private["_dir","_relPos","_pos"];
		
		_dir = _x getvariable ["MB_ObjVar_Yaw",0];
		_dir = _dir + _rot;
		
		_pos = _x getvariable "MB_ObjVar_PositionATL";
		
		_relPos = [_rotateCenter,_pos,_rot] call MB_fnc_RotatePos;
		_relPos set[2,(_pos select 2)];
		_x setvariable ["MB_ObjVar_PositionATL",_relPos,false];
		_x setvariable ["MB_ObjVar_Yaw",_dir,false];
		[_x] call MB_fnc_UpdateObject;
	} foreach MB_Selected;