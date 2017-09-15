/*
    Function:       MB_fnc_uiResetSettings
    Author:         Adanteh
    Description:    Resets the settings for UI. Use this to restore everything to it's default values
    Example:        [true] call MB_fnc_uiResetSettings;
*/

params [["_reset", true]];

private _cfg = (configFile >> "MapBuilder" >> "Panes");
{
    private _paneID = configName _x;
    private _paneConfig = _x;
    {
        ([["ui.setting", _paneID, _x], nil, false] call MB_fnc_uiSetSetting);
    } forEach [
        "sidebar",
        "collapsed",
        "floating",
        "enabled",
        "posX",
        "posY",
        "sizeY",
        "sizeX"
    ];

} forEach ("getNumber (_x >> 'scope') >= 2" configClasses _cfg);
saveProfileNamespace;
