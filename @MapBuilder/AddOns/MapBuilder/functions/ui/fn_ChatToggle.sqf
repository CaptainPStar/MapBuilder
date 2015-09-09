disableSerialization; 
_display = uinamespace getvariable 'mb_main_dialog';
_control = _display displayCtrl 171014;

if(!ctrlShown _control) then {
	_control ctrlshow true;
	ctrlSetFocus _control;
} else {
	_control ctrlSetText "";
	_control ctrlshow false;
};
