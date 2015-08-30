private["_data"];
_ctrl = _this select 0;
_path = (tvCurSel _ctrl);
_data = [];
_index = 0;
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

	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	
	[] call mb_fnc_brusherUpdateObjectList;
	
	(_display displayCtrl 171203) ctrlSetText format["%1",(_data select 2)];
	
	(_display displayCtrl 171204) ctrlSetText format["%1",(_data select 3)];
	
	(_display displayCtrl 171205) ctrlSetText format["%1",(_data select 4) select 0];
	
	(_display displayCtrl 171206) ctrlSetText format["%1",(_data select 4) select 1];
	
	(_display displayCtrl 171207) ctrlSetText format["%1",(_data select 4) select 2];
	
	(_display displayCtrl 171208) ctrlSetText format["%1",(_data select 5)];
	
	(_display displayCtrl 171209) ctrlSetText format["%1",(_data select 6)];
	
	(_display displayCtrl 171210) ctrlSetText format["%1",(_data select 7)];
	
	(_display displayCtrl 171211) ctrlSetText format["%1",(_data select 8)];
	
	(_display displayCtrl 171212) ctrlSetText format["%1",(_data select 9) select 0];
	
	(_display displayCtrl 171213) ctrlSetText format["%1",(_data select 9) select 1];
	
	(_display displayCtrl 171214) ctrlSetText format["%1",(_data select 9) select 2];
	
	(_display displayCtrl 171215) ctrlSetText format["%1",(_data select 10)];
	
	(_display displayCtrl 171216) ctrlSetText format["%1",(_data select 11)];
	
	(_display displayCtrl 171217) ctrlSetText format["%1",(_data select 12)];
	
	(_display displayCtrl 171218) ctrlSetText format["%1",(_data select 13)];
};