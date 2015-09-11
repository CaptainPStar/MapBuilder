private["_data","_path"];

	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';

	MB_BrushWidth = parseNumber ctrlText(_display displayCtrl 171221);
	MB_BrushCamFollow = ctrlChecked (_display displayCtrl 171222);
	//MB_BrushCamFollowAngleLock = ctrlChecked (_display displayCtrl 171223);