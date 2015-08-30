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

_objIndex = 0;
_objIndex = (tvCurSel (_display displayCtrl 171219)) select 0;

(_data select 0) deleteAt _objIndex;
(_data select 1) deleteAt _objIndex;

[] call mb_fnc_brusherUpdateObjectList;
["Cur"] call mb_fnc_brusherUpdateTemplateList;

if(count((_data select 0)) == 0) then {
	[] call MB_fnc_brusherRemoveTemplate;
};