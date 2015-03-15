MB_LibraryFavorites = [];
MB_fnc_loadLibrary = {
	disableSerialization;
	_cats = [];
	_cfgVehicleClasses = configFile >> "CfgVehicleClasses";
	_all = [];
	
	_mbLibrary = [];
	_config = [];
	
	//Load Objects
	_cfgVehicles = configFile >> "CfgVehicles";
	
	for "_i" from 0 to (count _cfgVehicles)-1 do
	{
		_cur_obj = _cfgVehicles select _i;

		if(isClass _cur_obj) then
		{
			_classname = configName _cur_obj;

			_cur_catName = getText (configFile >> "CfgVehicles" >> _classname >> "VehicleClass");
			
			_catDisplayName = getText (configFile >> "CfgVehicleClasses" >> _cur_catName >> "displayname");
			
			_mbFilter = [(configFile >> "CfgVehicleClasses" >> _cur_catName),"mapbuilder_filter",""] call BIS_fnc_returnConfigEntry;
			
			_scope = getNumber (configFile >> "CfgVehicles" >> _classname >> "scope");

			_name = getText (configFile >> "CfgVehicles" >> _classname >> "displayname");
			
			_model = [(configFile >> "CfgVehicles" >> _classname),"model",""] call BIS_fnc_returnConfigEntry;
			//I have no idea what I am doing!
			if ((_scope >= 2) && (_classname != "\access") && _name != "" && _model != "") then
			{
				_name = format["%1 (%2)",_name,_classname];
				if(_catDisplayName != "") then {
					_catIndex = [_config,_catDisplayName] call MB_fnc_libraryFindName;
					if(_catIndex == -1) then {
						_catIndex = _config pushBack [_catDisplayName,[]];
					};
					((_config select _catIndex) select 1) pushBack [_name,_classname];
				};
				if(_mbFilter != "") then {
					_catIndex = [_mbLibrary,_mbFilter] call MB_fnc_libraryFindName;
					if(_catIndex == -1) then {
						_catIndex = _mbLibrary pushBack [_mbFilter,[]];
					};
					_mbCat = ((_mbLibrary select _catIndex) select 1);
					_catIndex = [_mbCat,_catDisplayName] call MB_fnc_libraryFindName;
					if(_catIndex == -1) then {
						_catIndex = _mbCat pushBack [_catDisplayName,[]];
					};
					((_mbCat select _catIndex) select 1) pushBack [_name,_classname];
				};
			};
		};
	};
	
	MB_Library = [["Library",_mbLibrary],["Config (All)",_config]];

};
MB_fnc_libraryFindName = {
	private["_array","_return","_index"];
	_array = [_this,0,[]] call bis_fnc_param;
	_key = [_this,1,""] call bis_fnc_param; 
	_index = [_this,2,0] call bis_fnc_param;
	_return = -1;
	{
		if((_x select _index) == _key) exitwith {
			_return = _forEachIndex;
		};
	} foreach _array;
	_return;
};

MB_fnc_updateUsed = {
	private["_index","_used","_data","_count","_type","_name"];
	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 170801;

	tvClear 170801;
	_used = [];
	_data = [];
	{
		if(!isNull _x) then {
			if(!(typeof _x in _used)) then {
				_type = typeof _x;
				_used pushBack _type;
				_name = getText (configFile >> "CfgVehicles" >> _type >> "displayname");
				_data pushback [format["%1 (1)",_type],_type,1];
			} else {
				_index = _used find (typeof _x);
				_count = ((_data select _index) select 2);
				_count = _count +1;
				(_data select _index) set [2,_count];
				(_data select _index) set [0,format["%1 (%2)",(_data select _index) select 1,_count]];
			};
		};
	} foreach MB_Objects;
	
	
	{
		private["_index"];
		_index = tvAdd [170801,[],(_x select 0)];
		tvSetData [170801,[_index],(_x select 1)];

	} foreach _data;
	_ctrl tvSort [ [], false];
};
MB_fnc_SelectAllUsed = {
	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 170801;
	_class = _ctrl tvData(tvCurSel _ctrl);
	if(_class != "") then {
		if(!([DIK_LSHIFT] call MB_fnc_isPressed)) then {
			[] call MB_fnc_DeselectAll;
		};
		{
			if((typeof _x) == _class) then {
				[_x] call MB_fnc_Select;
			};
		} foreach MB_Objects;
	};
};


