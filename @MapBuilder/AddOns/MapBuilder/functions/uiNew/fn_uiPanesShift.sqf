/*
    Function:       MB_fnc_uiPanesShift
    Author:         Adanteh
    Description:    Shifts all panes below the one that was adjusted
*/

params ["_paneCtrl"];

private _sidebarCtrl = _paneCtrl getVariable ["parent", controlNull];
if (isNull _sidebarCtrl) exitWith { 0 };

private _children = _sidebarCtrl getVariable ["children", []];
private _paneIndex = _children find _paneCtrl;
if (_paneIndex == -1) exitWith {
    ["Pane has missing data. Please reload the UI", "error"] call MB_fnc_uiLogOutput;
    1
};

// -- Nothing to adjust when this is the last panel
if ((count _paneCtrl - 1) <= _paneIndex) exitWith { 0 };

(ctrlPosition _sidebarCtrl) params ["", "_yPos", "", "_ySize"];
private _animateTime = ["ui.setting.animateTime", 0] call MB_fnc_uiGetSetting;
private _posY = _yPos + _ySize;

for "_i" from (_paneIndex + 1) to (count _paneCtrl - 1) do {
    private _paneBelow = (_children select _i);
    private _paneBelowPos = (ctrlPosition _paneBelow);
    _paneBelowPos set [1, _posY];
    _paneBelowPos ctrlSetPosition _paneBelowPos;
    _paneBelowPos ctrlCommit _animateTime;
    _posY = _posY + (_paneBelowPos select 3);
};

0;
