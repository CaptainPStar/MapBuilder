/*
    Function:       MB_fnc_uiAdjustContentCtrl
    Author:         Adanteh
    Description:    Adjusts the content ctrl height in most common way. X and Y positions don't change when resizing controls, so no need to change it
    Example:        [_contentCtrl, 0] call MB_fnc_uiAdjustContentCtrl;
*/
#include "\mb\MapBuilder\ui\mbdefinesNew.hpp"

params ["_contentCtrl", ["_sizeY", 0]];

// -- Adjust the parent
private _parentCtrl = ctrlParentControlsGroup _contentCtrl;
_panePos = ctrlPosition _parentCtrl;

private _classesToAdjust = [configFile >> (ctrlClassName _contentCtrl)];
_classesToAdjust append ("true" configClasses (configFile >> (ctrlClassName _contentCtrl) >> "Controls"));
{
    private _idc = getNumber (_x >> "idc");

    // -- Adjust the Y position for the content (If the pane height changes, then position should change)
    // -- This can be used to keep items stuck to the bottom of the content pane
    if (getNumber (_x >> "MB_yAdjust") > 0) then {
        private _contentCtrl = _contentCtrl controlsGroupCtrl _idc;
        private _contentPos = ctrlPosition _contentCtrl;

        // -- Some elements might not cover the full height, so adjust it based on the config entry
        private _hOffset = 0;
        private _offsetClass = (_x >> "MB_yOffset");
        if (isText _offsetClass) then {
            _hOffset = call compile (getText _offsetClass);
        } else {
            if (isNumber _offsetClass) then {
                _hOffset = getNumber _offsetClass;
            };
        };


        _contentPos set [1, _sizeY - _hOffset];
        systemChat str [configName _x, _contentPos];
        _contentCtrl ctrlSetPosition _contentPos;
        _contentCtrl ctrlCommit 0;
    };

    // -- Adjust the height for content (If the pane size changes, then the height should change?)
    if (getNumber (_x >> "MB_hAdjust") > 0) then {
        private _contentCtrl = _contentCtrl controlsGroupCtrl _idc;
        private _contentPos = ctrlPosition _contentCtrl;
        _contentPos set [3, _sizeY];

        // -- Some elements might not cover the full height, so adjust it based on the config entry
        private _hOffset = 0;
        private _offsetClass = (_x >> "MB_hOffset");
        if (isText _offsetClass) then {
            _hOffset = call compile (getText _offsetClass);
        } else {
            if (isNumber _offsetClass) then {
                _hOffset = getNumber _offsetClass;
            };
        };

        _contentPos set [3, (_contentPos select 3) - _hOffset];
        _contentCtrl ctrlSetPosition _contentPos;
        _contentCtrl ctrlCommit 0;
    };

} forEach _classesToAdjust;

// -- Adjust the parent
_panePos set [3, __GUI_PANE_HEADER_H + _sizeY];
_parentCtrl ctrlSetPosition _panePos;
_parentCtrl ctrlCommit 0;
