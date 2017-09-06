/*
    Function:       MB_fnc_getCtrlPositionReal
    Author:         Adanteh
    Description:    Gets actual screen position of the current control, instead of the position of the control within a controlsGroup
*/

params ["_control"];
private _controlPos = ctrlPosition _control;
private _controlParent = ctrlParentControlsGroup _control;
while { !isNull _controlParent } do {
    private _parentPos = ctrlPosition _controlParent;
    _controlPos set [0, (_controlPos select 0) + (_parentPos select 0)];
    _controlPos set [1, (_controlPos select 1) + (_parentPos select 1)];
    _controlParent = ctrlParentControlsGroup _controlParent;
};

_controlPos
