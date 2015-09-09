disableSerialization;
private["_display","_ctrl"];
_display = uinamespace getvariable 'mb_main_dialog';
_ctrl = _display displayCtrl 171011;
_ctrl ctrlSetText format["Position: %1/%2",round(MB_MousePosition select 0), round(MB_MousePosition select 1)];

_ctrl = _display displayCtrl 171012;
_count = count(MB_Selected);
if(_count == 1) then {
	_ctrl ctrlSetText format["%1 Object selected",_count];
} else {
	_ctrl ctrlSetText format["%1 Objects selected",_count];
};

_ctrl = _display displayCtrl 171013;
_count = count(MB_Objects);
if(_count == 1) then {
	_ctrl ctrlSetText format["%1 Object",_count];
} else {
	_ctrl ctrlSetText format["%1 Objects",_count];
};