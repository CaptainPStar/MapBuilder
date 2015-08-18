disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 170900;
	if(!ctrlShown _ctrl) then {
		[170900,false] spawn MB_fnc_openWindow;
		[] call MB_fnc_updateFavorites;
	} else {
		[170900,false] spawn MB_fnc_closeWindow;
	};