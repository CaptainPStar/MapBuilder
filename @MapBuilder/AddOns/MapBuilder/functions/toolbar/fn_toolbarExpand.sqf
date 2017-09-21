/*
    Function:       MB_fnc_toolbarExpand
    Author:         Adanteh
    Description:    Handles expanding and retracting the left bar
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"


params [["_mode", "expand"], ["_args", []]];
systemChat str ["toolbar", _this];
switch (toLower _mode) do {
    case "expand": {
        private _ctrl = _args param [0, controlNull];
        private _pos = ctrlPosition _ctrl;
        _pos set [2, GRID_TOOLBAR_X(2) + __GUI_PANE_W];
        _ctrl ctrlSetPosition _pos;
        _ctrl ctrlCommit 0.1;
    };

    case "retract": {
        private _ctrl = _args param [0, controlNull];
        private _pos = ctrlPosition _ctrl;
        _pos set [2, GRID_TOOLBAR_X(2)];
        _ctrl ctrlSetPosition _pos;
        _ctrl ctrlCommit 0.1;
    };

    case "populate": {

    };
};
