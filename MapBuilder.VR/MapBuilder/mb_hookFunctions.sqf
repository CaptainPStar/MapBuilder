MB_Hooks = [];
MB_HookList = [];
MB_fnc_addCallback = {
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
	private["_hook","_params","_hindex","_callback","_condition","_conMet","_hooks"];
	_hook = [_this,0,""] call bis_fnc_param;
	_params = [_this,1,[]] call bis_fnc_param;
	_hindex = MB_HookList find _hook;
	//_timer = diag_tickTime;
	//systemChat format["Begin Dispatch of %1(%2) P:%3",_hook,_hindex,_params];
	if(_hindex >= 0) then {
		_hooks = MB_Hooks select _hindex;
		//systemChat format["%1 has %2 callbacks",_hook,count(_hooks)];
		{
			_callback = (_x select 0);
			_condition = (_x select 1);
			//systemChat format["Callback %1",_foreachIndex];
			_conMet = objNull;
			
			_conMet = (_params call _condition); 
			
			//switch(typename _condition) do {
			//	case "CODE": {
			//		_conMet = (_params call _condition); 
			//	};
			//	case "STRING": {
			//		_conMet = _params call compile _condition;
			//	};
			//};
			//if(typename _conMet != "BOOL") exitwith {["A hook condition does not return bool: %1",_condition] call BIS_fnc_error;};
			if(_conMet) then {
				switch(typename _callback) do {
					case "CODE": {
						_params call _callback; 
					};
					case "STRING": {
						_params call compile format["_this spawn %1;",_callback];
					};
				};
			};
		} foreach _hooks;
	};
	//systemChat format["Dispatch of %1 ended in %2 sec.",_hook,diag_tickTime-_timer];
};
