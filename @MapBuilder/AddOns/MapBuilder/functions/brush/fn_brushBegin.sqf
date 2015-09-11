if(!MB_Brushing) then {
	MB_Brushing = true;
	MB_BrushingLookAt = (MB_CamPos select 0) vectorDiff MB_MousePosition;
	MB_BrushCamAngle = 0;
	MB_BrushDirection = 0;
	MB_NodesDrawn = 0;
	if(MB_BrushCamFollow) then {
		MB_CamCommit = 0.5;
	};
	MB_BrushLastNode = +MB_MousePosition;
	_vertex = "Sign_Sphere100cm_F" createvehiclelocal MB_MousePosition;
	_vertex setObjectTexture [0, "#(rgb,8,8,3)color(1,1,0,1)"];
	MB_BrushHelper = _vertex;
	_vertex = "Sign_Arrow_Direction_Blue_F" createvehiclelocal (MB_MousePosition vectorAdd [0,0,0.5]);
	_vertex setObjectTexture [0, "#(rgb,8,8,3)color(0,1,0,1)"];
	MB_BrushPoint = _vertex;
} else {
	systemChat "Please wait before the last brush has finished creating the objects."
};