private["_output","_object","_offset","_xcord","_xcordAC","_ycord","_ycordAC","_tempArray","_zcord","_zcordAC","_pos"];
	_object = [_this,0] call bis_fnc_param;
	_offset = [_this,1,[0,0]] call bis_fnc_param;
	
	_xcord = floor ((_obj getvariable "MB_ObjVar_PositionATL") select 0);
	_xcordAC = (((_obj getvariable "MB_ObjVar_PositionATL") select 0) - (floor ((_obj getvariable "MB_ObjVar_PositionATL") select 0)));
	_ycord = floor ((_obj getvariable "MB_ObjVar_PositionATL") select 1);
	_ycordAC = (((_obj getvariable "MB_ObjVar_PositionATL") select 1) - (floor ((_obj getvariable "MB_ObjVar_PositionATL") select 1)));
	_zcord = ((_obj getvariable "MB_ObjVar_PositionATL") select 2);
		//_zcordAC = (((getPosATL _object) select 2) - (floor ((getPosATL _object) select 2))); 

	_tempArray = toArray str _xcordAC;
	if ((_tempArray select 0) == 48 and (_tempArray select 1) == 46) then
	{
		_tempArray set [0, 999];
		_tempArray set [1, 999];
		_tempArray = _tempArray - [999];
		_xcordAC = toString _tempArray;
	};
	
	_tempArray = toArray str _ycordAC;
	if ((_tempArray select 0) == 48 and (_tempArray select 1) == 46) then
	{
		_tempArray set [0, 999];
		_tempArray set [1, 999];
		_tempArray = _tempArray - [999];
		_ycordAC = toString _tempArray;
	};
	//_zcordAC = [_zcordAC,6] call MB_fnc_roundNumbers;
	//_tempArray = toArray str _zcordAC;
	//if ((_tempArray select 0) == 48 and (_tempArray select 1) == 46) then
	//{
	//	_tempArray set [0, 999];
	//	_tempArray set [1, 999];
	//	_tempArray = _tempArray - [999];
	//	_zcordAC = toString _tempArray;
	//};
	_output = [format["%1.%2",(_xcord+(_offset select 0)),_xcordAC],
				format["%1.%2",(_ycord+(_offset select 1)),_ycordAC],
				format["%1",_zcord]];
	_output;