/*
    Function:       MB_fnc_uiRemovePaneFromSidebar
    Author:         Adanteh
    Description:    Does the things required to remove a pane from a sidebar (If it is part of one)
*/

params ["_paneCtrl"];

// -- Reorganize the sidebar if pane was part of one
private _paneParent = _paneCtrl getVariable ["parent", controlNull];
if !(isNull _paneParent) then {
    private _children = _paneParent getVariable ["children", []];
    _children deleteAt (_children find _paneCtrl);
    _paneParent setVariable ["children", _children];
    _paneCtrl setVariable ["parent", controlNull];
};

// _paneCtrl ctrlShow false;
