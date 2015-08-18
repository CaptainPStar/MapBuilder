private["_parent","_child","_offset","_dir","_localPos","_worldPos","_return"];
	_parent    = [_this,0,objNull,[objNull]] call BIS_fnc_param;
	_child     = [_this,1,objNull,[objNull]] call BIS_fnc_param;
	_offset    = [_this,2,[0,0,0],[[]]] call BIS_fnc_param;


	//get the anchor position
	_localPos = (_parent worldToModel (getPosATL _parent)) vectorAdd _offset; //vectorADD
	_worldPos = _parent modelToWorld _localPos;

	
	_worldPos;
	//_child setDir ((getDir _parent) + _dir);