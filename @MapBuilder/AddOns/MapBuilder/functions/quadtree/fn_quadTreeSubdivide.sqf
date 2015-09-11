if(!params["_tree"]) exitwith {["Missing argument in MB_fnc_quadTreeSubdivide."] call BIS_fnc_error;};
private["_boundMin","_boundMax","_objects","_nodes"];
_boundMin = _tree select 0;
_boundMax = _tree select 1;
_objects = _tree select 2;
_nodes = _tree select 3;

if(count(_nodes) != 0) exitwith {["Quadtree: Can't subdivide a node with children"] call BIS_fnc_error;};

private["_NW","_NE","_SW","_SE","_width","_height"];
_width = ((_boundMax select 0) - (_boundMin select 0))/2;
_height = ((_boundMax select 1) - (_boundMin select 1))/2;
_boundMin set[2,0];
_boundMax set[2,0];

_p1 = _boundMin;
_p2 = _p1 vectorAdd [0,_height,0];
_p3 = _p1 vectorAdd [_width,0,0];
_p4 = _p3 vectorAdd [0,_height,0];
_p5 = _p4 vectorAdd [0,_height,0];
_p6 = _p4 vectorAdd [_width,0,0];
_p7 = _boundMax;

// 	 ------ p5 ------ p7
//  |  NW    |   NE    |
//  |        |         |
// p2 ----- p4 ------ p6
//  |   SW   |   SE    |
//  |        |         |
// p1 ----- p3 ------- 

_NW = [_p2,_p5,[],[]];
_NE = [_p4,_p7,[],[]];
_SW = [_p1,_p4,[],[]];
_SE = [_p3,_p6,[],[]];

_tree set[3,[_NW,_NE,_SW,_SE]];

//[_tree] call MB_fnc_quadTreeDraw;


