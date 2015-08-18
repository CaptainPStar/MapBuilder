private["_xp","_yp"];
	_xp = [_this,2] call bis_fnc_param;
	_yp = [_this,3] call bis_fnc_param;
	[MB_LibraryDrag,screenToWorld [_xp,_yp]] call MB_fnc_CreateObject;
	MB_LibraryDrag = "";