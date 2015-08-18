_z = (_this select 1);
	_camPos = MB_CamPos select 0;
	_camPos set [2,(_camPos select 2)+_z];
	MB_CamPos set [0,_camPos];
	call MB_fnc_updateCam;