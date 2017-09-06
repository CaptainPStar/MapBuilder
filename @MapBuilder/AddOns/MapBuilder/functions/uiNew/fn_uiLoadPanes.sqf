/*
    Function:       MB_fnc_uiLoadPanes
    Author:         Adanteh
    Description:    Loads in all the panes
    Example:        [] call MB_fnc_uiLoadPanes;
*/
#include "\mb\MapBuilder\ui\mbdefinesNew.hpp"

private _barsToProcess = [];
private _realIndex = 1;
private _cfg = (configFile >> "MapBuilder" >> "Layout");
{

    private _barID = configName _x;
    private _position = getText (_x >> "position");
    private _children = [];
    // -- Children
    {

        _children pushBack [
            configName _x,
            getText (_x >> "title"),
            getText (_x >> "type")
        ];
    } forEach ("true" configClasses _x);
    _barsToProcess pushBack [_barID, _position, _children];
} forEach ("true" configClasses _cfg);

// -- Add the sidebar content
private _bars = [];
private _allPanes = [];
{
    _x params ["_barID", "_position", "_panes"];
    private _sidebarPosition = switch (toLower _position) do {
        case "right": {
            [safeZoneX + safeZoneW - __GUI_PANE_W, safeZoneY, __GUI_PANE_W, safeZoneH];
        };
        case "left": {
            [safeZoneX, safeZoneY, __GUI_PANE_W, safeZoneH];
        };
        default { [0, 0, 0, 0] };
    };

    private _backgroundCtrl = __GUI_WINDOW ctrlCreate ["MB_CoreSidebarBG", __IDC_SIDEBAR_BG]; // -- Dont want this to scroll
    private _sidebarCtrl = __GUI_WINDOW ctrlCreate ["MB_CoreSidebar", (__IDC_SIDEBAR_BASEIDC + _forEachIndex)];
    private _yPos = 0;
    private _children = [];
    _sidebarCtrl ctrlSetPosition _sidebarPosition;
    _sidebarCtrl ctrlCommit 0;

    _backgroundCtrl ctrlSetPosition _sidebarPosition;
    _backgroundCtrl ctrlCommit 0;

    {
        _x params ["_paneID", "_paneTitle", ["_paneCtrlClass", "MB_CorePane"]];
        private _paneCtrl = __GUI_WINDOW ctrlCreate ["MB_CorePane", __IDC_PANE_BASEIDC + (_realIndex * 100), _sidebarCtrl];
        private _contentCtrl = __GUI_WINDOW ctrlCreate [_paneCtrlClass, __IDC_PANE_CONTENT, _paneCtrl];

        private _collapsed = [["ui.setting", _paneID, "collapsed"], false] call MB_fnc_uiGetSetting;
        _paneCtrl ctrlSetPosition [0, _yPos];
        _paneCtrl ctrlCommit 0;

        // TODO: Support for floating panes (detach from sidebar, save position on screen)
        if !(_collapsed) then {
            _contentHeight = [["ui.setting", _paneID, "sizeY"], 0] call MB_fnc_uiGetSetting;
            [_contentCtrl, _contentHeight] call MB_fnc_uiAdjustContentCtrl;
        };

        (_paneCtrl controlsGroupCtrl __IDC_PANE_HEADER_TOGGLE) cbSetChecked _collapsed;
        (_paneCtrl controlsGroupCtrl __IDC_PANE_HEADER_TEXT) ctrlSetText _paneTitle;

        // -- Run some extra fancy code (Makes it easier to extend mapBuilder)
        private _code = getText (configFile >> _paneCtrlClass >> "MapBuilder" >> "initCode");
        if (_code != "") then {
            _code = compile _code;
            [_paneCtrl, _yPos] call _code;
        };

        _paneCtrl setVariable ["collapsed", _collapsed];
        _paneCtrl setVariable ["floating", false];
        _paneCtrl setVariable ["parent", _sidebarCtrl];
        _paneCtrl setVariable ["id", _paneID];

        _yPos = _yPos + ((ctrlPosition _paneCtrl) select 3);
        _children pushBack _paneCtrl;
        _realIndex = _realIndex + 1;
    } forEach _panes;

    _bars pushBack _sidebarCtrl;
    _allPanes append _children;

    _sidebarCtrl setVariable ["children", _children];
    _sidebarCtrl setVariable ["id", _barID];

} forEach _barsToProcess;
uiNamespace setVariable ["MB_UI_Sidebars", _bars];
uiNamespace setVariable ["MB_UI_AllPanes", _allPanes];

(__GUI_WINDOW displayCtrl __IDC_OVERLAYGROUP) ctrlShow false;

true;
