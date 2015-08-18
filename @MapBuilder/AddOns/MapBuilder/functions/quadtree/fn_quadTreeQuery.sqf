if(!params["_min","_max","_tree"]) exitwith {["Missing argument in MB_fnc_quadTreeQuery."] call BIS_fnc_error;};
private["_objects"];
private["_boundMin","_boundMax","_matchedObjects","_nodes"];


_boundMin = _tree select 0;
_boundMax = _tree select 1;
_objects = _tree select 2;
_nodes = _tree select 3;



_matchedObjects = [];
private["_isIntersect"];
_isIntersect = [_min,_max,_boundMin,_boundMax] call MB_fnc_isBoundaryIntersect;
if(!_isIntersect) exitwith {
	[];
};

// Check objects at this quad level
{
	_isIntersect = [_min,_max, getpos _x] call MB_fnc_inBoundary;
	if(_isIntersect) then {
		_matchedObjects pushBack _x;
	};
} foreach _objects; 
// Terminate here, if there are no children
if(count(_nodes) == 0) exitwith {
	_matchedObjects;
};

// Otherwise, add the points from the children
systemchat format["Quad Output %1 %2",_min,_max];

_matchedObjects append ([_min,_max,(_nodes select 0)] call MB_fnc_quadTreeQuery);
_matchedObjects append ([_min,_max,(_nodes select 1)] call MB_fnc_quadTreeQuery);
_matchedObjects append ([_min,_max,(_nodes select 2)] call MB_fnc_quadTreeQuery);
_matchedObjects append ([_min,_max,(_nodes select 3)] call MB_fnc_quadTreeQuery);

_matchedObjects;