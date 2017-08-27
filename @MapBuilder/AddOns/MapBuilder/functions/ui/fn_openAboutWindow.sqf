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
	Jona, CypeRevenge, ZeroG, Scruffy, MemphisBelle, Mondkalb, cyrokrypto, Maikeks ,Bushlurker, Jakerod, M1lkm8n, NigelS, badbenson, Giallustio, Kerkkoh, Snake Man and all I forgot!";