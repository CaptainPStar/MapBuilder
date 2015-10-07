private["_filename","_confirmed","_folder"];
_filename = [_this,0,"project"] call bis_fnc_param;
if(_filename == "") exitWith {systemChat "Error: Projects needs a name!";};


_folder = ["projects"] call mb_fnc_getFolderContent;
_confirmed = true;
if(format["%1.mbproj",_filename] in _folder) then {
	_confirmed = ["File with this name already exists. Overwrite?",0] call MB_fnc_showPopupDialog;
};

if(_confirmed) then {
	startLoadingScreen [format["Saving project to %1.mbproj",_filename],"MB_LoadingScreen"];
	_path = ("MB_FileIO" callExtension format["open_w|projects\%1.mbproj",_filename]);
	systemChat format["Opening %1",_path];
	MB_ProjectName = _filename;
	{
		private["_obj","_type","_exactPos","_vars"];
		if(!isNull(_x)) then {
			_obj = _x;
			_type = typeof _obj;
			_vars = [_obj] call MB_fnc_getObjectVars;
			//[_pos,_pitch,_bank,_yaw,_simulate,_locked,_scale]
			
			_exactPos = [_obj] call MB_fnc_getExactPosition;
			
			_string = format["[""object"",[%1,%2,%3]]",str _type,_vars,_exactPos];
			
			"MB_FileIO" callExtension format["write|%1",_string];
		};
	} foreach MB_Objects;
	{
		_string = ["favoriteObj",[_x]] call MB_fnc_toStoreArr;	
		"MB_FileIO" callExtension format["write|%1",_string];

	} foreach MB_FavoriteObjects;
	"MB_FileIO" callExtension "close";
	systemchat format["Project saved!"];
	endLoadingScreen;
};