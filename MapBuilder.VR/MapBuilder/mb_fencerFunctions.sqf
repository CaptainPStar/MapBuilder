MB_FencerActive = false;
MB_Fencer_callback = ["camUpdate","MB_FNC_FencerUpdatePreview",{MB_FencerActive}] call mb_fnc_addCallback;
MB_FencerHeightMode = 0;
MB_FNC_CloseFencer = {
	private["_display","_ctrl"];
	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 170400;
	_ctrl ctrlShow false;
	MB_FencerActive = false;
};
MB_FNC_OpenFencer = {
	private["_display","_ctrl"];
	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 170400;
	if(!ctrlShown _ctrl) then {
		_ctrl ctrlShow true;
		MB_FencerActive = true;
	} else {
		[] call MB_FNC_CloseFencer;
	};
	
};



MB_FNC_FencerUpdatePreview = {
	private["_relPos","_created","_direction","_obj","_dir","_pos","_maxWidth","_maxLength","_bounding"];
	if(count(MB_Selected)>0) then {
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
};
MB_FNC_FencerDeletePreview = {
	if(!(isNull MB_FencerPreview)) then {
		deletevehicle MB_FencerPreview;
		MB_FencerPreview = objNull;
	}
};
MB_FNC_FencerCalcBounding = {
	private["_obj","_direction","_box","_dir","_pos"];
	_obj = [_this,0,[],[[],objNull]] call bis_fnc_param; 
	
	if(typename _obj == "OBJECT") then {
		//_dir = _obj getvariable "MB_ObjVar_Yaw";
		//_pos = _obj getvariable "MB_ObjVar_PositionATL";
		_box = boundingBoxReal _obj;
	} else {
		//_dir = 0;
		//_pos = MB_SelectionCenter;
	};
	
	_p1 = _box select 0;
	_p2 = _box select 1;
	_maxWidth = abs ((_p2 select 0) - (_p1 select 0));
	_maxLength = abs ((_p2 select 1) - (_p1 select 1));
	_maxHeight = abs ((_p2 select 2) - (_p1 select 2));
	
	
	_return = [_maxLength,_maxWidth];
	_return;
};
MB_FNC_FencerPlace = {
	private["_parent","_direction","_bbr","_dir","_fpos","_relPos"];
	
	
	_parent = (MB_Selected select (count(MB_Selected)-1));
	_bounding = [_parent] call MB_FNC_FencerCalcBounding;
	
	_parentPos = _parent getvariable "MB_ObjVar_PositionATL";
	_maxWidth = _bounding select 1;
	_maxLength = _bounding select 0;
	_dir =  _parent getvariable "MB_ObjVar_Yaw";
	
	_created = [(typeof _parent),_parentPos] call MB_fnc_CreateObject;
	_created setvariable ["MB_ObjVar_Yaw",_dir,false];
	
	_direction = MB_FencerDir;
		_offset = parseNumber (ctrlText 170410);
	switch (_direction) do {
		case 0: {
			_relPos = [_parent,_created,[0,_maxLength+_offset,0]] call MB_fnc_CalcRelativePosition;
		};
		case 1: {
			_relPos = [_parent,_created,[0,-1*(_maxLength+_offset),0]] call MB_fnc_CalcRelativePosition;
		};
		case 2: {
			_relPos = [_parent,_created,[-1*(_maxWidth+_offset),0,0]] call MB_fnc_CalcRelativePosition;
		};
		case 3: {
			_relPos = [_parent,_created,[_maxWidth+_offset,0,0]] call MB_fnc_CalcRelativePosition;
		};
	};

	switch (MB_FencerHeightMode) do {
		case 0: {
			//Do Nothing. It is already ATL
			_relPos set [2,_parentPos select 2];
			_created setvariable ["MB_ObjVar_PositionATL",_relPos,false];
			systemchat format["%1",_relPos];
		};
		case 1: {
			//Height to Zero
			_relPos set [2,0];
			_created setvariable ["MB_ObjVar_PositionATL",_relPos,false];
			systemchat format["%1",_relPos];
		};
		case 2: {
			//Get the ASL Pos and transform to ATL at new position
			_relPos set [2,(getposASL _parent) select 2];
			_created setvariable ["MB_ObjVar_PositionATL",ASLtoATL _relPos,false];
			systemchat format["%1",ASLtoATL _relPos];
		};

	};	
	
	[_created] call MB_fnc_UpdateObject;
	if(isMultiplayer) then {
		[_created] call MB_fnc_syncObject;
	};

	[_created] call MB_fnc_Select;
	[] call MB_FNC_FencerUpdatePreview;
};

MB_fnc_CalcRelativePosition = {
	private["_parent","_child","_offset","_dir","_localPos","_worldPos","_return"];
	_parent    = [_this,0,objNull,[objNull]] call BIS_fnc_param;
	_child     = [_this,1,objNull,[objNull]] call BIS_fnc_param;
	_offset    = [_this,2,[0,0,0],[[]]] call BIS_fnc_param;


	//get the anchor position
	_localPos = (_parent worldToModel (getPosATL _parent)) vectorAdd _offset; //vectorADD
	_worldPos = _parent modelToWorld _localPos;

	
	_worldPos;
	//_child setDir ((getDir _parent) + _dir);
	

};



