	private["_uid"];
	_uid = [_this,0] call bis_fnc_param;
	//[[_uid], "MB_fnc_remoteDelete", true, false, false] call BIS_fnc_MP;
	MB_syncVar_DeleteObject = _uid;
	publicVariable "MB_syncVar_DeleteObject";