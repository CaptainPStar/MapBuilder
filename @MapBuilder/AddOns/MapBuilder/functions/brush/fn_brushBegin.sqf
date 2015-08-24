if(!MB_Brushing) then {
	MB_Brushing = true;
	MB_BrushStart = MB_MousePosition;
	_vertex = "Sign_Sphere100cm_F" createvehiclelocal MB_MousePosition;
	_vertex setObjectTexture [0, "#(rgb,8,8,3)color(1,0,0,1)"];
	MB_BrushHelper pushBack _vertex;
	_vertex = "Sign_Sphere100cm_F" createvehiclelocal MB_MousePosition;
	_vertex setObjectTexture [0, "#(rgb,8,8,3)color(0,1,0,1)"];
	MB_BrushPoint = _vertex;
} else {
	systemChat "Please wait before the last brush has finished creating the objects."
};