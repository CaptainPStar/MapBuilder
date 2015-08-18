//systemchat format["Rectdrag at %1",MB_MousePosition];
	MB_SelectionRectangle = [MB_MousePosition,MB_MousePosition];
	MB_SelectionModeAdd = (_this select 4);
	if(!MB_SelectionModeAdd) then {
		[] call MB_fnc_DeselectAll;
	};