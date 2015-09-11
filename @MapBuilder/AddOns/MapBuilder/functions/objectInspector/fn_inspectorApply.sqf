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
		[170700,false] spawn MB_fnc_closeWindow;
	};