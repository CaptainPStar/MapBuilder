private["_line","_object"];
	_line = [_this,0,"[]"] call bis_fnc_param;
	_object = call compile _line;
	_object;