private["_data"];
	_ctrl = _this select 0;
	_data = _ctrl tvData (tvCurSel _ctrl);
	if(_data != "") then {
		MB_CurClass = _data;
		disableSerialization;
		_display = uinamespace getvariable 'mb_main_dialog';
		_lctrl = _display displayCtrl 170007;
		_lctrl ctrlSetStructuredText parseText format["Selected: %1",_ctrl tvText (tvCurSel _ctrl)];
		
		(_display displayCtrl (180000)) ctrlSetModel (getText (configFile >> "CfgVehicles" >> _data >> "model"));
		[_data] call MB_fnc_show3DPreview;
	};