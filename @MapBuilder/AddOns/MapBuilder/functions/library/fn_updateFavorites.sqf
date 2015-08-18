private["_index","_used","_data","_count","_type","_name"];
	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 170901;

	tvClear 170901;
	_used = [];
	_data = [];
	{
		_type = _x;
		_used pushBack _type;
		_name = getText (configFile >> "CfgVehicles" >> _type >> "displayname");
		_data pushback [format["%1",_type],_type];

	} foreach MB_FavoriteObjects;
	
	
	{
		private["_index"];
		_index = tvAdd [170901,[],(_x select 0)];
		tvSetData [170901,[_index],(_x select 1)];

	} foreach _data;
	_ctrl tvSort [ [], false];