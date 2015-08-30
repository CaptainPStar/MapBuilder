private["_display","_ctrl","_curFile","_brushFiles","_brushFolder","_listbox"];
disableSerialization;

_display = uinamespace getvariable 'mb_main_dialog';
_listbox = _display displayCtrl 171201;
_brushFolder = ("MB_FileIO" callExtension "listfiles|brushes");
_brushFiles = [_brushFolder,"|"] call BIS_fnc_splitString;
_brushFiles = _brushFiles - ["."];
_brushFiles = _brushFiles - [".."];


_curFile = ctrlText (_display displayCtrl 171220);


tvClear _listbox;
{
	private["_name","_index"];
	_name = [_x,"."] call BIS_fnc_splitString;
	_index =_listBox tvAdd [[],(_name select 0)];
	_listbox tvSetData [[_index], (_name select 0)];
	if((_name select 0) == _curFile) then {
		_listbox tvSetCurSel [_index];
	};
} foreach _brushFiles;
_listbox tvSort[[], false];
(_display displayCtrl 171220) ctrlSetText _curFile;