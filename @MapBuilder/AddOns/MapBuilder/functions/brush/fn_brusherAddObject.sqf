/*
    Function:       MB_fnc_brusherAddObject
    Author:         NeoArmageddon
    Description:    Adds selected object to the brush
*/

private _brusherCtrl = uiNamespace getVariable ["MB_BrushContent", controlNull];
#define __CTRLCONTENT(var1) (_brusherCtrl controlsGroupCtrl var1)

private _listCtrl = __CTRLCONTENT(171202);
private _path = tvCurSel _listCtrl;
private _data = [];
private _index = 0;

if(count(_path)>0) then {
	_index = _path select 0;
	if(_index < count(MB_CurBrush)) then {
		_data = MB_CurBrush select _index;
	};
};

if (_data isEqualTo []) exitWith { };
(_data select 0) pushBack MB_CurClass;
(_data select 1) pushBack 1;

[] call mb_fnc_brusherUpdateObjectList;
["Cur"] call mb_fnc_brusherUpdateTemplateList;
