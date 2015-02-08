MB_Fencer_callback = [];
MB_FNC_OpenFencer = {
	if(count(MB_Fencer_callback)==0) then {
		MB_Fencer_callback = ["loop","MB_FNC_FencerUpdatePreview"] call mb_fnc_addCallback;
		[4,true] call mb_fnc_togglePopup;
	
	} else {
		[] call MB_FNC_CloseFencer;
	};
};
MB_FNC_CloseFencer = {
	[MB_Fencer_callback] call mb_fnc_removeCallback;
	MB_Fencer_callback = [];
	[] call MB_FNC_FencerDeletePreview;
	[4,false] call mb_fnc_togglePopup;
};
MB_FNC_FencerUpdatePreview = {
	private["_relPos","_created","_direction","_obj","_dir","_pos","_maxWidth","_maxLength"];
	if(count(MB_Selected)>0) then {
		_obj = (MB_Selected select (count(MB_Selected)-1)) select 0;
		
		_relPos = [_obj] call MB_FNC_FencerCalcPosition;
		_obj = (MB_Selected select 0) select 0;
		_pos = _relPos select 0;
		_maxWidth = _relPos select 2;
		_maxLength = _relPos select 1;
		_dir = _relPos select 3;

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
};
MB_FNC_FencerDeletePreview = {
	if(!(isNull MB_FencerPreview)) then {
		deletevehicle MB_FencerPreview;
		MB_FencerPreview = objNull;
	}
};
MB_FNC_FencerCalcPosition = {
	private["_obj","_direction","_box","_dir","_pos"];
	_box = [_this,0,[],[[],objNull]] call bis_fnc_param; 
	
	if(typename _box == "OBJECT") then {
		_dir = getdir _box;
		_pos = getpos _box;
		_box = boundingBoxReal _box;
	} else {
		_dir = 0;
		_pos = MB_SelectionCenter;
	};
	
	_p1 = _box select 0;
	_p2 = _box select 1;
	_maxWidth = abs ((_p2 select 0) - (_p1 select 0));
	_maxLength = abs ((_p2 select 1) - (_p1 select 1));
	_maxHeight = abs ((_p2 select 2) - (_p1 select 2));
	
	_return = [_pos,_maxLength,_maxWidth,_dir];
	_return;
};
MB_FNC_FencerPlace = {
	private["_obj","_direction","_bbr","_dir","_fpos"];
	
	
	_obj = (MB_Selected select (count(MB_Selected)-1)) select 0;
	_relPos = [_obj] call MB_FNC_FencerCalcPosition;
	
	_pos = _relPos select 0;
	_maxWidth = _relPos select 2;
	_maxLength = _relPos select 1;
	_dir = _relPos select 3;
	
	_created = [(typeof _obj),_pos,MB_CurLayer,_dir,0,0,1,true,false] call MB_fnc_CreateObject;
	//_created setdir _dir;
	
	_direction = MB_FencerDir;
		_offset = parseNumber (ctrlText 170410);
	switch (_direction) do {
		case 0: {
			[_obj,_created,[0,_maxLength+_offset,0]] call MB_fnc_SetRelPos;
		};
		case 1: {
			[_obj,_created,[0,-1*(_maxLength+_offset),0]] call MB_fnc_SetRelPos;
		};
		case 2: {
			[_obj,_created,[-1*(_maxWidth+_offset),0,0]] call MB_fnc_SetRelPos;
		};
		case 3: {
			[_obj,_created,[_maxWidth+_offset,0,0]] call MB_fnc_SetRelPos;
		};
};

	[_created] call MB_fnc_Select;
	[] call MB_FNC_FencerUpdatePreview;
};



