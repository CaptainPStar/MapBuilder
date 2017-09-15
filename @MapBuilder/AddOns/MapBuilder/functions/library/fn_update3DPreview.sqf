/*
    Function:       MB_fnc_update3DPreview
    Author:         NeoArmageddon/Adanteh
    Description:    Handles the 3D preview panel
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"

params [["_mode", "refresh"], ["_args", []]];

if !(missionNamespace getVariable ["MB_3DPreviewInit", false]) then {
    missionNamespace setVariable ["MB_3DPreviewInit", true];
    ['init'] call MB_fnc_update3DPreview;
};

private _return = true;
switch (toLower _mode) do {
    // -- For when variables aren't initialized
    case "init": {
        MB_3DPreviewObject = objNull;
        MB_3DPreviewCam = objNull;
        MB_3D_PreviewShown = false;
        MB_3D_PreviewRotation = 0;

        ["camUpdate",
            { ["rotate"] call MB_fnc_update3DPreview; },
            { missionNamespace getVariable ["MB_3D_PreviewShown", false] }
        ] call MB_fnc_addCallback;
    };

    // -- When the 3D Preview pane is originally opened
    case "onload": {
        ['show'] call MB_fnc_update3DPreview;
    };

    case "show": {
        #define __PREVIEWPOS [100, 100, 1000]
        _args params [["_type", missionNamespace getVariable ["MB_CurClass", ""]]];
        if (_type == "") exitWith { };

        if (isNull MB_3DPreviewCam) then {
        	MB_3DPreviewCam = "camera" camCreate __PREVIEWPOS;
        	MB_3DPreviewCam cameraEffect ["Internal", "Back", "mbpreviewrtt"];
        };

        if !(isNull MB_3DPreviewObject) then {
        	deletevehicle MB_3DPreviewObject;
        	MB_3DPreviewObject = objNull;
        };

        if (_type != "") then {
        	MB_3DPreviewObject = _type createvehiclelocal __PREVIEWPOS;
        	MB_3DPreviewObject setpos __PREVIEWPOS;
        	MB_3DPreviewCam camSetTarget MB_3DPreviewObject;
        	private _size = (sizeOf _type) / 2;
        	MB_3DPreviewCam camSetRelPos [0, _size+2, _size/2];
        	MB_3DPreviewCam camCommit 0;
        	MB_3D_PreviewShown = true;
        };

    };

    case "disable": {
        deletevehicle MB_3DPreviewObject;
        MB_3DPreviewObject = objNull;
        MB_3D_PreviewShown = false;
    };


    case "rotate": {
        if (MB_3D_PreviewShown && !isNull MB_3DPreviewObject) then {
            private _dirandUp = [0, 0, MB_3D_PreviewRotation] call MB_fnc_CalcDirAndUpVector;
            MB_3DPreviewObject SetVectorDirAndUp _dirandUp;
            MB_3D_PreviewRotation = MB_3D_PreviewRotation + 1.0;
            if (MB_3D_PreviewRotation >= 360) then {
                MB_3D_PreviewRotation = 0;
            };
        };
    };
};

_return;
