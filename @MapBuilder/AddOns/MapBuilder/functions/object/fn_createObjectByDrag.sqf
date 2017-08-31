private["_xp","_yp"];
	_xp = [_this,0] call bis_fnc_param;
	_yp = [_this,1] call bis_fnc_param;
	[MB_LibraryDrag,screenToWorld [_xp,_yp]] call MB_fnc_CreateObject;
