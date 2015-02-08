MB_fnc_mapDblClickTeleport = {
	private["_pos"];
	_pos = (_this select 0) ctrlMapScreenToWorld [_this select 2,_this select 3];
	_pos set[2,((MB_CamPos select 0) select 2)];
	MB_CamPos set[0,_pos];
}