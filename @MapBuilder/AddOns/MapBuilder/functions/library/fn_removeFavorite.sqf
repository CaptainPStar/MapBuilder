disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 170901;
	_index = MB_FavoriteObjects find (_ctrl tvData (tvCurSel _ctrl));
	if(_index>=0) then {
		MB_FavoriteObjects deleteAt _index;
	};
	[] call MB_fnc_updateFavorites;