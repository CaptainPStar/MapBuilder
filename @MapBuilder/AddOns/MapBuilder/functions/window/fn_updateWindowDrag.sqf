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
};
