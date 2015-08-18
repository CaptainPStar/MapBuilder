private["_type","_size"];
	_type = [_this,0,""] call bis_fnc_param;
	
	if(isNull MB_3DPreviewCam) then {
		MB_3DPreviewCam = "camera" camCreate [100,100,1000];  
		MB_3DPreviewCam cameraEffect ["Internal", "Back", "mbpreviewrtt"];
	};
	if(!isNull MB_3DPreviewObject) then {
		deletevehicle MB_3DPreviewObject;
		MB_3DPreviewObject = objNull;
	};
	if(_type != "") then {
		MB_3DPreviewObject = _type createvehiclelocal [100,100,1000];
		MB_3DPreviewObject setpos [100,100,1000];
		MB_3DPreviewCam camSetTarget MB_3DPreviewObject;
		_size = (sizeOf _type)/2;
		MB_3DPreviewCam camSetRelPos [0, _size+2, _size/2];
		MB_3DPreviewCam camCommit 0;
		MB_3D_PreviewShown = true;
	};
	[171100,true] spawn MB_fnc_openWindow;