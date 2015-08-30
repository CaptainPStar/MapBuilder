private["_dir","_pos"];
_pos = _this select 0;
_dir = _this select 1;

_vertex = "Sign_Sphere100cm_F" createvehiclelocal _pos;
_vertex setObjectTexture [0, "#(rgb,8,8,3)color(0,1,0,1)"];
_vertex setposATL _pos;

[_vertex] spawn {
	_vertex = _this select 0;
	for "_i" from 0 to 100 do {
		_vertex setObjectTexture [0, format["#(rgb,8,8,3)color(0,1,0,%1)",(100-_i)/100]];
		sleep 0.01;
	};
	deletevehicle _vertex;
};
MB_BrusherNodesToDraw pushBack [_pos,_dir];