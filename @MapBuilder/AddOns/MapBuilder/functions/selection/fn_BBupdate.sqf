private["_box","_obj","_center","_base","_show"];
_obj = param[0, objNull];
_show = param[1,true];


if(isNull _obj) exitWith {};

_box = _obj getVariable["MB_BoundingBox",objNull];
_base = _obj getVariable["MB_BaseHelper",objNull];


if(_obj getVariable["MB_isSelected",false]) then {
	_show = true;
} else {
	_show = false;
};


//BB creation redundant (also in obj creation)
if(isNull _box) then {
	_box = "mb_bounding_box" createvehiclelocal getpos _obj;
	_box setvariable["mb_BBattachedObject",_obj,false];
	_obj setVariable["MB_BoundingBox",_box,false];
	_box hideObject true;
	//_box enablesimulation false;
};
if(isNull _base) then {
	_base = "Sign_Sphere100cm_F" createvehiclelocal getpos _obj;
	_base setObjectTexture [0, "#(rgb,8,8,3)color(0,1,0,1)"];
	_base setvariable["mb_BBattachedObject",_obj,false];
	_obj setVariable["MB_BaseHelper",_base,false];
	_base hideObject true;
	//_box enablesimulation false;
};



private["_scale","_bbEdges","_hor","_vul"];
_box hideObject !(_show); 


_scale = _obj getvariable ["MB_ObjVar_Scale",1];
_bbEdges= boundingBoxReal _obj;

_vul = _bbEdges select 0;
_hor = _bbEdges select 1;

//_height = (_hor select 2)-(_vul select 2);
//_vulH = _vul select 2;
_vul = _vul vectorMultiply  _scale;
_hor = _hor vectorMultiply  _scale;

//_center = _vul vectorAdd ((_hor vectorDiff _vul) vectorMultiply 0.5);
_center = _obj modelToWorld [0,0,0];
//_height = _height * _scale;
//_vul set[2,_vulH];
//_hor set[2,_vulH+_height];
_width = (_hor select 1)-(_vul select 1);
_length = (_hor select 0)-(_vul select 0);
_height = (_hor select 2)-(_vul select 2);

_box setpos _center;
_box setVectorDirAndUp [vectorDir _obj, vectorUp _obj];

if(((getPosATL _obj) select 2)>0.5 && _show) then {
	_base setpos [_center select 0, _center select 1, 0.2];
	_base hideObject false;
} else {
	_base hideObject true;
};
//_box attachTo [_obj];

_color = [0,1,0,0.5];
if(_scale != 1) then {
	_color = [1,0,0,0.5];
};

[_box,_width,_length,_height,_color] call mb_fnc_BBsetSize;