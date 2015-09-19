// MB_importTB_P3D
// MB_importTB_ClassName

_allVehicleClasses = "true" configClasses (configFile >> "CfgVehicles");
diag_log format["classes: %1",count(_allVehicleClasses)];

{
	_modelPath = getText (_x >> 'model');
	_modelPathParts = _modelPath splitString "\";
	_pathPartCount = count _modelPathParts;
	if(_pathPartCount>0) then {
		_p3dName = _modelPathParts select (_pathPartCount - 1);

		_match = [".p3d", _p3dName] call BIS_fnc_inString;
		if(_match) then {
			_modelName = (_p3dName splitString ".") select 0;
			//_match = ["empty", _modelName] call BIS_fnc_inString;
			//if(!_match)then{
			if(!(_modelName in MB_importTB_P3D)) then {
				diag_log format["model name: %1",_modelName];
				MB_importTB_P3D pushBack _modelName;
				MB_importTB_ClassName pushBack (configName _x);
				//diag_log format["class: %1",_x];
			};
		};
	};
	_match = "";
} forEach _allVehicleClasses;

diag_log format["p3d_array: %1",count(MB_importTB_P3D)];
diag_log format["classname_array: %1",count(MB_importTB_ClassName)];
