private["_filename"];
//startLoadingScreen ["Loading project..."];
_filename = [_this,0,"brush"] call bis_fnc_param;
if(_filename == "") exitWith {systemChat "Error: Can't load a brush without name!";};

if(!(["brushes",format["%1.brush",_filename]] call MB_FNC_FileExists)) exitwith {
	systemChat "Error: Brush not found!";
};
MB_CurBrush = [];
_path = ("MB_FileIO" callExtension format["open_r|brushes\%1.brush",_filename]);
systemChat format["Opening %1",_path];

_line = "MB_FileIO" callExtension "readline";
while{_line != "EOF"} do {
	private["_obj","_type","_layer","_pos","_dir","_pitch","_bank","_scale"];
	_arr = [_line] call MB_fnc_loadStoreArr;
	_lineType = (_arr select 0);
	switch (_lineType) do {
		case "settings": {
			MB_BrushWidth = (_arr select 1) select 0;
			MB_BrushCamFollow  = (_arr select 1) select 1;
			if(count((_arr select 1))>2) then { //Legacy check
				MB_BrusherLockDir = (_arr select 1) select 2;
			} else {
				MB_BrusherLockDir = false;
			};
			
		};
		case "template": {
			MB_CurBrush pushBack (_arr select 1);
		};
		default { 
			systemChat format["Unknown brush property: %1",_lineType]; 
		};
	};
	//systemchat format["[%1,%2,%3]",parseNumber (_object select 2),parseNumber (_object select 3),parseNumber (_object select 4)];
	_line = "MB_FileIO" callExtension "readline";
};
systemChat ("MB_FileIO" callExtension "close");
["First"] call MB_fnc_brusherUpdateTemplateList;
systemchat format["Brush loaded/imported!"];