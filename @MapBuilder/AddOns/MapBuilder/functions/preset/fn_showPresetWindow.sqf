private["_display","_ctrl"];
	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 170500;
	
	if(!ctrlShown _ctrl) then {
		[170500,false] spawn MB_fnc_openWindow;
		[] call MB_FNC_refreshPresetList;
	} else {
		[170500,false] spawn MB_fnc_closeWindow;
	};