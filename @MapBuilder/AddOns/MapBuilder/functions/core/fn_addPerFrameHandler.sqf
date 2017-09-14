/*
    Function:       MB_fnc_initPerFrameHandler
    Author:         Based on CBA/ACE/Clib
    Description:    Adds perFrame handler
*/

params [["_function", {}, [{},""]], ["_delay", 0, [0]], ["_args", []]];

if (_function isEqualType "") then {
    _functionSaved = uiNamespace getVariable [_function, ""];
    _function = if (_functionSaved == "") then {
        compile _function;
    } else {
        _functionSaved;
    };
};

if (count MB_Core_PFHhandles >= 999999) exitWith {
    diag_log "Max PerFrame Handles reached (999999)";
    diag_log _function;
    -1
};

private _handle = MB_Core_PFHhandles pushBack count MB_Core_perFrameHandleArray;
MB_Core_perFrameHandleArray pushBack [_function, _delay, diag_tickTime, diag_tickTime, _args, _handle];
_handle
