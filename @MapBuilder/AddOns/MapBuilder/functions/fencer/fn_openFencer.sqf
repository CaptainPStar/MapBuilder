private["_display","_ctrl"];
	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 170400;
	if(!MB_FencerActive) then {
		[170400,false] spawn MB_fnc_openWindow;
		MB_FencerActive = true;
	} else {
		call MB_FNC_CloseFencer;
	};