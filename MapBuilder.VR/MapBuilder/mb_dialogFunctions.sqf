//################################################
//# Map Builder Dialog Functions
//# Author: Dennis "NeoArmageddon" Meyer
//# For instructions and license see readme-file
//################################################




disableSerialization;

MB_GetCategoriesFromConfig =
{
		disableSerialization;
        _cats = [];
		_cfgVehicleClasses = configFile >> "CfgVehicleClasses";
		
		for "_i" from 0 to (count _cfgVehicleClasses)-1 do
		{
			_cur_cat = _cfgVehicleClasses select _i;

			if(isClass _cur_cat) then
			{
				_classname = configName _cur_cat;
				_name = getText (configFile >> "CfgVehicleClasses" >> _classname >> "displayname");
				if (true) then
				{
                                      _cats = _cats + [[_classname, _name]];
				};
			};
		};
            _cats

};
MB_GetObjectsFromConfig =
{
		disableSerialization;
		_catlist = _display displayCtrl 170003;
		_index = lbCurSel 170003;
		_cat = lbData [170003, _index];


        _objs = [];
		_cfgVehicles = configFile >> "CfgVehicles";
		
		for "_i" from 0 to (count _cfgVehicles)-1 do
		{
			_cur_obj = _cfgVehicles select _i;

			if(isClass _cur_obj) then
			{
				_classname = configName _cur_obj;

				_cur_catName = getText (configFile >> "CfgVehicles" >> _classname >> "VehicleClass");

				_scope = getNumber (configFile >> "CfgVehicles" >> _classname >> "scope");

				_name = getText (configFile >> "CfgVehicles" >> _classname >> "displayname");

				if (_cat == _cur_catName && (_scope >= 1) && (_classname != "\access")) then
				{
                                      _objs = _objs + [[_classname, _name]];
				};
			};
		};

        _objs
};
MB_GetCategoriesFromArray = {
disableSerialization;
};
MB_GetObjectsFromArray = {
disableSerialization;
};
MB_Listbox_Categories_Refresh =
{     
		disableSerialization;
			_display = uinamespace getvariable 'mb_main_dialog';
			_treeCtrl = _display displayCtrl 170003;

            _catsArray = [] call MB_GetCategoriesFromConfig;

            lbClear _listbox;
            {

                    _data = _x;

                    _classname = _data select 0;

                    _name = _data select 1;
                   
					_index = _treeCtrl tvAdd [[], _name];
					_treeCtrl tvSetData [ [_index], _className];
					_index = _treeCtrl tvAdd [[_index], "blah"];
                  
            }
            forEach _catsArray;

            lbsort _listbox;
};

MB_Listbox_Objects_Refresh =
{			
disableSerialization;
			_display = uinamespace getvariable 'mb_main_dialog';
			_listbox = _display displayCtrl 170004;

            _objsArray = [] call MB_GetObjectsFromConfig;
           
            lbClear _listbox;
            {
                                    
                    _data = _x;

                    _classname = _data select 0;

                    _name = _data select 1;
                   
                    _index = _listBox lbAdd _name;
                   
                    _listbox lbSetData [_index, _classname];
                   
            }
            forEach _objsArray;

            lbsort _listbox;
};

MB_Listbox_Objects_SetCur =
{
disableSerialization;

            _list = _display displayCtrl 170003;
            _index = lbCurSel 170004;
            _classname = lbData [170004, _index];
			
			_model = getText (configFile >> "CfgVehicles" >> _classname >> "model");
			(_display displayCtrl 171001) ctrlSetModel _model;
            MB_CurClass = _classname;
            systemchat format["%1", MB_CurClass];
            
};

MB_fnc_refreshFilters = {
	disableSerialization;
	[] call MB_FNC_loadFilter;
	_display = uinamespace getvariable 'mb_main_dialog';
	_list = _display displayCtrl 170007;

	{
		 _index = _list lbAdd _x;
	} foreach MB_ObjectListNames;
	
};