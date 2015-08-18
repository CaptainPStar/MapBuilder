disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_list = _display displayCtrl 170501;
    _index = lbCurSel 170501;
    _name = lbData [170501, _index];
	(_display displayCtrl 170502) ctrlSetText _name;