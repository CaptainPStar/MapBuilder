if(!params["_object","_tree"]) exitwith {["Missing argument in MB_fnc_quadTreeInsert."] call BIS_fnc_error;};
private["_boundMin","_boundMax","_objects","_nodes"];


_boundMin = _tree select 0;
_boundMax = _tree select 1;
_objects = _tree select 2;
_nodes = _tree select 3;

// Ignore objects that do not belong in this quad tree
private["_inBoundary"];
_inBoundary = [_boundMin,_boundMax,getpos _object] call MB_fnc_inBoundary;
if(!_inBoundary) exitwith {
	false;
};
private["_objNode"];
_objNode = _object getvariable ["MB_QuadTree_ObjNode",[]];
if(count(_objNode) > 0) exitwith {
	["Object can't be added to tree. Already in."] call BIS_fnc_error;
};


// If there is space in this quad tree, add the object here
if(count _objects < MB_QuadTree_Node_Capacity) exitwith {
	_objects pushBack _object;
	_object setvariable ["MB_QuadTree_ObjNode",_tree];
	true;
};

// Otherwise, subdivide and then add the point to whichever node will accept it
if(count(_nodes)==0) then {
	[_tree] call MB_fnc_quadTreeSubdivide;
};
private["_insertSuccess"];
_insertSuccess = [_object,(_tree select 3 select 0)] call MB_fnc_quadTreeInsert;
if(_insertSuccess) exitwith {
	true;
};
_insertSuccess = [_object,(_tree select 3 select 1)] call MB_fnc_quadTreeInsert;
if(_insertSuccess) exitwith {
	true;
};
_insertSuccess = [_object,(_tree select 3 select 2)] call MB_fnc_quadTreeInsert;
if(_insertSuccess) exitwith {
	true;
};
_insertSuccess = [_object,(_tree select 3 select 3)] call MB_fnc_quadTreeInsert;
if(_insertSuccess) exitwith {
	true;
};

// Otherwise, the point cannot be inserted for some unknown reason (this should never happen)
false;