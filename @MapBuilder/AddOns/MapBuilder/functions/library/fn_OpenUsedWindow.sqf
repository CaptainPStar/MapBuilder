disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 170800;
	if(!ctrlShown _ctrl) then {
		[170800,false] spawn MB_fnc_openWindow;
	} else {
		[170800,false] spawn MB_fnc_closeWindow;
	};