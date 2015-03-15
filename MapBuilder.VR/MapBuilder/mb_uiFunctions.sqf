//################################################
//# Map Builder Dialog Functions
//# Author: Dennis "NeoArmageddon" Meyer
//# For instructions and license see readme-file
//################################################

MB_fnc_SetEditorFocus = {
	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 170001;
	ctrlSetFocus _ctrl;
};
MB_fnc_switchMode = {
	private["_mode"];
	_mode = [_this,0,0] call bis_fnc_param;
	if(MB_Mode != _mode) then {
		MB_Mode = _mode;
		switch (_mode) do {
			case 0: { systemChat "Mode is 0" };
			case 1: { systemChat "Mode is 1" };
			default { systemChat "DefaultMode" };
		};
	};
};
MB_fnc_openAboutWindow = {
	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 170601;
	[170600,false] spawn MB_fnc_openWindow;
	_ctrl ctrlSetText MB_NewVersion;
	_vwarning = _display displayCtrl 170602;
	if(MB_NewVersionNum > 0 && MB_NewVersionNum>MB_CurVersionNum) then {
		_vwarning ctrlSetText "A newer version of Map Builder is available!";
		_vwarning ctrlSetTextColor [0.75,0,0,1];
	} else {
		_vwarning ctrlSetText "Your Map Builder is up-to-date.";
		_vwarning ctrlSetTextColor [0,0.75,0,1];
	};
	_credits = _display displayCtrl 170603;
	_credits ctrlSetStructuredText parseText "Map Builder is developed by Dennis 'NeoArmageddon' Meyer<br /><br />
	Special thanks to:<br />
	CypeRevenge, ZeroG, Scruffy, MemphisBelle, Mondkalb, cyrokrypto, Maikeks ,Bushlurker, Jakerod, M1lkm8n, NigelS, badbenson, Giallustio and all I forgot!";
};
MB_fnc_closeCAboutWindow = {

	[170600,false] spawn MB_fnc_closeWindow;
};