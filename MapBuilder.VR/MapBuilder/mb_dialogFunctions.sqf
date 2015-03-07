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