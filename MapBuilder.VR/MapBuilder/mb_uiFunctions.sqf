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