private["_shown"];
	_id = _this select 0;
	if((count(MB_PopupStatus)-1)>=_id) then {
		_shown = MB_PopupStatus select _id;
		if(!(typename(_shown)=="BOOL")) then {
			_shown = false;
		};
	} else {
		_shown = false;
	};
	_shown;