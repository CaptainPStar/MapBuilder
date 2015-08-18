private["_key","_return","_status"];
	_key = _this select 1;
	_uX = _this select 2;
	_uY = _this select 3;
	_status = MB_MouseKeys select _key;
	MB_MouseKeys set [_key,[false,_status select 1,diag_tickTime]];

	["onMouseUp",[_key,[_uX,_uY]]] call MB_fnc_dispatchCallbacks;
	
	if(isMultiplayer) then {
		{
			[_x] call MB_fnc_syncObject;
		} foreach MB_Selected;
	};

	true;