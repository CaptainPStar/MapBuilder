/*
    Function:       MB_fnc_uiLoadPanes
    Author:         Adanteh
    Description:    Loads in all the panes
*/
#include "mb/MapBuilder/ui/mbdefinesNew.hpp"

private _bars = [];
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
    } forEach (configProperties [_x, "isClass _x", true]);
    _bars pushBack [_barID, _position, _children];
} forEach (configProperties [_cfg, "isClass _x", true]);

// -- Add the sidebar content
{
    _x params ["_barID", "_position", "_children"];
    private _sidebarPosition = switch (toLower _position) do {
        case "right": {
            [safeZoneX - __GUI_PANE_W, safeZoneY, __GUI_PANE_W, safeZoneH];
        };
        case "left": {
            [safeZoneX, safeZoneY, __GUI_PANE_W, safeZoneH];
        };
        default { [0, 0, 0, 0] };
    };

    private _sidebarCtrl = ctrlCreate ["MB_CoreSidebar", (__IDC_SIDEBAR_BASEIDC + _forEachIndex)];
    private _yPos = 0;
    _sidebarCtrl ctrlSetPosition _position;

    {
        _x params ["_paneID", "_paneTitle", ["_paneCtrlClass", "MB_CorePane"]];
        private _paneCtrl = ctrlCreate [_paneClass, __IDC_PANE_BASEIDC + (_realIndex * 100), _sidebarCtrl];
        private _collapsed = [["ui.setting", _paneID, "collapsed"], false] call MB_fnc_uiSetSetting;
        private _panePos = [0, _yPos, __GUI_PANE_W, __GUI_PANE_HEADER_H];

        // TODO: Support for flying panes (detach from sidebar, save position on screen)
        if !(_collapsed) then {
            private _contentCtrl = _paneCtrl controlsGroupCtrl __IDC_PANE_CONTENT;
            private _contentPos = ctrlPosition _contentCtrl;
            private _oldSize = [["ui.setting", _paneID, "sizeY"], 0] call MB_fnc_uiGetSetting;
            _contentPos set [3, 0];
            _panePos set [3, _oldSize + __GUI_PANE_HEADER_H];
            _contentCtrl ctrlCommit 0;
        };

        (_paneCtrl controlsGroupCtrl __IDC_PANE_HEADER_TOGGLE) cbSetChecked _collapsed;
        (_paneCtrl controlsGroupCtrl __IDC_PANE_HEADER_TEXT) ctrlSetText _paneTitle;
        _paneCtrl ctrlSetPosition _panePos;
        _paneCtrl ctrlCommit 0;

        // -- Run some extra fancy code (Makes it easier to extend mapBuilder)
        private _code = getText (configFile >> _paneCtrlClass >> "MapBuilder" >> "initCode");
        if (_code != "") then {
            _code = compile _code;
            _return = [_paneCtrl, _yPos] call _code;
        };


        _paneCtrl setVariable ["collapsed", _collapsed];
        _paneCtrl setVariable ["flying", false];
        _paneCtrl setVariable ["parent", _sidebarCtrl];
        _paneCtrl setVariable ["id", _paneID];


        _yPos = _yPos + (_panePos select 3);
        _children pushBack _paneCtrl;
    } forEach _children;

    _bars pushBack _sidebarCtrl;
    _realIndex = _realIndex + 1;

    _sidebarCtrl setVariable ["children", _children];
    _sidebarCtrl setVariable ["id", _barID];

} forEach _bars;
