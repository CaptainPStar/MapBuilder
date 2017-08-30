disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';

	[171300,false] spawn MB_fnc_openWindow;
	private _help = _display displayCtrl 171301;
	_help ctrlSetStructuredText parseText "For help see the online <a href='http:\/\/wiki.map-builder.info/w/'>Wiki (click here)</a> .";