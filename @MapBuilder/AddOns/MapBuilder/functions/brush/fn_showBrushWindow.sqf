private["_display","_ctrl"];
	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 171200;
	
	if(!ctrlShown _ctrl) then {
		[171200,false] spawn MB_fnc_openWindow;
		
		[] call mb_fnc_brusherUpdateFileList;
		
		["First"] call mb_fnc_brusherUpdateTemplateList;
		
	} else {
		[171200,false] spawn MB_fnc_closeWindow;
	};
	
