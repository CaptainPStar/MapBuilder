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