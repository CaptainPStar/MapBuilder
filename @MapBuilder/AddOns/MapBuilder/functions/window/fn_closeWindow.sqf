	disableSerialization;
	_idc = _this select 0;
	_instant = [_this,1,true] call bis_fnc_param; 
	_display = uinamespace getvariable 'mb_main_dialog';
	_control = _display displayCtrl _idc;
	if(!_instant) then {
		_control ctrlSetFade 1;
		_control ctrlCommit 0.25;
		sleep 0.25;
	};
	_control ctrlshow false;
