#include "\MB\MapBuilder\ui\dik.hpp"
private["_center","_screenDelta","_obj","_pos","_offset"];

if(!MB_ObjectDrag_Mutex) then {
	MB_ObjectDrag_Mutex = true;
	_center = MB_MousePosition;
	_screenDelta = _this select 0;
	{
		_obj = _x select 0;
		_pos = _x select 1;
		_offset = _x select 2;
		if([MB_R] call MB_fnc_ViewIsMouseButtonPressed) then {
			//Is Heightadjustment
			_pos = _pos vectorAdd [0,0,-(_screenDelta select 1)*5];
			_offset = _pos vectorDiff _center;
			_x set [2,_offset];
			MB_ObjectMoveHeight = true;
		} else {
			if(!MB_ObjectMoveHeight) then { //Only move when height was not adjusted to prevent objects jumping away
				_pos = _center vectorAdd _offset;
			};
		};
		
		_obj setposATL _pos;
		[_obj] call MB_fnc_BBupdate;
		_x set [1,_pos];
	} foreach MB_ObjectMoveSelection;
	MB_ObjectDrag_Mutex = false;
};
