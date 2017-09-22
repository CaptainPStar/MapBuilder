/*
    Function:       MB_fnc_brusherRemoveObject
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
		_data = MB_CurBrush select _index;
	};
};

private _objIndex = (tvCurSel __CTRLCONTENT(171219)) select 0;
(_data select 0) deleteAt _objIndex;
(_data select 1) deleteAt _objIndex;

[] call mb_fnc_brusherUpdateObjectList;
["Cur"] call mb_fnc_brusherUpdateTemplateList;

if(count((_data select 0)) == 0) then {
	[] call MB_fnc_brusherRemoveTemplate;
};
