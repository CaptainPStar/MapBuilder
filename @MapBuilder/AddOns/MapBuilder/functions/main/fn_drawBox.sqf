
	_vul = [_this,0,[],[[]],[3]] call bis_fnc_param;
	_hor = [_this,1,[],[[]],[3]] call bis_fnc_param;
	_height = (_hor select 2)-(_vul select 2);
	_width = (_hor select 1)-(_vul select 1);
	_length = (_hor select 0)-(_vul select 0);

	
	_vur = [(_vul select 0),(_vul select 1)+_width,(_vul select 2)];
	_vol = [(_vul select 0),(_vul select 1),(_vul select 2)+_height];
	_vor = [(_vul select 0),(_vul select 1)+_width,(_vul select 2)+_height];
	
	_hur = [(_hor select 0),(_hor select 1),(_hor select 2)-_height];
	_hol = [(_hor select 0),(_hor select 1)-_width,(_hor select 2)];
	_hul = [(_hor select 0),(_hor select 1)-_width,(_hor select 2)-_height];
	
	_color = [1,1,0,1];
	//Cross
	//drawLine3D [([_visPos,_vul] call BIS_fnc_vectorAdd),([_visPos,_hor] call BIS_fnc_vectorAdd),_color];
		
	//###Front###
	//  ___
	// |   |
	// |   |
	// |_#_|
	drawLine3D [(_vul),(_vur),_color];
	//  ___
	// |   |
	// #   |
	// |___|	
	drawLine3D [(_vul),(_vol),_color];
	//  ___
	// |   |
	// | # |
	// |___|	
	drawLine3D [(_vul),(_vor),_color];
	//  _#_
	// |   |
	// |   |
	// |___|	
	drawLine3D [(_vol),(_vor),_color];
	//  ___
	// |   |
	// |   #
	// |___|	
	drawLine3D [(_vor),(_vur),_color];
	
	//###Back###
	//  ___
	// |   |
	// |   |
	// |_#_|
	drawLine3D [(_hul),(_hur),_color];
	//  ___
	// |   |
	// #   |
	// |___|	
	drawLine3D [(_hul),(_hol),_color];
	//  ___
	// |   |
	// | # |
	// |___|	
	drawLine3D [(_hul),(_hor),_color];
	//  _#_
	// |   |
	// |   |
	// |___|	
	drawLine3D [(_hol),(_hor),_color];
	//  ___
	// |   |
	// |   #
	// |___|	
	drawLine3D [(_hor),(_hur),_color];
	
	//###Side###

	drawLine3D [(_hul),(_vul),_color];
	
	drawLine3D [(_hol),(_vol),_color];

	drawLine3D [(_hor),(_vor),_color];
	
	drawLine3D [(_hur),(_vur),_color];
	
	drawLine3D [(_hur),(_vul),_color];
	drawLine3D [(_hor),(_vol),_color];
	
	drawLine3D [(_hul),(_vol),_color];
	drawLine3D [(_hur),(_vor),_color];
	
	//Groundlink
	//drawLine3D [(_center),[(_center) select 0,(_center) select 1,0],_color];
