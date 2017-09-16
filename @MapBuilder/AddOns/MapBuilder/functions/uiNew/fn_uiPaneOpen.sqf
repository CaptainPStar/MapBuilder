/*
    Function:       MB_fnc_uiPaneOpen
    Author:         Adanteh
    Description:    Opens up a pane/window with some stuff
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"

params ["_paneID", ["_forceOpen", false], ["_replace", false]];

_paneID = toLower _paneID;
private _currentPanes = +(uiNamespace getVariable ["MB_allPanes", []]);
private _paneIndex = _currentPanes find _paneID;
if ((_paneIndex != -1) && !_replace) exitWith { // -- Already open
    private _targetPane = (uiNamespace getVariable ["MB_pane" + _paneID, controlNull]);
    _targetPane ctrlShow true;
    ctrlSetFocus _targetPane;
    if (_targetPane getVariable ["collapsed", false]) then {
        [_paneCtrl, true] call MB_fnc_uiPaneToggle;
    };
    0
};

private _replaceCtrl = controlNull;
private _paneCount = count _currentPanes;
if (_replace) then {
    _replaceCtrl = (uiNamespace getVariable [format ["MB_pane%1", _paneID], controlNull]);
    _paneCount = _paneIndex;
    _replaceCtrl ctrlShow false;
    // ctrlDelete _replaceCtrl; // Crashes game. NO idea why
};

private _paneCtrlClass = getText (configFile >> "MapBuilder" >> "Panes" >> _paneID >> "type");
if ((_paneCtrlClass == "") || !(isClass (configFile >> _paneCtrlClass))) then {
    _paneCtrlClass = "MB_MissingPane";
    if !(isClass (configFile >> "MapBuilder" >> "Panes" >> _paneID)) then {
        _paneID = "Default";
    };
};

// -- Makes either a 'floating' window not attached that you can freely move, or a preset size on in a sidebar
private ["_paneCtrl", "_contentWidth"];
private _contentWidth = [["ui.setting", _paneID, "sizeX"], -1] call MB_fnc_uiGetSetting;
if (_contentWidth == -1) then {
    _contentWidth = [(configFile >> _paneCtrlClass >> "w")] call MB_fnc_uiGetCfgSize;
    [["ui.setting", _paneID, "sizeX"], _contentWidth] call MB_fnc_uiSetSetting;
};

private _floating = ([["ui.setting", _paneID, "floating"], "cfg"] call MB_fnc_uiGetSetting) > 0;
if (_floating) then {
    _paneCtrl = __GUI_WINDOW ctrlCreate ["MB_CorePane", __IDC_PANE_BASEIDC + (_paneCount * __IDC_PANE_IDC)];
    private _posX = [["ui.setting", _paneID, "posX"], (random 0.4) - 0.4] call MB_fnc_uiGetSetting;
    private _posY = [["ui.setting", _paneID, "posY"], (random 0.4) - 0.4] call MB_fnc_uiGetSetting;
    _paneCtrl ctrlSetPosition [_posX, _posY];
    _panectrl ctrlCommit 0;

    // -- If we're allowed to close this window (and it's floating) create a close button

    private _cantClose = ([["ui.setting", _paneID, "cantClose"], "cfg"] call MB_fnc_uiGetSetting) == 1;
    if (_cantClose) then {
        (_paneCtrl controlsGroupCtrl __IDC_PANE_HEADER_CLOSE) ctrlEnable false;
        (_paneCtrl controlsGroupCtrl __IDC_PANE_HEADER_CLOSE) ctrlShow false;
    };
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


    _contentWidth = (ctrlPosition _sidebarCtrl) select 2;

    _paneCtrl = __GUI_WINDOW ctrlCreate ["MB_CorePane", __IDC_PANE_BASEIDC + (_paneCount * __IDC_PANE_IDC), _sidebarCtrl];
    _paneCtrl ctrlSetPosition [0, _yPos];
    _paneCtrl ctrlCommit 0;

    // -- Hide the close button in sidebar
    (_paneCtrl controlsGroupCtrl __IDC_PANE_HEADER_CLOSE) ctrlEnable false;
    (_paneCtrl controlsGroupCtrl __IDC_PANE_HEADER_CLOSE) ctrlShow false;

    // -- Set as child
    _paneCtrl setVariable ["parent", _sidebarCtrl];
    _sidebarChildren pushBack _paneCtrl;
    _sidebarCtrl setVariable ["children", _sidebarChildren];
};

private _header = _paneCtrl controlsGroupCtrl __IDC_PANE_HEADER;
private _helpURL = ([["ui.setting", _paneID, "helpurl"], "cfg"] call MB_fnc_uiGetSetting);
if (_helpURL != "") then {
    private _text = format ["<a href='http:\\wiki.map-builder.info/w/%1'><img size='0.5' image='\mb\mapBuilder\data\icons\action\32_help_ca.paa' /></a>", _helpURL];
    (_header controlsGroupCtrl __IDC_PANE_HEADER_HELP) ctrlSetStructuredText (parseText _text);
} else {
    (_header controlsGroupCtrl __IDC_PANE_HEADER_HELP) ctrlSetStructuredText (parseText "");
    (_header controlsGroupCtrl __IDC_PANE_HEADER_HELP) ctrlShow false;
};

// -- Create the content for this control
private _contentCtrl = __GUI_WINDOW ctrlCreate [_paneCtrlClass, __IDC_PANE_CONTENT, _paneCtrl];
private _collapsed = !_forceOpen && { ([["ui.setting", _paneID, "collapsed"], "cfg"] call MB_fnc_uiGetSetting) > 0; };
private _contentHeight = 0;
if !(_collapsed) then {
    _contentHeight = [["ui.setting", _paneID, "sizeY"], -1] call MB_fnc_uiGetSetting;
    if (_contentHeight == -1) then {
        _contentHeight = [(configFile >> _paneCtrlClass >> "h")] call MB_fnc_uiGetCfgSize;
        [["ui.setting", _paneID, "sizeY"], _contentHeight] call MB_fnc_uiSetSetting;
    };
};

[_contentCtrl, _contentHeight, _contentWidth] call MB_fnc_uiAdjustContentCtrl;
private _paneTitle = getText (configFile >> "MapBuilder" >> "Panes" >> _paneID >> "title");
(_paneCtrl controlsGroupCtrl __IDC_PANE_HEADER_TOGGLE) cbSetChecked _collapsed;
(_paneCtrl controlsGroupCtrl __IDC_PANE_HEADER_TEXT) ctrlSetText _paneTitle;


_paneCtrl setVariable ["collapsed", _collapsed];
_paneCtrl setVariable ["floating", _floating];
_paneCtrl setVariable ["id", _paneID];

_currentPanes pushBackUnique _paneID;
uiNamespace setVariable ["MB_pane" + _paneID, _paneCtrl];
uiNamespace setVariable ["MB_allPanes", _currentPanes];

[["ui.setting", _paneID, "enabled"], 1] call MB_fnc_uiSetSetting;

// -- Run some extra fancy code (Makes it easier to extend mapBuilder)
private _code = getText (configFile >> "MapBuilder" >> "Panes" >> _paneID >> "onLoad");
if (_code != "") then {
    _code = compile _code;
    [_paneCtrl] call _code;
};

_paneCtrl
