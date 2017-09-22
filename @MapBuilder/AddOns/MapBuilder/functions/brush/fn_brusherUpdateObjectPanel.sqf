/*
    Function:       MB_fnc_brusherUpdateObjectPanel
    Author:         NeoArmageddon
    Description:    Does something
*/

private _brusherCtrl = uiNamespace getVariable ["MB_Brush.contentCtrl", controlNull];
#define __CTRLCONTENT(var1) (_brusherCtrl controlsGroupCtrl var1)

params [["_ctrl", controlNull]];

private _path = (tvCurSel _ctrl);
private _data = [];
private _index = 0;
if(count(_path)>0) then {
	_index = _path select 0;
	if(_index < count(MB_CurBrush)) then {
		_data = MB_CurBrush select _index;
	};
};
//MB_CurBrush pushBack [types,weights,chance,count,relpos,dir,pitch,bank,scale,randompos,randomdir,randompitch,randombank,randomscale];

if(count(_data)>0) then {


	// 171203 Probability
	// 171204 count
	// 171205 Offset X
	// 171206 Offset Y
	// 171207 Offset Z
	// 171208 Rotation
	// 171209 Pitch
	// 171210 Bank
	// 171211 Scale
	// 171212 Random Offset X
	// 171213 Random Offset Y
	// 171214 Random Offset Z
	// 171215 Random Dir
	// 171216 Random Pitch
	// 171217 Random Bank
	// 171218 Random Scale

	[] call mb_fnc_brusherUpdateObjectList;

	__CTRLCONTENT(171203) ctrlSetText format["%1",(_data select 2)];

	__CTRLCONTENT(171204) ctrlSetText format["%1",(_data select 3)];

	__CTRLCONTENT(171205) ctrlSetText format["%1",(_data select 4) select 0];

	__CTRLCONTENT(171206) ctrlSetText format["%1",(_data select 4) select 1];

	__CTRLCONTENT(171207) ctrlSetText format["%1",(_data select 4) select 2];

	__CTRLCONTENT(171208) ctrlSetText format["%1",(_data select 5)];

	__CTRLCONTENT(171209) ctrlSetText format["%1",(_data select 6)];

	__CTRLCONTENT(171210) ctrlSetText format["%1",(_data select 7)];

	__CTRLCONTENT(171211) ctrlSetText format["%1",(_data select 8)];

	__CTRLCONTENT(171212) ctrlSetText format["%1",(_data select 9) select 0];

	__CTRLCONTENT(171213) ctrlSetText format["%1",(_data select 9) select 1];

	__CTRLCONTENT(171214) ctrlSetText format["%1",(_data select 9) select 2];

	__CTRLCONTENT(171215) ctrlSetText format["%1",(_data select 10)];

	__CTRLCONTENT(171216) ctrlSetText format["%1",(_data select 11)];

	__CTRLCONTENT(171217) ctrlSetText format["%1",(_data select 12)];

	__CTRLCONTENT(171218) ctrlSetText format["%1",(_data select 13)];
};
