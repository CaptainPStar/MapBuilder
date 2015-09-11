disableSerialization;
private["_display","_index","_control"];
_display = uinamespace getvariable 'mb_main_dialog';
_index = 170301;
_control = _display displayCtrl _index;
_return = false;
if(ctrlShown _control) then {
	_return = true;
};
_return;