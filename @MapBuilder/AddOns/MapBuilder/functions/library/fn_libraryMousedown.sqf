_ctrl = _this select 0;
	_path = _this select 1;
	_data = tvData [170003,_path];
	if(_data != "") then {
		MB_LibraryDrag = _data;
		systemchat format["Dragging %1",_data];
	};