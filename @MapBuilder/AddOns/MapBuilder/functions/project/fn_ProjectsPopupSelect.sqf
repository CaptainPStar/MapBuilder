disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_list = _display displayCtrl 170204;
    _index = lbCurSel 170204;
    _name = lbData [170204, _index];
	(_display displayCtrl 170205) ctrlSetText _name;