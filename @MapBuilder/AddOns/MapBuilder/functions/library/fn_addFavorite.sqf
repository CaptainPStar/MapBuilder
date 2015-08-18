private["_class"];
	_class = [_this,0,"UnknownClass"] call bis_fnc_param;
	if(!(_class in MB_FavoriteObjects)) then {
			MB_FavoriteObjects pushBack _class;
	};
	[] call MB_fnc_updateFavorites;