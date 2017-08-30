private["_edges","_add","_cornerA","_cornerB","_objs","_flag","_opos","_oldSelected"];
	_edges = _this select 0;
	_add = _this select 1;
	_cornerA = +(_edges select 0);
	_cornerB = +(_edges select 1);
	private _a = abs((_cornerB vectorDiff _cornerA) select 0);
	private _b = abs((_cornerB vectorDiff _cornerA) select 1);
	private _center = (_cornerA vectorAdd _cornerB) vectorMultiply 0.5;
	_objs = [];
	//_objs = [_cornerA,_cornerB,MB_QuadTree] call MB_fnc_QuadTreeQuery;
	_oldSelected = +MB_Selected;
	/*MB_Selected = _objs;
	{
		_x setVariable["MB_isSelected",true,false];
	} foreach _objs;
	{
		if(!(_x in MB_Selected)) then {
			_x setVariable["MB_isSelected",false,false];
		};
		[_x] call MB_FNC_BBupdate;
	} foreach _oldSelected;*/
	MB_Selected = MB_Objects select {_x inArea [_center, _a/2, _b/2, 0, true]}; 
	{
		_x setVariable["MB_isSelected",true,false];
	} foreach MB_Selected;
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

