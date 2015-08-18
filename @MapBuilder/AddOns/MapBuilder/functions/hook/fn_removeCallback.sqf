private["_id"];
	_id  = [_this,0,[],[[]],[2]] call bis_fnc_param;
	(MB_Hooks select (_id select 0)) deleteAt (_id select 1);