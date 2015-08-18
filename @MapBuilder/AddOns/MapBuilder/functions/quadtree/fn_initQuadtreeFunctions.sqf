MB_QuadTree = [[0,0],[worldSize,worldSize],[],[]];
MB_QuadTree_Node_Capacity = 1;
//Node = [[BoundXMin,BoundYMin],[BoundXMax,BoundYMax],[Objects],[Subnotes(4)]];
//Format of subnotes is NW,NE,SW,SE

//[MB_QuadTree] call MB_fnc_quadTreeSubdivide;
//_NE = (MB_QuadTree select 3 select 1);
//[_NE] call MB_fnc_quadTreeSubdivide;
//_SW = (MB_QuadTree select 3 select 2);
//[_SW] call MB_fnc_quadTreeSubdivide;
//_SSW = (_SW select 3 select 2);
//[_SSW] call MB_fnc_quadTreeSubdivide;

//_t = (MB_QuadTree select 3 select 3);
//for[{_i=0},{_i<8},{_i=_i+1}] do {
//	[_t] call MB_fnc_quadTreeSubdivide;
//	_t = (_t select 3 select 3);
//};
[MB_QuadTree] call MB_fnc_quadTreeDraw;