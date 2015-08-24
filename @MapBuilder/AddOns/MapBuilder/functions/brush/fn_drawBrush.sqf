private["_dir","_pos","_obj"];
	_pos = ((MB_BrusherNodesToDraw select 0) select 0);
	_dir = ((MB_BrusherNodesToDraw select 0) select 1);
	MB_BrusherNodesToDraw deleteAt 0;
	{
		_types = _x select 0;
		_weight = _x select 1;
		_chance = _x select 2;
		_count = _x select 3;
		_rpos = _x select 4;
		_yaw = _x select 5;
		_pitch  = _x select 6;
		_bank = _x select 7;
		_scale = _x select 8;
		_rndPos = _x select 9;
		_rndDir = _x select 10;
		_rndPitch = _x select 11;
		_rndBank = _x select 12;
		_rndScale = _x select 13;
		
		for "_i" from 1 to _count do {
			if(random 100 <= (_chance*100)) then {
				_offset = [_rpos,_dir] call MB_fnc_RotateRelPos;
					
				_cpos = _pos vectorAdd _offset vectorAdd [2*random(_rndPos select 0)-(_rndPos select 0), 2*random(_rndPos select 1)-(_rndPos select 1), random(_rndPos select 2)];
				_type = _types select 0;
				{
					if(random 100 <= ((_weight select _forEachIndex)*100)) exitWith {
						_type = _x;
					};
				} foreach _types;
				
				_obj = [_type,_cpos] call MB_fnc_CreateObject;
				
				_obj setvariable["MB_ObjVar_PositionATL",_cpos,false];
				_obj setvariable["MB_ObjVar_Pitch",(_pitch + 2*(random _rndPitch)-_rndPitch),false];
				_obj setvariable["MB_ObjVar_Bank",(_bank + 2*(random _rndBank)-_rndBank),false];
				_obj setvariable["MB_ObjVar_Yaw",_dir+(_yaw + 2*(random _rndDir)-_rndDir),false];

				
				_obj setvariable["MB_ObjVar_Scale",(_scale + 2*(random _rndScale)-_rndScale),false];
				
				[_obj] call MB_fnc_UpdateObject;
			};
		};
	
	} foreach MB_CurBrush;