/*
    Function:       MB_fnc_uiPaneHelp
    Author:         Adanteh
    Description:    Does the help thing
*/

params ["_ctrl"];
private _paneCtrl = ctrlParentControlsGroup (ctrlParentControlsGroup _ctrl);
private _helpURL = _paneCtrl getVariable ["helpurl", ""];
if (_helpURL != "") then {
    _text = format ["<a href='http:\/\/wiki.map-builder.info/w/%1'>?</a>", _helpURL];
};
