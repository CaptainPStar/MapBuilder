/*
    Function:       MB_fnc_uiGetCfgSize
    Author:         Adanteh
    Description:    Gets config entry and makes it a number to use for ctrlPosition
*/

params ["_cfgOffset"];
private _return = 0;
if (isText _cfgOffset) then {
    _return = call compile (getText _cfgOffset);
} else {
    if (isNumber _cfgOffset) then {
        _return = getNumber _cfgOffset;
    };
};

_return;
