private["_hook","_callback","_hindex","_cindex","_return","_condition"];
	_hook = [_this,0,""] call bis_fnc_param;
	_callback = [_this,1,{},[{},""]] call bis_fnc_param;
	_condition = [_this,2,{true},[{},""]] call bis_fnc_param;
	_hindex = MB_HookList find _hook;
	if(_hindex == -1) then {
		_hindex = MB_HookList pushBack _hook;
		MB_Hooks set[_hindex,[]];
	};
	_cindex = (MB_Hooks select _hindex) pushBack [_callback,_condition];
	_return = [_hindex,_cindex];
	_return;