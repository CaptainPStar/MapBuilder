if(count MB_BrushNode == 0) then {
		if((MB_BrushStart vectorDistance MB_MousePosition)>0.5) then {
			private["_vector","_dir"];
			_vector = MB_BrushStart vectorFromTo MB_MousePosition;
			_dir = (_vector select 0) atan2 (_vector select 1);
			MB_BrushNode = +MB_MousePosition;
			[+MB_BrushNode,_dir] call MB_fnc_brusherDrawNode;
		} else {
			MB_3DVectors = [[+MB_BrushStart,+MB_MousePosition]];
		};
	} else {
		if((MB_BrushNode vectorDistance MB_MousePosition)>=MB_BrushWidth) then {
			private["_vector","_dir"];
			_vector = MB_BrushNode vectorFromTo MB_MousePosition;
			_dir = (_vector select 0) atan2 (_vector select 1);
			MB_BrushNode = MB_MousePosition;
			[+MB_BrushNode,_dir] call MB_fnc_brusherDrawNode;
		} else {
			MB_3DVectors = [[+MB_BrushNode,+MB_MousePosition]];
			MB_BrushPoint setposATL MB_MousePosition;
		};
	};