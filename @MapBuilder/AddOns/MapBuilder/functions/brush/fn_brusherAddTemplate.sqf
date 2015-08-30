private["_data","_path"];
disableSerialization;
_ctrl = _display displayCtrl 171202;
_path = [];
_data = [];
_index = 0;



MB_CurBrush pushback [[MB_CurClass],[1],1.0,1,[0,0,0],0,0,0,1,[0,0,0],0,0,0,0];
["New"] call mb_fnc_brusherUpdateTemplateList;
