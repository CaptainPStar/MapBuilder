private["_display","_ctrl","_index","_data","_path"];
disableSerialization;
_display = uinamespace getvariable 'mb_main_dialog';
_ctrl = _display displayCtrl 171202;
_path = (tvCurSel 171202);
_data = [];
_index = 0;

if(count(_path)>0) then {
	_index = _path select 0;
	if(_index < count(MB_CurBrush)) then {
		MB_CurBrush deleteAt _index;
		["First"] call mb_fnc_brusherUpdateTemplateList;
	};
};