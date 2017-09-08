/*
    Function:       MB_fnc_uiPaneOpen
    Author:         Adanteh
    Description:    Opens up a pane/window with some stuff
*/
#include "\mb\MapBuilder\ui\mbdefinesNew.hpp"

params ["_paneID", ["_forceOpen", false]];

private _currentPanes = +(uiNamespace getVariable ["MB_allPanes", []]);
private _paneIndex = _currentPanes find (toLower _paneID);
if (_paneIndex != -1) exitWith { // -- Already open
    0
};

private _paneCount = count _currentPanes;
private _floating = ([["ui.setting", _paneID, "floating"], "cfg"] call MB_fnc_uiGetSetting) > 0;

// -- Makes either a 'floating' window not attached that you can freely move, or a preset size on in a sidebar
private "_paneCtrl";
if (_floating) then {
    _paneCtrl = __GUI_WINDOW ctrlCreate ["MB_CorePane", __IDC_PANE_BASEIDC + (_paneCount * __IDC_PANE_IDC)];
    private _posX = [["ui.setting", _paneID, "posX"], 0] call MB_fnc_uiGetSetting;
    private _posY = [["ui.setting", _paneID, "posY"], 0] call MB_fnc_uiGetSetting;
    private _sizeX = [["ui.setting", _paneID, "sizeX"], 0] call MB_fnc_uiGetSetting;
    _paneCtrl ctrlSetPosition [_posX, _posY];
    _panectrl ctrlCommit 0;
} else {

    // -- Creates a pane within a sidebar, if sidebar doesn't exist yet, create it now
    private _sidebarTarget = [["ui.setting", _paneID, "sidebar"], "cfg"] call MB_fnc_uiGetSetting;
    private _sidebarCtrl = uiNamespace getVariable [format ["MB_sidebar%1", _sidebarTarget], controlNull];
    if (isNull _sidebarCtrl) then {
        _sidebarCtrl = [_sidebarTarget] call MB_fnc_uiSidebarCreate;
    };

    private _sidebarChildren = _sidebarCtrl getVariable ["children", []];
    private _yPos = if (count _sidebarChildren == 0) then {
        0
    } else {
        private _lastChild = (_sidebarChildren select (count _sidebarChildren - 1));
        private _lastChildPos = ctrlPosition _lastChild;
        ((_lastChildPos select 1) + (_lastChildPos select 3));
    };

    _paneCtrl = __GUI_WINDOW ctrlCreate ["MB_CorePane", __IDC_PANE_BASEIDC + (_paneCount * __IDC_PANE_IDC), _sidebarCtrl];
    _paneCtrl ctrlSetPosition [0, _yPos];
    _paneCtrl ctrlCommit 0;

    // -- Set as child
    _paneCtrl setVariable ["parent", _sidebarCtrl];
    _sidebarChildren pushBack _paneCtrl;
    _sidebarCtrl setVariable ["children", _sidebarChildren];

    _children pushBack _paneCtrl;
};

// -- Create the content for this control
private _paneCtrlClass = getText (configFile >> "MapBuilder" >> "Panes" >> _paneID >> "type");
if !(isClass (configFile >> _paneCtrlClass)) then {
    _paneCtrlClass = "MB_MissingPane";
};

private _contentCtrl = __GUI_WINDOW ctrlCreate [_paneCtrlClass, __IDC_PANE_CONTENT, _paneCtrl];
private _collapsed = !_forceOpen && { ([["ui.setting", _paneID, "collapsed"], "cfg"] call MB_fnc_uiGetSetting) > 0; };
if !(_collapsed) then {
    _contentHeight = [["ui.setting", _paneID, "sizeY"], nil] call MB_fnc_uiGetSetting;
    if (isNil "_contentHeight") then {
        _contentHeight = getNumber (configFile >> _paneCtrlClass >> "h");
        [["ui.setting", _paneID, "sizeY"], _contentHeight] call MB_fnc_uiSetSetting;
    };
    [_contentCtrl, _contentHeight] call MB_fnc_uiAdjustContentCtrl;
};

private _paneTitle = getText (configFile >> "MapBuilder" >> "Panes" >> _paneID >> "title");
(_paneCtrl controlsGroupCtrl __IDC_PANE_HEADER_TOGGLE) cbSetChecked _collapsed;
(_paneCtrl controlsGroupCtrl __IDC_PANE_HEADER_TEXT) ctrlSetText _paneTitle;


_paneCtrl setVariable ["collapsed", _collapsed];
_paneCtrl setVariable ["floating", _floating];
_paneCtrl setVariable ["id", _paneID];

_currentPanes pushBack (toLower _paneID);
uiNamespace setVariable ["MB_allPanes", _currentPanes];

[["ui.setting", _paneID, "enabled"], 1] call MB_fnc_uiSetSetting;

// -- Run some extra fancy code (Makes it easier to extend mapBuilder)
private _code = getText (configFile >> "MapBuilder" >> "Panes" >> _paneID >> "onLoad");;
if (_code != "") then {
    _code = compile _code;
    [_paneCtrl, _yPos] call _code;
};

_paneCtrl
