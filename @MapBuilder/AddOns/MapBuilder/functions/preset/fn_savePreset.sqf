private["_filename","_pos","_zPos","_dir","_pitch","_bank","_scale","_layer","_type","_refObj"];
_filename = [_this,0,"Unknown_Preset"] call bis_fnc_param;
if(_filename == "") exitWith {systemChat "Error: Preset needs a name!";endLoadingScreen;};


_folder = ["presets"] call mb_fnc_getFolderContent;
_confirmed = true;
if(format["%1.mbpre",_filename] in _folder) then {
	_confirmed = ["File with this name already exists. Overwrite?",0] call MB_fnc_showPopupDialog;
};

if(_confirmed) then {
	startLoadingScreen ["Saving preset..."];
	_path = ("MB_FileIO" callExtension format["open_w|presets\%1.mbpre",_filename]);
	systemChat format["Opening %1",_path];
	_count = 0;
	_refObj = objNull;
	{
		if(!isNull(_x)) then {
			_obj = _x;
			_type =(typeof _obj);
			
		
			_pos = _obj getvariable "MB_ObjVar_PositionATL";
			_pitch = _obj getvariable "MB_ObjVar_Pitch";
			_bank = _obj getvariable "MB_ObjVar_Bank";
			_yaw = _obj getvariable "MB_ObjVar_Yaw";
			_simulate = _obj getvariable "MB_ObjVar_Simulate";
			_locked = _obj getvariable "MB_ObjVar_Locked";
			_scale =  _obj getvariable "MB_ObjVar_Scale";
			_offset = [0,0,0];
			if(isNull(_refObj)) then {
				_refObj = _obj;
			} else {
				_offset = _pos vectorDiff (_refObj getvariable "MB_ObjVar_PositionATL");
			};
			_layer = 0;
			_string = format["write|%1;%2;%3;%4;%5;%6;%7;%8;%9",_layer,_type,(_offset select 0),(_offset select 1),(_offset select 2),_yaw,_pitch,_bank,_scale];
			"MB_FileIO" callExtension _string;
		};
		_count = _count + 1;
		//progressLoadingScreen (_count/count(MB_Selected));
	} foreach MB_Selected;
	systemChat ("MB_FileIO" callExtension "close");
	systemchat format["Preset saved!"];
	endLoadingScreen;
	[] call MB_FNC_refreshPresetList;
};