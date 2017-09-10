/*
    Function:       MB_fnc_uiAdjustContentCtrl
    Author:         Adanteh
    Description:    Adjusts the content ctrl height in most common way. X and Y positions don't change when resizing controls, so no need to change it
    Example:        [_contentCtrl, 0, -1] call MB_fnc_uiAdjustContentCtrl;
*/
#include "\mb\MapBuilder\ui\mbdefinesNew.hpp"

params ["_contentCtrl", ["_sizeY", -1], ["_sizeX", -1]];

// -- Adjust the parent
private _paneCtrl = ctrlParentControlsGroup _contentCtrl;
_panePos = ctrlPosition _paneCtrl;

private _classesToAdjust = [configFile >> (ctrlClassName _contentCtrl)];
_classesToAdjust append ("true" configClasses (configFile >> (ctrlClassName _contentCtrl) >> "Controls"));
_classesToAdjust pushBack (_paneCtrl controlsGroupCtrl __IDC_PANE_HEADER);
_classesToAdjust append  ("true" configClasses (configFile >> (ctrlClassName _headerCtrl) >> "Controls"));

{
    private _idc = getNumber (_x >> "idc");
    private _contentCtrl = _contentCtrl controlsGroupCtrl _idc;
    private _contentPos = ctrlPosition _contentCtrl;

    // -- Adjust X size first, because the required height might change based on this
    if (_sizeX != -1) then {
        if ((isNumber (_x >> "MB_wMin")) && { (getNumber (_x >> "MB_wMin")) >= _sizeX  }) exitWith { }; // -- Minimum W size


        if (getNumber (_x >> "MB_xAdjust") > 0) then {
            private _offset = [(_x >> "MB_xOffset")] call MB_fnc_uiGetCfgSize;
            _contentPos set [0, _sizeX - _offset];
        };

        // -- Adjust the width for the subelement
        if (getNumber (_x >> "MB_wAdjust") > 0) then {
            private _offset = [(_x >> "MB_wOffset")] call MB_fnc_uiGetCfgSize;
            _contentPos set [2, _sizeX - _offset];
        };
    };

    if (_sizeY == -1) exitWith { };
    if ((isNumber (_x >> "MB_hMin")) && { (getNumber (_x >> "MB_hMin")) >= _sizeY  }) exitWith { }; // -- Minimum H size
    // -- Adjust the Y position for the content (If the pane height changes, then position should change)
    if (getNumber (_x >> "MB_yAdjust") > 0) then {
        private _offset = [(_x >> "MB_yOffset")] call MB_fnc_uiGetCfgSize;
        _contentPos set [1, _ySize - _offset];
    };

    // -- Adjust the height for content (If the pane size changes, then the height should change?)
    if (getNumber (_x >> "MB_hAdjust") > 0) then {
        private _offset = [(_x >> "MB_hOffset")] call MB_fnc_uiGetCfgSize;
        _contentPos set [3, _ySize - _offset];
    };

    _contentCtrl ctrlSetPosition _contentPos;
    _contentCtrl ctrlCommit 0;

} forEach _classesToAdjust;



// -- Adjust the parent
_panePos set [3, __GUI_PANE_HEADER_H + _sizeY];
_paneCtrl ctrlSetPosition _panePos;
_paneCtrl ctrlCommit 0;


/* ## NOTES ##
    The _offset sizes are for when subcontrols should not span the full new height or width, but rather have a standard offset from the bottom for example
*/
