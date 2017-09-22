/*
    Function:       MB_fnc_brusherUpdateObjectList
    Author:         NeoArmageddon
    Description:    Updates the list of saved brush files
*/

private _brusherCtrl = uiNamespace getVariable ["MB_Brush.contentCtrl", controlNull];
#define __CTRLCONTENT(var1) (_brusherCtrl controlsGroupCtrl var1)

private _path = tvCurSel __CTRLCONTENT(171202);
private _data = [];
private _index = 0;
if(count(_path)>0) then {
	_index = _path select 0;
	if(_index < count(MB_CurBrush)) then {
		_data = MB_CurBrush select _index;
	};
};

private _tvList = __CTRLCONTENT(171219);
tvClear _tvList;
{
	_path = _tvList tvAdd [[],_x];
} foreach (_data select 0);

if(count(_data select 0)>0) then {
	_tvList tvSetCurSel [0];
};
