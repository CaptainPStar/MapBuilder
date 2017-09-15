/*
    Function:       MB_fnc_librarySelect
    Author:         NeoArmageddon/Adanteh
    Description:    Handles selecting an item in the library
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"

params ["_ctrl"];
private _data = _ctrl tvData (tvCurSel _ctrl);

if (_data != "") then {
	MB_CurClass = _data;

	// -- IMO this should be changed into adding and removing certain callback when panes are opened and close [Adanteh]
	private _previewPane = uiNamespace getVariable ["MB_pane" + "3DPreview", controlNull];
	if !(isNull _previewPane) then {
		private _previewCtrl = ((_previewPane controlsGroupCtrl __IDC_PANE_CONTENT) controlsGroupCtrl __IDC_ELEMENT_1);
		if !(isNull _previewCtrl) then {
			// _previewCtrl ctrlSetModel (getText (configFile >> "CfgVehicles" >> _data >> "model"));
			['show', [_data]] call MB_fnc_show3DPreview;
		};
	};
};

["Library.select.changed", [_ctrl, _data]] call MB_fnc_dispatchCallback;

/*  This is currently disabled, not sure what it should be doing

_lctrl = _display displayCtrl 170007;
_lctrl ctrlSetStructuredText parseText format["Selected: %1",_ctrl tvText (tvCurSel _ctrl)];
*/
