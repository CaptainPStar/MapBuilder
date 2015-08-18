if(!params["_object"]) exitwith {["Missing argument in MB_fnc_quadTreeRemove."] call BIS_fnc_error;};
private["_boundMin","_boundMax","_objects","_nodes","_tree","_index"];

_tree = _object getvariable ["MB_QuadTree_ObjNode",[]];
if(count(_tree) == 0) exitwith {
	["Trying to update object in quadtree that is not in!"] call BIS_fnc_error;
};
_boundMin = _tree select 0;
_boundMax = _tree select 1;
_objects = _tree select 2;
_nodes = _tree select 3;

private["_inBoundary"];
_inBoundary = [_boundMin,_boundMax,getpos _object] call MB_fnc_inBoundary;
if(_inBoundary) exitwith {
	//Object is still in node... do nothing
};

[_object] call MB_fnc_quadTreeRemove;
private["_success"];
_success = [_object,MB_QuadTree] call MB_fnc_quadTreeInsert;
if(!_success) then {
	["Error updating object in Quadtree. Object wasn't readded."] call BIS_fnc_error;
};