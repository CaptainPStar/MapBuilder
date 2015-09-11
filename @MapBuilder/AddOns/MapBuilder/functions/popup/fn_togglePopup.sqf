disableSerialization;
	private["_display","_popup","_show","_index","_control"];	
	
	_display = uinamespace getvariable 'mb_main_dialog';
	_popup = [_this,0] call bis_fnc_param;
	_show = [_this,1,""] call bis_fnc_param;
	_index = 170000 + _popup*100 + 1;
	_control = _display displayCtrl _index;
	
	if(typename _show == "STRING") then {
		_show = !(ctrlShown _control);
	};
	if(_show) then {
		//systemchat "showing popup";
	} else {
		//systemchat "hiding popup";
	};
	while{str _control != "no control"} do {
		_control ctrlShow _show;
		_control ctrlEnable _show;
		_index = _index + 1;
		_control = _display displayCtrl _index;
	};
	MB_PopupStatus set[_popup,_show];
	