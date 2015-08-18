private["_relPos","_created","_direction","_obj","_dir","_pos","_maxWidth","_maxLength","_bounding"];
	if(count(MB_Selected)>0 && MB_FencerActive) then {
		_obj = (MB_Selected select (count(MB_Selected)-1));
		
		_bounding = [_obj] call MB_FNC_FencerCalcBounding;
		_dir = _obj getvariable "MB_ObjVar_Yaw";
		_pos = _obj getvariable "MB_ObjVar_PositionATL";
		_maxWidth = _bounding select 1;
		_maxLength = _bounding select 0;


		if(isNull MB_FencerPreview) then {
		
			_created = "Sign_Arrow_Direction_Blue_F" createVehicleLocal _pos;
			_created setObjectTexture [0,'#(argb,8,8,3)color(0,1,0,1)'];
			MB_FencerPreview = _created;
		} else {
			_created = MB_FencerPreview;
		};
		_created setdir _dir+90;
		
		_direction = MB_FencerDir;

		switch (_direction) do {
			case 0: {
				[_obj,_created,[0,_maxLength,0]] call MB_fnc_SetRelPos;
				_created setdir (_dir);
				_created setpos [getpos _created select 0,getpos _created select 1,(getpos _created select 2)+0.75];
			};
			case 1: {
				[_obj,_created,[0,-1*(_maxLength),0]] call MB_fnc_SetRelPos;
				_created setdir (_dir+180);
				_created setpos [getpos _created select 0,getpos _created select 1,(getpos _created select 2)+0.75];
			};
			case 2: {
				[_obj,_created,[-1*(_maxWidth),0,0]] call MB_fnc_SetRelPos;
				_created setdir (_dir+270);
				_created setpos [getpos _created select 0,getpos _created select 1,(getpos _created select 2)+0.75];
			};
			case 3: {
				[_obj,_created,[_maxWidth,0,0]] call MB_fnc_SetRelPos;
				_created setdir (_dir+90);
				_created setpos [getpos _created select 0,getpos _created select 1,(getpos _created select 2)+0.75];
			};
		};
	} else {
		[] call MB_FNC_FencerDeletePreview;
	};