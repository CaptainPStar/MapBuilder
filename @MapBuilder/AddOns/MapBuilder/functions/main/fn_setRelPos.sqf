private["_parent","_child","_offset","_dir","_localPos","_worldPos","_height"];
	_parent    = [_this,0,objNull,[objNull]] call BIS_fnc_param;
	_child     = [_this,1,objNull,[objNull]] call BIS_fnc_param;
	_offset    = [_this,2,[0,0,0],[[]]] call BIS_fnc_param;
	_height = [_this,3,0,[1]] call BIS_fnc_param;
	//_dir 	   = [_parent,_child] call BIS_fnc_relativeDirTo;


	//get the anchor position
	_localPos = [_parent worldToModel (getPosATL _parent),_offset] call BIS_fnc_vectorAdd; //vectorADD
	_worldPos = _parent modelToWorld _localPos;
	//_worldPos = ATLtoASL _worldPos;

	_child setPosATL [_worldPos select 0,_worldPos select 1, _height];
	//_child setDir ((getDir _parent) + _dir);