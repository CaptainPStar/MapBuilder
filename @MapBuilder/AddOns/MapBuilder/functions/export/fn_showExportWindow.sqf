private["_display","_ctrl"];
	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 170100;
	
	if(!ctrlShown _ctrl) then {
		[170100,false] spawn MB_fnc_openWindow;
		
		
		
	} else {
		[170100,false] spawn MB_fnc_closeWindow;
	};
	
