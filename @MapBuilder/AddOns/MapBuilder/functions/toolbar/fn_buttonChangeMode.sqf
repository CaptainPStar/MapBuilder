/*
    Function:       MB_fnc_buttonChangeMode
    Author:         Adanteh
    Description:    Switches MB modes
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"

params [["_mode", "brush"]];

private _objectMode = uiNamespace getVariable ["MB_ToolbarButton_ObjectMode", controlNull];
private _brushMode = uiNamespace getVariable ["MB_ToolbarButton_BrushMode", controlNull];

private _colorHightlight = getArray (configFile >> "MB_Main" >> "Controls" >> "Toolbar" >> "Items" >> "colorHighlight");
private _colorNormal = getArray (configFile >> "MB_Main" >> "Controls" >> "Toolbar" >> "Items" >> "colorNormal");

private _return = true;

// -- If there is already a settings pane a loaded in the sidebar, delete it
private _currentModeSettings = uiNamespace getVariable ["MB.Toolbar.contentCtrl.settings", controlNull];
if !(isNull _currentModeSettings) then {
    ctrlDelete _currentModeSettings;
};

switch (toLower _mode) do {
    case 'init': {
        private _mode = ["mb.tools.currentMode", "object"] call MB_fnc_uiGetSetting;
        [_mode] call MB_fnc_buttonChangeMode;
    };

    case 'object': {
        MB_Mode = 0;

        _objectMode ctrlSetTextColor _colorHightlight;
        _brushMode ctrlSetTextColor _colorNormal;
        ["mb.tools.currentMode", "object"] call MB_fnc_uiSetSetting;
    };
    case 'brush': {
        MB_Mode = 1;

        _objectMode ctrlSetTextColor _colorNormal;
        _brushMode ctrlSetTextColor _colorHightlight;

        private _sidebar = uiNamespace getVariable ["MB.Toolbar.contentCtrl", controlNull];
        private _controlSetting = __GUI_WINDOW ctrlCreate ["MB_PaneSettingsBrush", -1, (_sidebar controlsGroupCtrl __IDC_TOOLBARSETTINGSGROUP)];
        ['combo', [_controlSetting]] call MB_fnc_brushToolbarSettings;
        uiNamespace setVariable ["MB.Toolbar.contentCtrl.settings", _controlSetting];
        ["mb.tools.currentMode", "brush"] call MB_fnc_uiSetSetting;
    };
};
_return
