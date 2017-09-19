disableSerialization;

startLoadingScreen ["Resetting project...","MB_LoadingScreen"];
private["_objectsToDelete","_percent","_objectCount"];
_objectsToDelete = +MB_Objects;
_percent = 0;
_objectCount = count(_objectsToDelete);
_counter = 0;
while{count(_objectsToDelete)>0} do {
	private["_obj","_index","_var"];
	_obj = _objectsToDelete select 0;
	_index = _obj getvariable "MB_ObjVar_UID";
	_var = format["MB_Object_UID%1",_index];
	[_obj] call MB_fnc_DeleteObject;
	_objectsToDelete deleteAt 0;
	_counter = _counter + 1;
	progressLoadingScreen (_counter/_objectCount);
};
MB_Objects = [];

for "_i" from 0 to MB_NUID do {
	call compile format["MB_Object_UID%1 = nil;",_i];
};

MB_NUID = 0;
publicvariable "MB_NUID";
MB_FavoriteObjects = [];
['reset'] call MB_fnc_updateFavorites;
['refresh'] call MB_fnc_updateUsed;
MB_ProjectName = "";
endLoadingScreen;
