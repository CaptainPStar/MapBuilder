private["_edges","_add","_cornerA","_cornerB","_objs","_flag","_opos"];
	_edges = _this select 0;
	_add = _this select 1;
	_cornerA = +(_edges select 0);
	_cornerB = +(_edges select 1);
	_objs = [];
	_objs = [_cornerA,_cornerB,MB_QuadTree] call MB_fnc_QuadTreeQuery;
	MB_Selected = _objs;
	//{
	//	[_x] call mb_fnc_select;
	//} foreach _objs;
	
//	{
	//	if(!(_x in _objs)) then {
	//		[_x] call mb_fnc_deselect;
	//	};
	//} foreach MB_Selected;

