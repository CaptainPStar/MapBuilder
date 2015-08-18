if(!params["_tree"]) exitwith {["Missing argument in MB_fnc_quadTreeDraw."] call BIS_fnc_error;};
private["_boundMin","_boundMax","_objects","_nodes"];

_boundMin = _tree select 0;
_boundMax = _tree select 1;
_objects = _tree select 2;
_nodes = _tree select 3;

private["_width","_height","_center"];
_width = ((_boundMax select 0) - (_boundMin select 0))/2;
_height = ((_boundMax select 1) - (_boundMin select 1))/2;
_center = [(_boundMin select 0)+_width,(_boundMin select 1)+_height];

_markername = format["QTM_%1_%2",_center select 0, _center select 1];
_markerstr = createMarker [_markername,_center];
_markerstr setMarkerShape "RECTANGLE";

_colors = ["ColorBlack",
"ColorGrey",
"ColorRed",
"ColorGreen",
"ColorBlue",
"ColorYellow",
"ColorOrange",
"ColorWhite",
"ColorPink",
"ColorBrown"];
_markerstr setMarkerColor "ColorWhite";
_markerstr setMarkerBrush "Border";
_markerstr setMarkerSize [_width, _height];
_markerstr setMarkerAlpha 1;

{
	_markername = format["QTMOBJ_%1",_x];
	_markerstr = createMarker [_markername,getpos _x];
	_markerstr setMarkerShape "ICON";
	_markerstr setMarkerType "Mil_Dot";
	_markerstr setmarkercolor "ColorWhite";
} foreach _objects;

{[_x] call mb_fnc_quadtreeDraw;} foreach _nodes;
