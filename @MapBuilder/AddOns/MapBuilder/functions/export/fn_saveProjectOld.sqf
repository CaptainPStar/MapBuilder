private["_filename","_pos","_zPos","_dir","_pitch","_bank","_scale","_layer","_type"];
	startLoadingScreen ["Saving project..."];
	_filename = [_this,0,"Unknown_Project"] call bis_fnc_param;
	if(_filename == "") exitWith {systemChat "Error: Projects needs a name!";endLoadingScreen;};
	MB_ProjectName = _filename;
	[2,false] call MB_fnc_togglePopup;
	_path = ("MB_FileIO" callExtension format["open_w|projects\%1.mbp",_filename]);
	systemChat format["Opening %1",_path];
	_count = 0;
	{
		if(!isNull(_x)) then {
			_obj = _x;

			_type =(typeof _obj);
			
			_scale = 1;
		
			
			_pos = _obj getvariable "MB_ObjVar_PositionATL";
			_pitch = _obj getvariable "MB_ObjVar_Pitch";
			_bank = _obj getvariable "MB_ObjVar_Bank";
			_yaw = _obj getvariable "MB_ObjVar_Yaw";
			_simulate = _obj getvariable "MB_ObjVar_Simulate";
			_locked = _obj getvariable "MB_ObjVar_Locked";
			
			
			_layer = 0;
			_string = format["write|%1;%2;%3;%4;%5;%6;%7;%8;%9",_layer,_type,(_pos select 0),(_pos select 1),(_pos select 2),_yaw,_pitch,_bank,_scale];
			systemChat _string;
			systemChat ("MB_FileIO" callExtension _string);
		};
		_count = _count + 1;
		progressLoadingScreen (_count/count(MB_Objects));
	} foreach MB_Objects;
	systemChat ("MB_FileIO" callExtension "close");
	systemchat format["Project saved!"];
	endLoadingScreen;