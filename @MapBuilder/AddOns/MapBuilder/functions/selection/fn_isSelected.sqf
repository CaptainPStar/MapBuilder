private["_object","_newArray","_found"];
	_object = _this select 0;
	_found = false;
	if(_object in MB_Selected) then {
		_found = true;
	};
	_found