/*
    Function:       MB_fnc_brusherUpdateTemplateList
    Author:         NeoArmageddon
    Description:    Updates list for brusher
*/

disableSerialization;

private _brusherCtrl = uiNamespace getVariable ["MB_Brush.contentCtrl", controlNull];
#define __CTRLCONTENT(var1) (_brusherCtrl controlsGroupCtrl var1)

params [["_mode", "New"]];

private _listCtrl = __CTRLCONTENT(171202);
private _path = [0];
__CTRLCONTENT(171221) ctrlSetText format["%1",MB_BrushWidth];
__CTRLCONTENT(171222) ctrlSetChecked MB_BrushCamFollow;
__CTRLCONTENT(171223) ctrlSetChecked MB_BrusherLockDir;

if (_mode == "Cur") then {
	_path = tvCurSel _listCtrl;
};

tvClear _listCtrl;
{
	private _types = (_x select 0);
	private _name = "";
	{
		_name = _name + format["%1",_x];
		if(_forEachIndex<(count(_types)-1)) then {
		_name = _name + ", ";
		};
	} foreach _types;
	//_model = [(configFile >> "CfgVehicles" >> (_x select 0) ),"model",""] call BIS_fnc_returnConfigEntry;
	_npath = _listCtrl tvAdd [[], _name];
	if(_mode == "New") then {
		_path = [_npath];
	};
} foreach MB_CurBrush;

if(count(MB_CurBrush)>0) then {
	_listCtrl tvSetCurSel _path;
	[_listCtrl] call MB_fnc_brusherUpdateObjectPanel;
};
