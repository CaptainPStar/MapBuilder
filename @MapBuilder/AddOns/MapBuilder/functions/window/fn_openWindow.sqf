	disableSerialization;
	_idc = _this select 0;
	_instant = [_this,1,true] call bis_fnc_param; 
	_display = uinamespace getvariable 'mb_main_dialog';
	_control = _display displayCtrl _idc;
	_control ctrlshow true;
	_control ctrlSetFade 0;
	if(_instant) then {
		_control ctrlCommit 0;
	} else {
		_control ctrlCommit 0.1;
	};
