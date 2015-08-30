
while{count(MB_Objects)>0} do {
	private["_obj"];
	_obj = MB_Objects select 0;
	[_obj] call MB_fnc_DeleteObject;
	call compile format["%1 = nil;",_obj];
};
MB_Objects = [];
MB_NUID = 0;
publicvariable "MB_NUID";
MB_FavoriteObjects = [];
[] call MB_fnc_updateFavorites;
[] call MB_fnc_updateUsed;
MB_ProjectName = "";