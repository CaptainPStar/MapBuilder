disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 170001;
	ctrlSetFocus _ctrl;

["ui.focusreset", []] call MB_fnc_dispatchCallbacks;
