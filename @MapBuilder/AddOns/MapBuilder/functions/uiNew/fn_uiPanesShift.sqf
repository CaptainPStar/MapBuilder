/*
    Function:       MB_fnc_uiPanesShift
    Author:         Adanteh
    Description:    Does proper shifting for panes in sidebar.
                    Checks the pane order, if new position of this pane is above where it should be based on order,
                    it'll reorder them and save for future usage. It'll also make sure it snaps to the last position
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

// -- When this is the last panel, shift it up to the bottom of the preceding pane
private _childrenCount = count _children;
if ((_childrenCount - 1) <= _paneIndex) exitWith {
    private _currentPos = ctrlPosition _sidebarCtrl;
    if (_paneIndex > 0) then {
        private _previousChildPos = ctrlPosition (_childen select (_paneIndex - 1));
        _currentPos set [1, (_previousChildPos select 1) + (_previousChildPos select 3)];
    } else {
        _currentPos set [1, 0];
    };
    _paneCtrl ctrlSetPosition _currentPos;
    _paneCtrl ctrlCommit 0;
};


// -- When there are panes below it, shift them so they connect to the bottom of the adjusted one
(ctrlPosition _paneCtrl) params ["", "_yPos", "", "_ySize"];
private _animateTime = ["ui.setting.animateTime", 0] call MB_fnc_uiGetSetting;
private _posY = _yPos + _ySize;

for "_i" from (_paneIndex + 1) to (_childrenCount - 1) do {
    private _paneBelow = (_children select _i);
    private _paneBelowPos = (ctrlPosition _paneBelow);
    _paneBelowPos set [1, _posY];
    _paneBelow ctrlSetPosition _paneBelowPos;
    _paneBelow ctrlCommit _animateTime;
    _posY = _posY + (_paneBelowPos select 3);
};

0;
