
MB_DraggedWindow = false;
MB_DraggedWindowOffset = [];
MB_fnc_beginWindowDrag = {
disableSerialization;
_event = _this select 0;
_idc = _this select 1;
_display = uinamespace getvariable 'mb_main_dialog';
_control = _display displayCtrl _idc;
MB_DraggedWindowOffset = [(_event select 2),(_event select 3)];
MB_DraggedWindow = true;
};
MB_fnc_updateWindowDrag = {
	disableSerialization;
	if(MB_DraggedWindow) then {
	_event = _this select 0;
	_idc = _this select 1;
	_display = uinamespace getvariable 'mb_main_dialog';
	_control = _display displayCtrl _idc;
	
	_xo = _event select 1;
	_yo = _event select 2;
	_xp = (ctrlPosition _control) select 0;
	_yp = (ctrlPosition _control) select 1;
	_w = (ctrlPosition _control) select 2;
	_h = (ctrlPosition _control) select 3;
	_control ctrlSetPosition [_xp+_xo-(MB_DraggedWindowOffset select 0),_yp+_yo-(MB_DraggedWindowOffset select 1),_w,_h];
	_control ctrlCommit 0.01;
	systemChat format["%1",MB_DraggedWindowOffset];
	};
};
MB_fnc_endWindowDrag = {
	MB_DraggedWindow = false;
};
MB_fnc_openWindow = {
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
};
MB_fnc_closeWindow = {
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
};

