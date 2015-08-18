if(!MB_SelectionRectangle_Mutex) then {
		MB_SelectionRectangle_Mutex = true;
		MB_SelectionRectangle set [1,MB_MousePosition];
		//When Mouse is released outside viewport, first value gets <null>. Don't ask me why.
		if(!isNil{MB_SelectionRectangle select 0}) then {
			[MB_SelectionRectangle,MB_SelectionModeAdd] call MB_fnc_SelectInRectangle;
			//MB_Selected = [MB_SelectionRectangle select 0,MB_SelectionRectangle select 1,MB_QuadTree] call MB_fnc_QuadTreeQuery;
			//MB_Selected = _objs;

		} else {
			MB_SelectionRectangle = [];
		};
		//systemchat format["%1",MB_SelectionRectangle];
		MB_SelectionRectangle_Mutex = false;
	};