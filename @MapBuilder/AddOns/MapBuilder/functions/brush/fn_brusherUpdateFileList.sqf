/*
    Function:       MB_fnc_brusherUpdateFileList
    Author:         NeoArmageddon
    Description:    Updates the list of saved brush files
*/

disableSerialization;

private _brusherCtrl = uiNamespace getVariable ["MB_BrushContent", controlNull];
#define __CTRLCONTENT(var1) (_brusherCtrl controlsGroupCtrl var1)

private _listbox = __CTRLCONTENT(171201);
private _brushFolder = ("MB_FileIO" callExtension "listfiles|brushes");
private _brushFiles = [_brushFolder,"|"] call BIS_fnc_splitString;
_brushFiles = _brushFiles - ["."];
_brushFiles = _brushFiles - [".."];
private _curFile = ctrlText __CTRLCONTENT(171220);

tvClear _listbox;
{
	private["_name","_index"];
	private _name = [_x,"."] call BIS_fnc_splitString;
	private _index =_listBox tvAdd [[],(_name select 0)];
	_listbox tvSetData [[_index], (_name select 0)];
	if((_name select 0) == _curFile) then {
		_listbox tvSetCurSel [_index];
	};
} foreach _brushFiles;
_listbox tvSort[[], false];
__CTRLCONTENT(171220) ctrlSetText _curFile;
