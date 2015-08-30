private["_object"];
	_object = _this select 0;
	if(!isNull _object) then {
		if(!(_object in MB_Selected)) then {
			MB_Selected pushBack _object;
			_object setVariable["MB_isSelected",true,false];
			[_object] call MB_FNC_BBupdate;
		};
	};
call MB_fnc_updateSelectedText;