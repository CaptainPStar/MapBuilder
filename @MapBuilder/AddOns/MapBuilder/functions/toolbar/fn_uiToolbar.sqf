/*
    Function:       MB_fnc_uiToolbar
    Author:         Adanteh
    Description:    Shared function for most toolbar funct
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"

private _toolbarConfig = (configFile >> "MB_Main" >> "Controls" >> "Toolbar" >> "Items");
private _posY = 0;
private _toolbarGroup = __GUI_WINDOW displayCtrl __IDC_TOOLBARGROUP;
private _ySize = [(configFile >> "MB_CtrlToolbarButton" >> "h")] call MB_fnc_uiGetCfgSize;
private _ySPacing = [(_toolbarConfig >> "ySpacing")] call MB_fnc_uiGetCfgSize;

{
    private _cfg = _x;
    private _toolbarCtrl = __GUI_WINDOW ctrlCreate ["MB_CtrlToolbarButton", __IDC_TOOLBARBUTTON + _forEachIndex, _toolbarGroup];
    _toolbarCtrl ctrlSetPosition [0, _posY];
    _toolbarCtrl ctrlCommit 0;

    private _tooltip = getText (_x >> "Tooltip");
    if (_tooltip == "") then { _tooltip == getText (_x >> "Text") };
    if (_tooltip == "") then { _tooltip == configName _x; };
    private _picture = getText (_x >> "Picture");
    private _action = getText (_x >> "action");
    private _data = getText (_x >> "data");
    private _value = getNumber (_x >> "value");
    private _enabled = !(isNumber (_x >> "enable")) || (getNumber (_x >> "enable") > 0); // -- If the number isn't thre, enable by default

    _toolbarCtrl ctrlSetTooltip _tooltip;
    _toolbarCtrl ctrlSetText _picture;
    _toolbarCtrl buttonSetAction _action;
    _toolbarCtrl ctrlEnable _enabled;
    _toolbarCtrl setVariable ["data", _data];
    _toolbarCtrl setVariable ["value", _value];

    //systemChat str [configName _x, _toolbarCtrl, _picture, _posY];
    uiNamespace setVariable [("MB_ToolbarButton_" + configName _x), _toolbarCtrl];

    _posY = _posY + (_ySize + _ySPacing);
} forEach ("true" configClasses _toolbarConfig);


// ("true" configClasses (configFile >> "MB_Main" >> "Controls" >> "Toolbar" >> "Items"));
