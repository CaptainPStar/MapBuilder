/*
    Function:       MB_fnc_postInitSettings
    Author:         Adanteh
    Description:    Adds the default settings
    Example:        ["show", "mapbuilder"];
*/

["add", ["camera", "Map Builder - Camera", "Camera", [
    "Easing",
    "If the camera should ease into motion",
    "MB_CtrlSettingCheckbox",
    { missionNamespace getVariable ["MB_CameraEasing", true] },
    { true },
    { MB_CameraEasing = ((_this select 1) == 1); ["camera.easing", MB_CameraEasing] call MB_fnc_uiSetSetting },
    []
]]] call MB_fnc_settingsWindow;


["add", ["camera", "Map Builder - Camera", "Camera", [
    "Movement speed",
    "The speed at which the camera moves (Without holding modifier)",
    "MB_CtrlSettingSlider",
    { missionNamespace getVariable ["MB_CameraSpeedModifier", 1] },
    { true },
    { MB_CameraSpeedModifier = (_this select 1); ["camera.speedmodifier", (_this select 1)] call MB_fnc_uiSetSetting },
    [[0.1, 5], [0.05, 0.5]]
]]] call MB_fnc_settingsWindow;
