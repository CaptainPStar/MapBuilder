private["_dirandUp","_display"];
	if(MB_3D_PreviewShown && !isNull MB_3DPreviewObject) then {
		_dirandUp = [0,0,MB_3D_PreviewRotation] call MB_fnc_CalcDirAndUpVector;
		MB_3DPreviewObject SetVectorDirAndUp _dirandUp;
		MB_3D_PreviewRotation = MB_3D_PreviewRotation + 1.0;
		if(MB_3D_PreviewRotation >=360) then {
			MB_3D_PreviewRotation = 0;
		};	
	};