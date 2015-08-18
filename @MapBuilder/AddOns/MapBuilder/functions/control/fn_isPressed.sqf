private["_key","_return","_status"];
	_key = _this select 0;
	_status = MB_Keys select _key;
	if(_status) then {
		_return = true;
	} else {
		_return = false;
	};
	_return