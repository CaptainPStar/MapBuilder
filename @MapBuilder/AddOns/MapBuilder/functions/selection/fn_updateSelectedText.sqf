disableSerialization;
private["_display","_ctrl"];
_display = uinamespace getvariable 'mb_main_dialog';
_ctrl = _display displayCtrl 171012;
_count = count(MB_Selected);
if(_count == 1) then {
	_ctrl ctrlSetText format["%1 Object selected",_count];
} else {
	_ctrl ctrlSetText format["%1 Objects selected",_count];
};