/*
    Function:       MB_fnc_uiPanesShift
    Author:         Adanteh
    Description:    Does proper shifting for panes in sidebar.
                    Checks the pane order, if new position of this pane is above where it should be based on order,
                    it'll reorder them and save for future usage. It'll also make sure it snaps to the last position
*/

params ["_sidebarCtrl"];
if (isNull _sidebarCtrl) exitWith { controlNull };
private _children = _sidebarCtrl getVariable ["children", []];
if (count _children == 0) exitWith { controlNull };

// --   Sorts panes by Y coordinate
private _sortArray = [];
{
    private _childCtrl = _x;
    if !(isNull _childCtrl) then {
        private _childY = (ctrlPosition _childCtrl) select 1;
        _sortArray pushBack [_childY, _childCtrl];
    };
} forEach _children;
_sortArray sort true;
_children = _sortArray apply { _x select 1 };

// -- Adjust all the panes to connect to it's preceding bottom

private _posY = 0;
{
    private _childPos = ctrlPosition _x;
    _childPos set [1, _posY];
    _x ctrlSetPosition _childPos;
    _x ctrlCommit 0;
    _posY = (_childPos select 1) + (_childPos select 3);
    [["ui.setting", (_x getVariable ["id", ""]), "order"], _forEachIndex] call MB_fnc_uiSetSetting;
} forEach _children;
_sidebarCtrl setVariable ["children", _children];
_sidebarCtrl;
