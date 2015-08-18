if(!params["_object"]) exitwith {["Missing argument in MB_fnc_quadTreeRemove."] call BIS_fnc_error;};
private["_boundMin","_boundMax","_objects","_nodes","_tree","_index"];

_tree = _object getvariable ["MB_QuadTree_ObjNode",[]];
if(count(_tree) == 0) exitwith {
	["Trying to remove objects from quadtree that is not in!"] call BIS_fnc_error;
};

_boundMin = _tree select 0;
_boundMax = _tree select 1;
_objects = _tree select 2;
_nodes = _tree select 3;

_index = _objects find _object;
if(_index == -1) exitwith {
	["Object was not found in it attached quadtreenode!"] call BIS_fnc_error;
};
_objects deleteAt _index;
_object setvariable ["MB_QuadTree_ObjNode",[]];