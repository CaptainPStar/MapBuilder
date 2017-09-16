/*
    Function:       MB_fnc_brusherSelectFile
    Author:         NeoArmageddon
    Description:    Selects a saved brush file
*/

private _brusherCtrl = uiNamespace getVariable ["MB_BrushContent", controlNull];
#define __CTRLCONTENT(var1) (_brusherCtrl controlsGroupCtrl var1)

private _index = tvCurSel __CTRLCONTENT(171201);
private _name = __CTRLCONTENT(171201) tvData _index;
__CTRLCONTENT(171220) ctrlSetText _name;
