private["_object","_newArray","_corners"];
	_object = _this select 0;
	if(!isNull _object) then {
		_index = MB_Selected find _object;
		if(_index>=0) then {
			MB_Selected deleteAt _index;
			_object setVariable["MB_isSelected",false,false];
			[_object] call MB_FNC_BBupdate;
		};
	};
	call MB_fnc_updateSelectedText;