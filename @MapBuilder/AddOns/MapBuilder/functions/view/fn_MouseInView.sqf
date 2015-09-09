disableSerialization;
private["_in"];
_in = [_this,0] call bis_fnc_param;
if(_in) then {
	//systemChat "Mouse in View";
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 170001;
	//ctrlSetFocus _ctrl;
	MB_ViewportHasFocus = true;
} else {
	//systemChat "Mouse left View";
	_this call MB_fnc_resetKeys;
	MB_ViewportHasFocus = false;
};
