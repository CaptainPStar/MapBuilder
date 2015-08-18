	private["_hindex","_hook"];
	_hook = [_this,0,""] call bis_fnc_param;
	_hindex = MB_HookList find _hook;
	if(_hindex >= 0) then {
		MB_Hooks set[_hindex,[]];
	};