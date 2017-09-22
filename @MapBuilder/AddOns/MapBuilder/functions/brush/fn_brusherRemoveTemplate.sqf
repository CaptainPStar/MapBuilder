/*
    Function:       MB_fnc_brusherRemoveTemplate
    Author:         NeoArmageddon
    Description:    Removes object from brushing template
*/

private _brusherCtrl = uiNamespace getVariable ["MB_Brush.contentCtrl", controlNull];
#define __CTRLCONTENT(var1) (_brusherCtrl controlsGroupCtrl var1)

private _path = (tvCurSel __CTRLCONTENT(171202));
private _data = [];
private _index = 0;

if(count(_path)>0) then {
	_index = _path select 0;
	if(_index < count(MB_CurBrush)) then {
		MB_CurBrush deleteAt _index;
		["First"] call mb_fnc_brusherUpdateTemplateList;
	};
};
