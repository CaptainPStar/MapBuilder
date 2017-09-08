/*
    Function:       MB_fnc_uiSidebarCreate
    Author:         Adanteh
    Description:    Creates a sidebar to attach panes to
*/
#include "\mb\MapBuilder\ui\mbdefinesNew.hpp"

params ["_sidebarTarget"];

private _sidebarPosition = switch (toLower _sidebarTarget) do {
    case "right": {
        [safeZoneX + safeZoneW - __GUI_PANE_W, safeZoneY, __GUI_PANE_W, safeZoneH];
    };
    case "left": {
        [safeZoneX, safeZoneY, __GUI_PANE_W, safeZoneH];
    };
    default { [0, 0, 0, 0] };
};

private _sidebars = uiNamespace getVariable ["MB_UI_Sidebars", []];
private _sidebarCount = (count _sidebars) + 1;

private _backgroundCtrl = __GUI_WINDOW ctrlCreate ["MB_CoreSidebarBG", __IDC_SIDEBAR_BG + _sidebarCount]; // -- Dont want this to scroll, so we make it seperate
private _sidebarCtrl = __GUI_WINDOW ctrlCreate ["MB_CoreSidebar", __IDC_SIDEBAR_BASEIDC + _sidebarCount];

_sidebarCtrl ctrlSetPosition _sidebarPosition;
_sidebarCtrl ctrlCommit 0;

_backgroundCtrl ctrlSetPosition _sidebarPosition;
_backgroundCtrl ctrlCommit 0;

_sidebars pushBack _sidebarCtrl;
_sidebarCtrl setVariable ["id", _sidebarTarget];
uiNamespace setVariable [format ["MB_sidebar%1", _sidebarTarget], _sidebarCtrl];
uiNamespace setVariable ["MB_UI_Sidebars", _sidebars];

_sidebarCtrl
