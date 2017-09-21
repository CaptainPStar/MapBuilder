/*
    Function:       MB_fnc_buttonChangeMode
    Author:         Adanteh
    Description:    Switches MB modes
*/

params [["_mode", "brush"]];

private _objectMode = uiNamespace getVariable ["MB_ToolbarButton_ObjectMode", controlNull];
private _brushMode = uiNamespace getVariable ["MB_ToolbarButton_BrushMode", controlNull];
systemChat str ["mode", _this, _objectMode, _brushMode];

private _colorHightlight = getArray (configFile >> "MB_Main" >> "Controls" >> "Toolbar" >> "Items" >> "colorHighlight");
private _colorNormal = getArray (configFile >> "MB_Main" >> "Controls" >> "Toolbar" >> "Items" >> "colorNormal");

switch (toLower _mode) do {
    case 'object': {
        MB_Mode = 0;

        _objectMode ctrlSetTextColor _colorHightlight;
        _brushMode ctrlSetTextColor _colorNormal;
    };
    case 'brush': {
        MB_Mode = 1;
        _objectMode ctrlSetTextColor _colorNormal;
        _brushMode ctrlSetTextColor _colorHightlight;
    };
};
