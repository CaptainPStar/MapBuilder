private["_display","_ctrl"];
	disableSerialization;
	MB_FencerActive = false;
	[] call MB_FNC_FencerDeletePreview;
	[170400,false] spawn MB_fnc_closeWindow;