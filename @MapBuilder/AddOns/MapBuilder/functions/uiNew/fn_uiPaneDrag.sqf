/*
    Function:       MB_fnc_uiPaneDrag
    Author:         Adanteh
    Description:    Handles the dragging of panes. Will change order if within the sidebar, will make it a seperate window if without
*/
#include "\mb\MapBuilder\ui\mbdefinesNew.hpp"

params ["_ctrl", ["_mode", "start"]];
private _return = true;

switch (toLower _mode) do {
    case "start": {
        private _paneCtrl = ctrlParentControlsGroup (ctrlParentControlsGroup _ctrl);
        private _floating = _paneCtrl getVariable ["floating", false];
        private _panePos = ctrlPosition _paneCtrl;
        private _panePosReal = [_paneCtrl] call MB_fnc_getCtrlPositionReal; // Get real position, not the position within controlGroup
        private _display = ctrlParent _paneCtrl;

        private _offsetRelative = [
            (getMousePosition select 0) - (_panePos select 0),
            (getMousePosition select 1) - (_panePos select 1)
        ];

        private _offsetReal = [
            (getMousePosition select 0) - (_panePosReal select 0),
            (getMousePosition select 1) - (_panePosReal select 1)
        ];

        private _offsetDetach = [
            (_panePosReal select 2) / 3,
            0
        ];

        // -- If the pane is currently in a sidebar, we need to make a temporary pane so we can move it outside the sidebar on screen
        private _paneTempCtrl = if (_floating) then {
            _paneCtrl;
        } else {
            [_paneCtrl, "createdragger"] call MB_fnc_uiPaneDrag;
        };

        // -- Some work arounds for Z-order shenanigans.
        private _resizeHandle = ([_paneCtrl, _paneTempCtrl, _offsetReal, _offsetRelative, _offsetDetach, _panePos] spawn {
            disableSerialization;
            params ["_paneCtrl", "_paneTempCtrl", "_offsetReal", "_offsetRelative", "_offsetDetach", "_panePos"];

            // TOOD: This only supports one sidebar now, make a general "posInSidebar" function that will return index if it's within one
            private _sidebarPos = [(uiNamespace getVariable ["MB_UI_Sidebars", []]) select 0] call MB_fnc_getCtrlPositionReal;
            while { !(isNull (__GUI_WINDOW)) } do {

                // -- The current position of the top left corner on the screen (Use this to set position)
                private _positionToSet = [
                    (getMousePosition select 0) - (_offsetReal select 0),
                    (getMousePosition select 1) - (_offsetReal select 1)
                ];

                // -- If more than one third left of the pane is outside the bar, detach it
                private _positionDetachCheck = [
                    (_positionToSet select 0) + (_offsetDetach select 0),
                    (_positionToSet select 1) + (_offsetDetach select 1)
            ];

                // -- Figure out if we should be attaching to a sidepanel.
                //if (_paneCtrl getVariable ["allowAttaching", false]) then { };
                private _floating = !([_positionDetachCheck, _sidebarPos] call MB_fnc_uiPosInPos);
                if !(_floating) then {
                    if (_paneCtrl != _paneTempCtrl) then {
                        _paneTempCtrl ctrlShow false;
                        _positionToSet = [
                            (_panePos select 0),
                            (getMousePosition select 1) - (_offsetRelative select 1)
                        ];
                    };

                    _paneCtrl ctrlSetPosition _positionToSet;
                    _paneCtrl ctrlCommit 0;
                } else {
                    _paneCtrl ctrlSetPosition [_panePos select 0, _panePos select 1];
                    _paneCtrl ctrlCommit 0;
                    _paneTempCtrl ctrlSetPosition _positionToSet;
                    _paneTempCtrl ctrlCommit 0;
                    _paneTempCtrl ctrlShow true;
                };

                uiNamespace setVariable ["MB_MovingFloating", _floating];
                uiSleep 0.1;
            };
        });

        uiNamespace setVariable ["MB_MovingHandle", _resizeHandle];
        uiNamespace setVariable ["MB_MovingTarget", _paneTempCtrl];
        uiNamespace setVariable ["MB_MovingReal", _paneCtrl];
    };

    case "createdragger": {
        private _paneTempCtrl = __GUI_WINDOW ctrlCreate ["MB_CorePane", -1];
        (_paneTempCtrl controlsGroupCtrl __IDC_PANE_HEADER_TEXT) ctrlSetText (ctrlText (_ctrl controlsGroupCtrl __IDC_PANE_HEADER_TEXT));
        _paneTempCtrl ctrlShow false;
        _return = _paneTempCtrl;
    };

    case "end": {
        private _handle = uiNamespace getVariable "MB_MovingHandle";
        if (isNil "_handle") exitWith { };

        terminate _handle;

        private _floating = uiNamespace getVariable ["MB_MovingFloating", false];
        private _paneTempCtrl = uiNamespace getVariable ["MB_MovingTarget", controlNull];
        private _paneCtrl = uiNamespace getVariable ["MB_MovingReal", controlNull];
        private _position = (ctrlPosition _paneTempCtrl);

        uiNamespace setVariable ["MB_MovingHandle", nil];
        uiNamespace setVariable ["MB_MovingTarget", nil];
        uiNamespace setVariable ["MB_MovingReal", nil];

        if (_paneTempCtrl != _paneCtrl) then {
            ctrlDelete _paneTempCtrl;
            _paneCtrl ctrlShow true;
        };

        // -- If the pane was not floating and now is, or vice versa than remake it
        private _toggle = !(_floating isEqualTo (_paneCtrl getVariable ["floating", false]));
        if (_floating) then {
            private _paneID = _paneCtrl getVariable ["id", ""];
            [["ui.setting", _paneID, "posX"], (_position select 0)] call MB_fnc_uiSetSetting;
            [["ui.setting", _paneID, "posY"], (_position select 1)] call MB_fnc_uiSetSetting;
        };

        if (_toggle) then {
            _paneCtrl = [_paneCtrl] call MB_fnc_uiPaneFloatToggle;
        } else {
            [_paneCtrl getVariable ["parent", controlNull]] call MB_fnc_uiPanesShift;
        };
    };
};

_return
