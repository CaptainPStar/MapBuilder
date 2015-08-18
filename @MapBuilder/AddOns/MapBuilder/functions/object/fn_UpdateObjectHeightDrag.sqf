private["_screenDelta","_pos","_obj"];
_screenDelta = _this select 0;
{
	_obj = _x select 0;
	_pos = _x select 1;

	_pos = _pos vectorAdd [0,0,-(_screenDelta select 1)];
	_x set [1,_pos];
	_obj setposATL _pos;
} foreach MB_ObjectChangeHeightSelection;
