if(!MB_SelectionRectangle_Mutex) then {
		MB_SelectionRectangle_Mutex = true;
		//Only update of not more than 50 obj are already selected and rectangle is getting bigger
		if(count(MB_Selected)>50 
		&& ((MB_SelectionRectangle select 0) vectorDistanceSqr MB_MousePosition) > ((MB_SelectionRectangle select 0) vectorDistanceSqr ((MB_SelectionRectangle select 1)))) then {
			systemChat "Max selected objects reached.";
		} else {
			MB_SelectionRectangle set [1,MB_MousePosition];
			//When Mouse is released outside viewport, first value gets <null>. Don't ask me why.
			if(!isNil{MB_SelectionRectangle select 0}) then {
				[MB_SelectionRectangle,MB_SelectionModeAdd] call MB_fnc_SelectInRectangle;
				//MB_Selected = [MB_SelectionRectangle select 0,MB_SelectionRectangle select 1,MB_QuadTree] call MB_fnc_QuadTreeQuery;
				//MB_Selected = _objs;

			} else {
				MB_SelectionRectangle = [];
			};
		};
		//systemchat format["%1",MB_SelectionRectangle];
		MB_SelectionRectangle_Mutex = false;
	};