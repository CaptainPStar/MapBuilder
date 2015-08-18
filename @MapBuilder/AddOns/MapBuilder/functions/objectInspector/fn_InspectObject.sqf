disableSerialization;
	private["_obj"];
	_obj = _this call MB_fnc_getClickedObject;

	
	if(!isNull _obj) then {
	
		[] call MB_fnc_DeselectAll;
		[_obj] call MB_fnc_Select;
		systemchat format["Inspecting %1",_obj];
		[170700,false] spawn MB_fnc_openWindow;
		_display = uinamespace getvariable 'mb_main_dialog';
		_window = _display displayCtrl 170700;
		
		
		_wx = (ctrlPosition _window) select 0;
		_wy = (ctrlPosition _window) select 1;
		_ww = (ctrlPosition _window) select 2;
		_wh = (ctrlPosition _window) select 3;
		_window ctrlSetPosition [_this select 2,_this select 3,_ww,_wh];
		
		MB_InspectedObject = _obj;
		[] call MB_fnc_InspectorFill;
	};