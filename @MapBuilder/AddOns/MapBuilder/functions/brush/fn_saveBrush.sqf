private["_filename"];
	_filename = [_this,0,"brush"] call bis_fnc_param;
	if(_filename == "") exitWith {systemChat "Error: Brush needs a name!";};
	
	_folder = ["brushes"] call mb_fnc_getFolderContent;
	_confirmed = true;
	if(format["%1.brush",_filename] in _folder) then {
		_confirmed = ["File with this name already exists. Overwrite?",0] call MB_fnc_showPopupDialog;
	};

	if(_confirmed) then {
	
	
	
	_path = ("MB_FileIO" callExtension format["open_w|brushes\%1.brush",_filename]);
	systemChat format["Opening %1",_path];

	
	_string = ["settings",[MB_BrushWidth,MB_BrushCamFollow,MB_BrusherLockDir]] call MB_fnc_toStoreArr;
	"MB_FileIO" callExtension format["write|%1",_string];
	{
		_string = ["template",_x] call MB_fnc_toStoreArr;
		"MB_FileIO" callExtension format["write|%1",_string];
	} foreach MB_CurBrush;
	"MB_FileIO" callExtension "close";
	systemchat format["Brush saved!"];
	[] call mb_fnc_brusherUpdateFileList;
};