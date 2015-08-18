//startLoadingScreen ["Exporting Terrain Builder file..."];
	_filename = [_this,0,"noFilename"] call bis_fnc_param;
	if(_filename == "") exitWith {systemChat "Error: Export needs a name!";endLoadingScreen;};
	_path = ("MB_FileIO" callExtension format["open_w|export\%1.txt",_filename]);
	systemChat format["Opening %1",_path];
	_count = 0;
	_mapframeX = 200000;
	_mapframeY = 0;
	{
		private["_pos","_pitch","_bank","_model","_obj","_yaw","_scale"];
		if(!isNull(_x)) then {
			_obj = _x;
			
			_model = getText (configFile >> "CfgVehicles" >> (typeof _obj) >> "model");
			_model = toLower(_model);
			
			_pos = [_obj,[_mapframeX,_mapframeY]] call MB_fnc_exactPosition;
			_pitch = str (_obj getvariable "MB_ObjVar_Pitch");
			_bank = str (_obj getvariable "MB_ObjVar_Bank");
			_yaw = str (_obj getvariable "MB_ObjVar_Yaw");
			_scale = str (_obj getvariable "MB_ObjVar_Scale");
				
			_yawPitchBankWorld = [vectordir _obj,vectorup _obj] call MB_fnc_CalcEulerAnglesWorld;
			//Split modelname into parts
			_model = [_model,"\"] call BIS_fnc_splitString;
			//Extract last part (model.p3d) and split into name and extension
			_model = [(_model select (count(_model)-1)),"."] call BIS_fnc_splitString;
			//Use extension
			_model = _model select 0;
			
			//_name;_x_pos;_y_pos;_yaw;_pitch;_roll;_scale;_z_pos_rel;
			

			_string = format["write|""%1"";%2;%3;%4;%5;%6;%7;%8",_model,(_pos select 0),(_pos select 1),_yawPitchBankWorld select 0,_yawPitchBankWorld select 1,_yawPitchBankWorld select 2,_scale,(_pos select 2)];
			systemChat ("MB_FileIO" callExtension _string);
			
		};
		_count = _count + 1;
		//progressLoadingScreen (_count/count(MB_Objects));
	} foreach MB_Objects;
	systemChat ("MB_FileIO" callExtension "close");
	systemchat format["%1 objects exported to %2.",_count,_path];
	//endLoadingScreen;