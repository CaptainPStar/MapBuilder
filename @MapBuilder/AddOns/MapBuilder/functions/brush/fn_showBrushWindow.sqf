private["_display","_ctrl"];
	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 171200;
	
	if(!ctrlShown _ctrl) then {
		[171200,false] spawn MB_fnc_openWindow;
		_display = uinamespace getvariable 'mb_main_dialog';
		_ctrl = _display displayCtrl 171201;
		_ctrl tvAdd [ [], "Street_posts"];
		_ctrl tvAdd [ [], "Alley_(large)"];
		_ctrl tvAdd [ [], "Alley_(small)"];
		_ctrl tvAdd [ [], "Blunt_Rocks"];
		_ctrl tvAdd [ [], "Corals"];
		_ctrl tvAdd [ [], "Ficus_hedge"];
		_ctrl tvAdd [ [], "Spruce_forest"];
		_ctrl tvAdd [ [], "Spruce_forest_boarder"];
		_ctrl tvAdd [ [], "backyard_garbage"];
		
		_ctrl = _display displayCtrl 171202;
		_ctrl tvAdd [ [], "\A3\plants_f\b_FicusC2s_F"];
		_ctrl tvAdd [ [], "\A3\plants_f\b_FicusC2s_F"];
		_ctrl tvAdd [ [], "\A3\plants_f\b_FicusC1s_F"];
		_ctrl tvAdd [ [], "\A3\plants_f\t_FicusB1s_F"];
		_ctrl tvAdd [ [], "\A3\plants_f\b_FicusC1s_F"];
		_ctrl tvAdd [ [], "\A3\plants_f\t_FicusB1s_F"];
	} else {
		[171200,false] spawn MB_fnc_closeWindow;
	};
	
