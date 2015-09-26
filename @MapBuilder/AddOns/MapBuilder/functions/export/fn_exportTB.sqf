//startLoadingScreen ["Exporting Terrain Builder file..."];
private["_projFolder","_filename","_confirmed","_useClassnames"];
	["Due to inconsistence between A3 and TB pitch and bank will not be exported.",1] call MB_fnc_showPopupDialog;
	_filename = [_this,0,"noFilename"] call bis_fnc_param;
	_useClassnames = [_this,1,true] call bis_fnc_param;
	if(_filename == "") exitWith {systemChat "Error: Export needs a name!";};
	_projFolder = ["export"] call mb_fnc_getFolderContent;
	_confirmed = true;
	if(format["%1.txt",_filename] in _projFolder) then {
		_confirmed = ["File with this name already exists. Overwrite?",0] call MB_fnc_showPopupDialog;
	} else {

	};
	if(_confirmed) then {
		startLoadingScreen ["Exporting to Terrain Builder"];
		_path = ("MB_FileIO" callExtension format["open_w|export\%1.txt",_filename]);
		
		systemChat format["Opening %1",_path];
		_count = 0;
		_mapframeX = 200000;
		_mapframeY = 0;
		{
			private["_pos","_pitch","_bank","_name","_obj","_yaw","_scale"];
			if(!isNull(_x)) then {
				_obj = _x;
				
				if(_useClassnames) then {
					_name = [_obj] call MB_fnc_getCanonicalName;
				} else {
					_name = getText (configFile >> "CfgVehicles" >> (typeof _obj) >> "model");
					_name = toLower(_name);
					_name = _name splitString  "\";
					//Extract last part (model.p3d) and split into name and extension
					_name = (_name select (count(_name)-1)) splitString  ".";
					//Use extension
					_name = _name select 0;
					};
				
				
				_pos = [_obj,[_mapframeX,_mapframeY]] call MB_fnc_getExactPosition;
				_pitch = str (_obj getvariable "MB_ObjVar_Pitch");
				_bank = str (_obj getvariable "MB_ObjVar_Bank");
				_yaw = str (_obj getvariable "MB_ObjVar_Yaw");
				_scale = str (_obj getvariable "MB_ObjVar_Scale");
					
				//_yawPitchBankWorld = [vectordir _obj,vectorup _obj] call MB_fnc_CalcEulerAnglesWorld;
				//_yawPitchBankWorld = [vectordir _obj,vectorup _obj] call MB_fnc_CalcEulerAngles;
				//Split modelname into parts

				
				//_name;_x_pos;_y_pos;_yaw;_pitch;_roll;_scale;_z_pos_rel;
				

				_string = format["write|""%1"";%2;%3;%4;%5;%6;%7;%8",_name,(_pos select 0),(_pos select 1),_yaw,_pitch,_bank,_scale,(_pos select 2)];
				"MB_FileIO" callExtension _string;
				
			};
			_count = _count + 1;
			//progressLoadingScreen (_count/count(MB_Objects));
		} foreach MB_Objects;
		"MB_FileIO" callExtension "close";
		systemchat format["%1 objects exported to %2.",_count,_path];
		endLoadingScreen;
	};