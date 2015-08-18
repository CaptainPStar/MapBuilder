private["_key","_return","_status"];
	_key = _this select 0;
	_status = MB_MouseKeys select _key;
	if(_status select 0) then {
		_return = true;
	} else {
		_return = false;
	};
	_return