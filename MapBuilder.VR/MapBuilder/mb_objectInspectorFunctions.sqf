["RightMouseDblClick",{_this spawn MB_fnc_InspectObject;},{MB_Mode==0 && !(_this select 4) && !(_this select 5) && !(_this select 6)}] call MB_fnc_addCallback;

MB_InspectedObject = objNull;

//MB_fnc_PreviewObjectUpdate
MB_fnc_InspectObject = {
	disableSerialization;
	private["_obj"];
	_obj = _this call MB_fnc_getClickedObject;

	
	if(!isNull _obj) then {
	
		[] call MB_fnc_DeselectAll;
		[_obj] call MB_fnc_Select;
		systemchat format["Inspecting %1",_obj];
		[170700,false] spawn MB_fnc_openWindow;
		_display = uinamespace getvariable 'mb_main_dialog';
		_window = _display displayCtrl 170700;
		
		
		_wx = (ctrlPosition _window) select 0;
		_wy = (ctrlPosition _window) select 1;
		_ww = (ctrlPosition _window) select 2;
		_wh = (ctrlPosition _window) select 3;
		_window ctrlSetPosition [_this select 2,_this select 3,_ww,_wh];
		
		MB_InspectedObject = _obj;
		[] call MB_fnc_InspectorFill;
	};
};


MB_fnc_InspectorPreview = {
	disableSerialization;
	private["_object","_pos","_pitch","_bank","_yaw","_simulate","_locked","_return"];
	_object = MB_InspectedObject;
	if(!isNull _object) then {
		_display = uinamespace getvariable 'mb_main_dialog';
		_titleCtrl = _display displayCtrl 170701;
		_xCtrl = _display displayCtrl 170702;
		_yCtrl = _display displayCtrl 170703;
		_heightCtrl = _display displayCtrl 170704;
		_yawCtrl = _display displayCtrl 170705;
		_pitchCtrl = _display displayCtrl 170706;
		_bankCtrl = _display displayCtrl 170707;
		_scaleCtrl = _display displayCtrl 170708;
		
		_name = ctrlText _titleCtrl;
		_xpos = parseNumber ctrlText _xCtrl;
		_ypos = parseNumber ctrlText _yCtrl;
		_height = parseNumber ctrlText _heightCtrl;
		_yaw = parseNumber ctrlText _yawCtrl;
		_pitch = parseNumber ctrlText _pitchCtrl;
		_bank = parseNumber ctrlText _bankCtrl;
		_scale = parseNumber ctrlText _scaleCtrl;
		[_object,[_xpos,_ypos,_height],_pitch,_bank,_yaw] call MB_fnc_PreviewObjectUpdate;
		
		//_object setvariable["MB_ObjVar_Simulate",(_vars select 4),false];
		//_object setvariable["MB_ObjVar_Locked",(_vars select 5),false];
	};
};

MB_fnc_InspectorFill = {
	disableSerialization;
	private["_object","_pos","_pitch","_bank","_yaw","_simulate","_locked","_return"];
	_object = MB_InspectedObject;
	if(!isNull _object) then {
		_pos = _object getvariable "MB_ObjVar_PositionATL";
		_pitch = _object getvariable "MB_ObjVar_Pitch";
		_bank = _object getvariable "MB_ObjVar_Bank";
		_yaw = _object getvariable "MB_ObjVar_Yaw";
		_simulate = _object getvariable "MB_ObjVar_Simulate";
		_locked = _object getvariable "MB_ObjVar_Locked";
		
		_scale = _object getvariable "MB_ObjVar_Scale";
		
		_display = uinamespace getvariable 'mb_main_dialog';
		
		_titleCtrl = _display displayCtrl 170701;
		_xCtrl = _display displayCtrl 170702;
		_yCtrl = _display displayCtrl 170703;
		_heightCtrl = _display displayCtrl 170704;
		_yawCtrl = _display displayCtrl 170705;
		_pitchCtrl = _display displayCtrl 170706;
		_bankCtrl = _display displayCtrl 170707;
		_scaleCtrl = _display displayCtrl 170708;
		
		_titleCtrl ctrlSetText (str _object);
		_xCtrl ctrlSetText format["%1",(_pos select 0)];
		_yCtrl ctrlSetText format["%1",(_pos select 1)];
		_heightCtrl ctrlSetText format["%1",(_pos select 2)];
		_yawCtrl ctrlSetText format["%1",_yaw];
		_pitchCtrl ctrlSetText format["%1",_pitch];
		_bankCtrl ctrlSetText format["%1",_bank];
		_scaleCtrl ctrlSetText format["%1",_scale];
		
	};
};

MB_fnc_InspectorApply = {
disableSerialization;
	private["_object","_pos","_pitch","_bank","_yaw","_simulate","_locked","_return"];
	_object = MB_InspectedObject;
	_close = [_this,0,false] call bis_fnc_param;
	if(!isNull _object) then {
		_display = uinamespace getvariable 'mb_main_dialog';
		_titleCtrl = _display displayCtrl 170701;
		_xCtrl = _display displayCtrl 170702;
		_yCtrl = _display displayCtrl 170703;
		_heightCtrl = _display displayCtrl 170704;
		_yawCtrl = _display displayCtrl 170705;
		_pitchCtrl = _display displayCtrl 170706;
		_bankCtrl = _display displayCtrl 170707;
		_scaleCtrl = _display displayCtrl 170708;
		
		_name = ctrlText _titleCtrl;
		_xpos = parseNumber ctrlText _xCtrl;
		_ypos = parseNumber ctrlText _yCtrl;
		_height = parseNumber ctrlText _heightCtrl;
		_yaw = parseNumber ctrlText _yawCtrl;
		_pitch = parseNumber ctrlText _pitchCtrl;
		_bank = parseNumber ctrlText _bankCtrl;
		_scale = parseNumber ctrlText _scaleCtrl;
		
		_object setvariable["MB_ObjVar_PositionATL",[_xpos,_ypos,_height],false];

		_object setvariable["MB_ObjVar_Pitch",_pitch,false];
		_object setvariable["MB_ObjVar_Bank",_bank,false];
		_object setvariable["MB_ObjVar_Yaw",_yaw,false];
		
		_object setvariable["MB_ObjVar_Scale",_scale,false];
		
		[_object] call MB_fnc_UpdateObject;
		//_object setvariable["MB_ObjVar_Simulate",(_vars select 4),false];
		//_object setvariable["MB_ObjVar_Locked",(_vars select 5),false];
	};
	if(_close) then {
		[] call MB_fnc_closeInspector;
	};
};
MB_fnc_InspectorRefresh = {
	_object = MB_InspectedObject;
	if(!isNull _object) then {
		[_object] call MB_fnc_UpdateObject;
	};
	[] call MB_fnc_InspectorFill;
};
MB_fnc_closeInspector = {
	[MB_InspectedObject] call MB_fnc_UpdateObject;
	MB_InspectedObject = objNull;
	[170700,false] spawn MB_fnc_closeWindow;
};