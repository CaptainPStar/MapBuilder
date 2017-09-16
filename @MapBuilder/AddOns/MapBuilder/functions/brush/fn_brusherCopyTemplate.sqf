/*
    Function:       MB_fnc_brusherCopyTemplate
    Author:         NeoArmageddon
    Description:    Copies a brush
*/

private _brusherCtrl = uiNamespace getVariable ["MB_BrushContent", controlNull];
#define __CTRLCONTENT(var1) (_brusherCtrl controlsGroupCtrl var1)

private _templateCtrl = __CTRLCONTENT(171202);
private _path = tvCurSel _templateCtrl;

private _data = [];
if (count _path > 0) then {
	private _index = _path select 0;
	if (_index < count(MB_CurBrush)) then {
		_newAr = +(MB_CurBrush select _index);
		MB_CurBrush pushback _newAr;
		["New"] call mb_fnc_brusherUpdateTemplateList;
	};
};
