MB_FNC_FencerPlace = {
	private["_obj","_direction","_bbr","_dir","_fpos"];
	
	_direction = [_this,0,0] call bis_fnc_param;
	
	_obj = (MB_Selected select 0) select 0;
	
	_bbr = boundingBoxReal _obj;
	_p1 = _bbr select 0;
	_p2 = _bbr select 1;
	_maxWidth = abs ((_p2 select 0) - (_p1 select 0));
	_maxLength = abs ((_p2 select 1) - (_p1 select 1));
	_maxHeight = abs ((_p2 select 2) - (_p1 select 2));
	
	_dir = getdir _obj;
	_fdir = _dir;
	_pos = getpos _obj;
	
	_created = [(typeof _obj),_pos] call MB_fnc_CreateObject;
	_created setdir _dir;
	
	switch (_direction) do {
		case 0: {
			[_obj,_created,[0,_maxLength,0]] call MB_fnc_SetRelPos;
		};
		case 1: {
			[_obj,_created,[0,-1*_maxLength,0]] call MB_fnc_SetRelPos;
		};
		case 2: {
			[_obj,_created,[-1*_maxWidth,0,0]] call MB_fnc_SetRelPos;
		};
		case 3: {
			[_obj,_created,[_maxWidth,0,0]] call MB_fnc_SetRelPos;
		};
};
	[_obj] call MB_fnc_Deselect;
	[_created] call MB_fnc_Select;
};



