{
		if(!isNull(_x)) then {
			[_x] call MB_fnc_DeleteObject;
		};
	} foreach MB_Objects;
	
	MB_Objects = [];
	MB_NUID = 0;
	publicvariable "MB_NUID";
	MB_FavoriteObjects = [];
	[] call MB_fnc_updateFavorites;
	[] call MB_fnc_updateUsed;
	MB_ProjectName = "";