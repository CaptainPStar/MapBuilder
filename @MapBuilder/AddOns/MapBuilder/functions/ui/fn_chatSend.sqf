disableSerialization; 
_display = uinamespace getvariable 'mb_main_dialog';
_control = _display displayCtrl 171014;

_msg = ctrlText _control;

if(ctrlShown _control) then {
	if(_msg != "") then {
		[player,_msg] remoteExec ["globalChat"]; 
		_control ctrlSetText "";
	};
	[] call MB_FNC_ChatToggle;
};
