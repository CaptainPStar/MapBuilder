MB_Brushing = false;
MB_3DVectors = [];
MB_BrushNode = [];

if(MB_BrushCamFollow) then {
	MB_CamCommit = MB_DefaultCamCommit;
};
//MB_BrushStart = [];

deleteVehicle MB_BrushHelper;
deleteVehicle MB_BrushPoint;