private["_handled", "_ctrl", "_dikCode", "_shift", "_ctrlKey", "_alt"];
	_ctrl = _this select 0;
	_dikCode = _this select 1;
	_shift = _this select 2;
	_ctrlKey = _this select 3;
	_alt = _this select 4;
	
	if(!MB_RegisterKeys) exitwith {};
	MB_Keys set[_dikCode,false];
	
	_handled = true;

	//MBCamera camSetPos [(getpos MBCamera select 0),(getpos MBCamera select 1),(getpos MBCamera select 2)+0.1];
	//MBCamera camCommit 0;

	_handled; 