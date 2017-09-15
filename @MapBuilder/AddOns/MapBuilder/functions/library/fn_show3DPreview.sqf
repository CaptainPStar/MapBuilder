/*
    Function:       MB_fnc_show3DPreview
    Author:         NeoArmageddon
    Description:    Shows a 3D preview of the currently selected object in the library
*/

#define __PREVIEWPOS [100, 100, 1000]
params ["_ctrl", ["_type", ""]];

if (_type == "") exitWith { };

if (isNull MB_3DPreviewCam) then {
	MB_3DPreviewCam = "camera" camCreate __PREVIEWPOS;
	MB_3DPreviewCam cameraEffect ["Internal", "Back", "mbpreviewrtt"];
};

if (!isNull MB_3DPreviewObject) then {
	deletevehicle MB_3DPreviewObject;
	MB_3DPreviewObject = objNull;
};

if (_type != "") then {
	MB_3DPreviewObject = _type createvehiclelocal __PREVIEWPOS;
	MB_3DPreviewObject setpos __PREVIEWPOS;
	MB_3DPreviewCam camSetTarget MB_3DPreviewObject;
	private _size = (sizeOf _type)/2;
	MB_3DPreviewCam camSetRelPos [0, _size+2, _size/2];
	MB_3DPreviewCam camCommit 0;
	MB_3D_PreviewShown = true;
};
