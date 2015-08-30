private["_screenDelta","_pos","_obj"];

if(!MB_ObjectDrag_Mutex) then {
	MB_ObjectDrag_Mutex = true;
	_screenDelta = _this select 0;
	{
		_obj = _x select 0;
		_pos = _x select 1;

		_pos = _pos vectorAdd [0,0,-(_screenDelta select 1)];
		_x set [1,_pos];
		_obj setposATL _pos;
		[_obj] call MB_fnc_BBupdate;
	} foreach MB_ObjectChangeHeightSelection;
	MB_ObjectDrag_Mutex = false;
};
