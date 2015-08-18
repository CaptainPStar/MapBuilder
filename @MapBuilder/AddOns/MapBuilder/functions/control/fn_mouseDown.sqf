private["_key","_return","_status"];
	_key = _this select 1;
	_uX = _this select 2;
	_uY = _this select 3;
	_status = MB_MouseKeys select _key;
	_hasSelected = false;
	MB_MouseKeys set [_key,[true,diag_tickTime,_status select 2]];
	//MB_ClickedObject = [_uX,_uY] call MB_fnc_SelectUnderCursor;
	MB_ClickedPosition = screenToWorld [_uX,_uY];

	["onMouseDown",[_key,[_uX,_uY]]] call MB_fnc_dispatchCallbacks;


	true;