
	_obj = [_this,0] call bis_fnc_param;
	_scale = [_this,1,1] call bis_fnc_param;
	_color = [_this,2,[0,0,1,1]] call bis_fnc_param;
	_box = boundingBoxReal _obj;
	//_box = [(_obj modelToWorld _box select 0),(_obj modelToWorld _box select 1)];
	_vul = _box select 0;
	_hor = _box select 1;
	
	_height = (_hor select 2)-(_vul select 2);
	_vulH = _vul select 2;
	_vul = _vul vectorMultiply  _scale;
	_hor = _hor vectorMultiply  _scale;
	
	_height = _height * _scale;
	_vul set[2,_vulH];
	_hor set[2,_vulH+_height];
	_width = (_hor select 1)-(_vul select 1);
	_length = (_hor select 0)-(_vul select 0);

	
	_vur = [(_vul select 0),(_vul select 1)+_width,(_vul select 2)];
	_vol = [(_vul select 0),(_vul select 1),(_vul select 2)+_height];
	_vor = [(_vul select 0),(_vul select 1)+_width,(_vul select 2)+_height];
	
	_hur = [(_hor select 0),(_hor select 1),(_hor select 2)-_height];
	_hol = [(_hor select 0),(_hor select 1)-_width,(_hor select 2)];
	_hul = [(_hor select 0),(_hor select 1)-_width,(_hor select 2)-_height];
	
	_center = [0,0,((_vul select 2))];
	//Cross
	//drawLine3D [([_visPos,_vul] call BIS_fnc_vectorAdd),([_visPos,_hor] call BIS_fnc_vectorAdd),_color];
		
	//###Front###
	//  ___
	// |   |
	// |   |
	// |_#_|
	drawLine3D [(_obj modelToWorld _vul),(_obj modelToWorld _vur),_color];
	//  ___
	// |   |
	// #   |
	// |___|	
	drawLine3D [(_obj modelToWorld _vul),(_obj modelToWorld _vol),_color];
	//  ___
	// |   |
	// | # |
	// |___|	
	drawLine3D [(_obj modelToWorld _vul),(_obj modelToWorld _vor),_color];
	//  _#_
	// |   |
	// |   |
	// |___|	
	drawLine3D [(_obj modelToWorld _vol),(_obj modelToWorld _vor),_color];
	//  ___
	// |   |
	// |   #
	// |___|	
	drawLine3D [(_obj modelToWorld _vor),(_obj modelToWorld _vur),_color];
	
	//###Back###
	//  ___
	// |   |
	// |   |
	// |_#_|
	drawLine3D [(_obj modelToWorld _hul),(_obj modelToWorld _hur),_color];
	//  ___
	// |   |
	// #   |
	// |___|	
	drawLine3D [(_obj modelToWorld _hul),(_obj modelToWorld _hol),_color];
	//  ___
	// |   |
	// | # |
	// |___|	
	drawLine3D [(_obj modelToWorld _hul),(_obj modelToWorld _hor),_color];
	//  _#_
	// |   |
	// |   |
	// |___|	
	drawLine3D [(_obj modelToWorld _hol),(_obj modelToWorld _hor),_color];
	//  ___
	// |   |
	// |   #
	// |___|	
	drawLine3D [(_obj modelToWorld _hor),(_obj modelToWorld _hur),_color];
	
	//###Side###

	drawLine3D [(_obj modelToWorld _hul),(_obj modelToWorld _vul),_color];
	
	drawLine3D [(_obj modelToWorld _hol),(_obj modelToWorld _vol),_color];

	drawLine3D [(_obj modelToWorld _hor),(_obj modelToWorld _vor),_color];
	
	drawLine3D [(_obj modelToWorld _hur),(_obj modelToWorld _vur),_color];
	
	drawLine3D [(_obj modelToWorld _hur),(_obj modelToWorld _vul),_color];
	drawLine3D [(_obj modelToWorld _hor),(_obj modelToWorld _vol),_color];
	
	drawLine3D [(_obj modelToWorld _hul),(_obj modelToWorld _vol),_color];
	drawLine3D [(_obj modelToWorld _hur),(_obj modelToWorld _vor),_color];
	
	//Groundlink
	drawLine3D [(_obj modelToWorld _center),[(_obj modelToWorld _center) select 0,(_obj modelToWorld _center) select 1,0],_color];
