private["_data"];
_display = uinamespace getvariable 'mb_main_dialog';
_path = (tvCurSel (_display displayCtrl 171202));
_data = [];
_index = 0;
if(count(_path)>0) then {
	_index = _path select 0;
	if(_index < count(MB_CurBrush)) then {
		_data = MB_CurBrush select _index;
	};
};

(_data select 0) pushBack MB_CurClass;
(_data select 1) pushBack 1;

[] call mb_fnc_brusherUpdateObjectList;
["Cur"] call mb_fnc_brusherUpdateTemplateList;

