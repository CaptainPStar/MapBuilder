/*
    Function:       MB_fnc_FencerUpdatePreview
    Author:         NeoArmageddon
    Description:    Updates preview for fencer
*/


private["_relPos","_created","_direction","_obj","_dir","_pos","_maxWidth","_maxLength","_maxHeight","_bounding"];
	if(count(MB_Selected)>0 && MB_FencerActive) then {
		_obj = (MB_Selected select (count(MB_Selected)-1));

		_bounding = [_obj] call MB_FNC_FencerCalcBounding;
		_dir = _obj getvariable "MB_ObjVar_Yaw";
		_pos = _obj getvariable "MB_ObjVar_PositionATL";
		_maxWidth = _bounding select 1;
		_maxLength = _bounding select 0;
		_maxHeight = _bounding select 2;

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
				[_created,0,0] call BIS_fnc_setPitchBank;
				_created setpos [getpos _created select 0,getpos _created select 1,(getpos _created select 2)+0.75];
			};
			case 1: {
				[_obj,_created,[0,-1*(_maxLength),0]] call MB_fnc_SetRelPos;
				_created setdir (_dir+180);
				[_created,0,0] call BIS_fnc_setPitchBank;
				_created setpos [getpos _created select 0,getpos _created select 1,(getpos _created select 2)+0.75];
			};
			case 2: {
				[_obj,_created,[-1*(_maxWidth),0,0]] call MB_fnc_SetRelPos;
				_created setdir (_dir+270);
				[_created,0,0] call BIS_fnc_setPitchBank;
				_created setpos [getpos _created select 0,getpos _created select 1,(getpos _created select 2)+0.75];
			};
			case 3: {
				[_obj,_created,[_maxWidth,0,0]] call MB_fnc_SetRelPos;
				_created setdir (_dir+90);
				[_created,0,0] call BIS_fnc_setPitchBank;
				_created setpos [getpos _created select 0,getpos _created select 1,(getpos _created select 2)+0.75];
			};
			case 4: {
				_pos = getposATL _obj;
				_pos set [2,(getposATL _obj select 2)+(_maxHeight+0.75)];
				_created setposATL _pos;
				_created setdir (_dir);
				[_created,90,0] call BIS_fnc_setPitchBank;
			};
			case 5: {
				_pos = getposATL _obj;
				_pos set [2,(getposATL _obj select 2)-(0.75)];
				_created setposATL _pos;
				_created setdir (_dir);
				[_created,-90,0] call BIS_fnc_setPitchBank;
			};
		};
	} else {
		['deletepreview'] call MB_fnc_useFencer;
	};
