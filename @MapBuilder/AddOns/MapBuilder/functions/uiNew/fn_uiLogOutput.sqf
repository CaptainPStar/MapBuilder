/*
    Function:       MB_fnc_uiLogOutput
    Author:         Adanteh
    Description:    Shows a logging message in the output window
*/

params ["_message", ["_state", "default"]];

if !(_message isEqualType (parseText "")) then {
    if !(_message isEqualType "") then {
        _message = str _message;
    };
    //_message = parseText _message;
};

switch (toLower _state) do {
    case "important": {};
    case "error": {}; // -- Make RED
    case "default": {};
    default {};
};

systemChat _message;
