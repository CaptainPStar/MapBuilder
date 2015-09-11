private["_edges","_add","_cornerA","_cornerB","_objs","_flag","_opos","_oldSelected"];
	_edges = _this select 0;
	_add = _this select 1;
	_cornerA = +(_edges select 0);
	_cornerB = +(_edges select 1);
	_objs = [];
	_objs = [_cornerA,_cornerB,MB_QuadTree] call MB_fnc_QuadTreeQuery;
	_oldSelected = +MB_Selected;
	MB_Selected = _objs;
	{
		_x setVariable["MB_isSelected",true,false];
	} foreach _objs;
	{
		if(!(_x in MB_Selected)) then {
			_x setVariable["MB_isSelected",false,false];
		};
		[_x] call MB_FNC_BBupdate;
	} foreach _oldSelected;
//	{
	//	if(!(_x in _objs)) then {
	//		[_x] call mb_fnc_deselect;
	//	};
	//} foreach MB_Selected;

