//MB_Selected set [count(MB_Selected),[_object,_relPos,_height,_dir,_pitchBank]];
	_pos = _this select 0;
	_selection = _this select 1;
	_createdObjects = [];
	_primaryObj = objNull;
	{
		_pos = [(_pos select 0) + ((_x select 1) select 0),
						(_pos select 1) + ((_x select 1) select 1),
						(_x select 2)];
		_created = [(_x select 0),_pos] call MB_fnc_CreateObject;
		if(isNull(_primaryObj)) then {
			_primaryObj = _created;
		};
		_created setposATL _pos;
		
		if(_primaryObj != _created) then {
			[_primaryObj,_created,(_x select 1),(_x select 2)] call MB_fnc_SetRelPos;
		};
		_created setdir (_x select 3);
		[_created,((_x select 4) select 0),((_x select 4) select 1)] call BIS_fnc_setPitchBank;
		_createdObjects pushBack _created;
	} foreach _selection;
	
	_createdObjects;