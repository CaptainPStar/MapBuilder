/*
    Function:       MB_fnc_uiToolbar
    Author:         Adanteh
    Description:    Shared function for most toolbar functions
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"

params [["_mode", "init"]];

private _return = true;
switch (toLower _mode) do {
    case "init": {
        private _toolbarConfig = (configFile >> "MB_Main" >> "Controls" >> "Toolbar" >> "Items");
        private _posY = GRID_TOOLBAR_Y(2);
        private _toolbarGroup = __GUI_WINDOW displayCtrl __IDC_TOOLBAR;
        private _ySize = [(configFile >> "MB_CtrlToolbarButton" >> "h")] call MB_fnc_uiGetCfgSize;
        private _ySpacing = [(_toolbarConfig >> "ySpacing")] call MB_fnc_uiGetCfgSize;
        private _colorHightlight = getArray (_toolbarConfig >> "colorHighlight");

        uiNamespace setVariable ["MB.Toolbar.contentCtrl", __GUI_WINDOW displayCtrl __IDC_TOOLBAR];

        // -- Used to reset focus back to the main view (Disabled right now)
        private _children = [];
        {
            private _cfg = _x;
            private _toolbarCtrl = __GUI_WINDOW ctrlCreate ["MB_CtrlToolbarButton", __IDC_TOOLBARBUTTON + _forEachIndex, _toolbarGroup];
            _toolbarCtrl ctrlSetPosition [GRID_TOOLBAR_X(0.45), _posY];
            _toolbarCtrl ctrlCommit 0;

            private _tooltip = getText (_x >> "Tooltip");
            if (_tooltip == "") then { _tooltip == getText (_x >> "Text") };
            if (_tooltip == "") then { _tooltip == configName _x; };
            private _picture = getText (_x >> "Picture");
            private _action = getText (_x >> "action");
            private _data = getText (_x >> "data");
            private _value = getNumber (_x >> "value");
            private _default = getNumber (_x >> "default") > 0;
            private _enabled = !(isNumber (_x >> "enable")) || (getNumber (_x >> "enable") > 0); // -- If the number isn't there, enable by default

            _toolbarCtrl ctrlSetTooltip _tooltip;
            _toolbarCtrl ctrlSetText _picture;
            if (_action != "") then {
                // _action = format ["private _return = %1; %2; _return", _action, _resetFocus];
            };

            _toolbarCtrl buttonSetAction _action;
            _toolbarCtrl ctrlEnable _enabled;
            _toolbarCtrl setVariable ["data", _data];
            _toolbarCtrl setVariable ["value", _value];
            _toolbarCtrl setVariable ["class", configName _x];

            if (_default) then {
                _toolbarCtrl ctrlSetTextColor _colorHightlight;
            };
            //systemChat str [configName _x, _toolbarCtrl, _picture, _posY];
            uiNamespace setVariable [("MB_ToolbarButton_" + configName _x), _toolbarCtrl];

            _children pushBack _toolbarCtrl;
            _posY = _posY + (_ySize + _ySpacing);
        } forEach ("true" configClasses _toolbarConfig);
        _toolbarGroup setVariable ["children", _children];


        ["init"] call MB_fnc_toolbarExpand;
        ["init"] call MB_fnc_buttonChangeMode;

    };

    // -- Workaround to pull all buttons on top again after clicking an underlaying control (Lack of Z order in arma. This is bullshit)
    case "resetfocus": {
        private _sidebar = uiNamespace getVariable ["MB.Toolbar.contentCtrl", controlNull];
        private _sidebarChildren = _sidebar getVariable ["children", []];
        {
            ctrlSetFocus _x;
            nil;
        } count _sidebarChildren;
    };
};

_return;
