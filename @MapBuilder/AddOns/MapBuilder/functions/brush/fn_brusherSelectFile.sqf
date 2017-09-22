/*
    Function:       MB_fnc_brusherSelectFile
    Author:         NeoArmageddon
    Description:    Selects a saved brush file
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"
#define __CTRLCONTENT(var1) (_ctrlGroup controlsGroupCtrl var1)

params [["_ctrlGroup", controlNull]];
if (isNull _ctrlGroup) then {
	_ctrlGroup = uiNamespace getVariable ["MB_Brush.contentCtrl", controlNull];
};

private _index = tvCurSel __CTRLCONTENT(__IDC_ELEMENT_1);
private _name = __CTRLCONTENT(__IDC_ELEMENT_1) tvData _index;
__CTRLCONTENT(171220) ctrlSetText _name;
