private["_display","_ctrl"];
disableSerialization;
_display = uinamespace getvariable 'mb_main_dialog';

_listbox = _display displayCtrl 170501;
_folder = ["presets","mbpre"] call MB_FNC_getFolderContent;
lbClear _listbox;
{
	_name = _x splitString ".";
	_index =_listBox lbAdd (_name select 0);
	_listbox lbSetData [_index, (_name select 0)];
} foreach _folder;
lbsort _listbox;