MB_fnc_libraryUpdate = {
	private["_node","_path","_name","_value","_index","_newPath"];
	disableSerialization;
	_node = [_this,0,[]] call bis_fnc_param;
	_path = [_this,1,[]] call bis_fnc_param;
	{
		_name = _x select 0;
		_value = _x select 1;
		_newPath = [] + _path;
		_index = tvAdd [170003,_path,_name];
		_newPath set[count(_newPath),_index];
		if(typename _value == "ARRAY") then {
			tvSetData [170003,_newPath,""];
			[_value,_newPath] call MB_fnc_libraryUpdate;
		};
		if(typename _value == "STRING") then {
			tvSetData [170003,_newPath,_value];
		};
	} foreach _node;
};
MB_LibrarySelect = {
	private["_data"];
	_ctrl = _this select 0;
	_data = _ctrl tvData (tvCurSel _ctrl);
	if(_data != "") then {
		MB_CurClass = _data;
		disableSerialization;
		_display = uinamespace getvariable 'mb_main_dialog';
		_lctrl = _display displayCtrl 170007;
		_lctrl ctrlSetStructuredText parseText format["Selected: %1",_ctrl tvText (tvCurSel _ctrl)];
		
		(_display displayCtrl (180000)) ctrlSetModel (getText (configFile >> "CfgVehicles" >> _data >> "model"));
		[(getText (configFile >> "CfgVehicles" >> _data >> "model"))] call MB_fnc_show3DPreview;
	};
};

MB_3D_PreviewShown = false;
MB_3D_PreviewRotation = 0;
MB_fnc_show3DPreview = {
	private["_model","_display","_ctrl"];
	disableSerialization;
	_model = [_this,0,""] call bis_fnc_param;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 180000;
	if(_model != "") then {
		_ctrl ctrlSetModel _model;
		_ctrl ctrlSetModelScale 0.1;
		_ctrl ctrlShow true;
		MB_3D_PreviewShown = true;
	};

};
MB_fnc_rotate3DPreview = {
	private["_dirandUp","_display","_ctrl","_dir"];
	if(MB_3D_PreviewShown) then {
		disableSerialization;
		_display = uinamespace getvariable 'mb_main_dialog';
		_ctrl = _display displayCtrl 180000;
		_dir = 0;
		_dirandUp = [30,0,MB_3D_PreviewRotation] call MB_fnc_CalcDirAndUpVector;
		_ctrl ctrlSetModelDirAndUp _dirandUp;
		MB_3D_PreviewRotation = MB_3D_PreviewRotation + 1.0;
		if(MB_3D_PreviewRotation >=360) then {
			MB_3D_PreviewRotation = 0;
		};	
	};
};
["camUpdate","MB_fnc_rotate3DPreview",{MB_3D_PreviewShown}] call MB_fnc_addCallback;


MB_fnc_disable3DPreview = {
	disableSerialization;
	private["_display","_ctrl"];
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 180000;
	_ctrl ctrlShow false;
	MB_3D_PreviewShown = false;
};
MB_LibraryDrag = "";
MB_fnc_libraryMousedown = {
	_ctrl = _this select 0;
	_path = _this select 1;
	_data = tvData [170003,_path];
	if(_data != "") then {
		MB_LibraryDrag = _data;
		systemchat format["Dragging %1",_data];
	};

};


MB_fnc_libraryMouseup = {
	systemchat format["%1",_this];
	if(MB_LibraryDrag != "") then {
			systemchat format["Dropped %1",MB_LibraryDrag];
			MB_LibraryDrag = "";
	};
};


MB_fnc_OpenUsedWindow = {
	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 170800;
	if(!ctrlShown _ctrl) then {
		[170800,false] spawn MB_fnc_openWindow;
	} else {
		[170800,false] spawn MB_fnc_closeWindow;
	};

};

MB_fnc_CloseUsedWindow = {
	[170800,true] spawn MB_fnc_closeWindow;

};