MB_Hooks = [];
MB_HookList = [];
MB_fnc_addCallback = {
	private["_hook","_callback","_hindex","_cindex","_return"];
	_hook = [_this,0,""] call bis_fnc_param;
	_callback = [_this,1,{},[{},""]] call bis_fnc_param;
	_hindex = MB_HookList find _hook;
	if(_hindex == -1) then {
		_hindex = MB_HookList pushBack _hook;
		MB_Hooks set[_hindex,[]];
	};
	_cindex = (MB_Hooks select _hindex) pushBack _callback;
	_return = [_hindex,_cindex];
	_return;
};
MB_fnc_removeCallback = {
	private["_id"];
	_id  = [_this,0,[],[[]],[2]] call bis_fnc_param;
	(MB_Hooks select (_id select 0)) deleteAt (_id select 1);
};
MB_fnc_removeAllCallbacks = {
	private["_hindex","_hook"];
	_hook = [_this,0,""] call bis_fnc_param;
	_hindex = MB_HookList find _hook;
	if(_hindex >= 0) then {
		MB_Hooks set[_hindex,[]];
	};
};
MB_fnc_dispatchCallbacks = {
	private["_hook","_params","_hindex"];
	_hook = [_this,0,""] call bis_fnc_param;
	_params = [_this,1,[]] call bis_fnc_param;
	_hindex = MB_HookList find _hook;
	if(_hindex >= 0) then {
		_hooks = MB_Hooks select _hindex;
		{
			switch(typename _x) do {
				case "CODE": {
					_params call _x; 
				};
				case "STRING": {
					call compile format["%1 spawn %2",_params,_x];
				};
			};
		} foreach _hooks;
	};
};
