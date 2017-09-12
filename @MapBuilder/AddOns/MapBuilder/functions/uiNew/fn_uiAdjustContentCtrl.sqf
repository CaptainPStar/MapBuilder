/*
    Function:       MB_fnc_uiAdjustContentCtrl
    Author:         Adanteh
    Description:    Adjusts the content ctrl height in most common way. X and Y positions don't change when resizing controls, so no need to change it
    Example:        [_contentCtrl, 0, -1] call MB_fnc_uiAdjustContentCtrl;
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"

params ["_contentCtrl", ["_sizeY", -1], ["_sizeX", -1]];

// -- Adjust the parent
private _paneCtrl = ctrlParentControlsGroup _contentCtrl;
_panePos = ctrlPosition _paneCtrl;

private _headerCtrl = (_paneCtrl controlsGroupCtrl __IDC_PANE_HEADER);
private _headerCfg = configFile >> (ctrlClassName _headerCtrl);
private _classesToAdjust = [configFile >> (ctrlClassName _contentCtrl)];
_classesToAdjust append ("true" configClasses (configFile >> (ctrlClassName _contentCtrl) >> "Controls"));
_classesToAdjust pushBack _headerCfg;
_classesToAdjust append  ("true" configClasses (_headerCfg >> "Controls"));

// -- Minimum sizes
if (_sizeY != 0) then { // -- Exception for collapsing
    if (_sizeX != -1) then {
        private _minX = [((_classesToAdjust select 0) >> "MB_wMin"), -1] call MB_fnc_uiGetCfgSize;
        if ((_minX != -1) && { _minX > _sizeX }) then { _sizeX = _minX }; // -- Minimum W size
    };
    if (_sizeY != -1) then {
        private _minY = [((_classesToAdjust select 0) >> "MB_wMin"), -1] call MB_fnc_uiGetCfgSize;
        if ((_minY != -1) && { _minY > _sizeY }) exitWith { _sizeY = _minY }; // -- Minimum H size
    };
};

{
    private _idc = getNumber (_x >> "idc");
    private _subCtrl = _paneCtrl controlsGroupCtrl _idc;
    private _subCtrlPos = ctrlPosition _subCtrl;

    // -- Adjust X size first, because the required height might change based on this
    if (_sizeX != -1) then {
        if (getNumber (_x >> "MB_xAdjust") > 0) then {
            private _offset = [(_x >> "MB_xOffset")] call MB_fnc_uiGetCfgSize;
            _subCtrlPos set [0, _sizeX - _offset];
        };


        // -- Adjust the width for the subelement
        if (getNumber (_x >> "MB_wAdjust") > 0) then {
            private _offset = [(_x >> "MB_wOffset")] call MB_fnc_uiGetCfgSize;
            _subCtrlPos set [2, _sizeX - _offset];
        };
    };

    if (_sizeY == -1) exitWith { };
    // -- Adjust the Y position for the content (If the pane height changes, then position should change)
    if (getNumber (_x >> "MB_yAdjust") > 0) then {
        private _offset = [(_x >> "MB_yOffset")] call MB_fnc_uiGetCfgSize;
        _subCtrlPos set [1, _sizeY - _offset];
    };

    // -- Adjust the height for content (If the pane size changes, then the height should change?)
    if (getNumber (_x >> "MB_hAdjust") > 0) then {
        private _offset = [(_x >> "MB_hOffset")] call MB_fnc_uiGetCfgSize;
        _subCtrlPos set [3, _sizeY - _offset];
    };

    _subCtrl ctrlSetPosition _subCtrlPos;
    _subCtrl ctrlCommit 0;
} forEach _classesToAdjust;

// -- Adjust the parent
if (_sizeX != -1) then {
    _panePos set [2, _sizeX];
};
if (_sizeY != -1) then {
    _panePos set [3, __GUI_PANE_HEADER_H + _sizeY];
};
_paneCtrl ctrlSetPosition _panePos;
_paneCtrl ctrlCommit 0;


/* ## NOTES ##
    The _offset sizes are for when subcontrols should not span the full new height or width, but rather have a standard offset from the bottom for example
*/
