private["_mode"];
	_mode = [_this,0,0] call bis_fnc_param;
	if(MB_Mode != _mode) then {
		MB_Mode = _mode;
		switch (_mode) do {
			case 0: { systemChat "Mode is 0" };
			case 1: { systemChat "Mode is 1" };
			default { systemChat "DefaultMode" };
		};
	};