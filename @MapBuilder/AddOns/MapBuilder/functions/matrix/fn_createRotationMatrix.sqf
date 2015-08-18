	_angle = [_this,0] call bis_fnc_param;
	_vec = [_this,1,[0,0,1],[[3]]] call bis_fnc_param;
	
	_u = _vec select 0;
	_v = _vec select 1;
	_w = _vec select 2;
	_L = (_u^2 + _v^2 + _w^2);
    //_angle = _angle * pi / 180.0; //converting to radian value
 
	_matrix  = [] call MB_fnc_CreateMatrix;
	//First matrix row
	_matrix0 = _matrix select 0;
	_matrix1 = _matrix select 1;
	_matrix2 = _matrix select 2;
	_matrix3 = _matrix select 3;
	
    _matrix0 set[0, (_u^2 + (_v^2 + _w^2) * cos(_angle)) / _L];
    _matrix0 set[1, (_u * _v * (1 - cos(_angle)) - _w * sqrt(_L) * sin(_angle)) / _L];
    _matrix0 set[2, (_u * _w * (1 - cos(_angle)) + _v * sqrt(_L) * sin(_angle)) / _L];
    _matrix0 set[3, 0.0]; 
 
    _matrix1 set[0, (_u * _v * (1 - cos(_angle)) + _w * sqrt(_L) * sin(_angle)) / _L];
    _matrix1 set[1, (_v^2 + (_u^2 + _w^2) * cos(_angle)) / _L];
    _matrix1 set[2, (_v * _w * (1 - cos(_angle)) - _u * sqrt(_L) * sin(_angle)) / _L];
    _matrix1 set[3, 0.0]; 
 
    _matrix2 set[0, (_u * _w * (1 - cos(_angle)) - _v * sqrt(_L) * sin(_angle)) / _L];
    _matrix2 set[1, (_v * _w * (1 - cos(_angle)) + _u * sqrt(_L) * sin(_angle)) / _L];
    _matrix2 set[2, (_w^2 + (_u^2 + _v^2) * cos(_angle)) / _L];
    _matrix2 set[3, 0.0]; 
 
	_matrix3 set[0, 0.0];
	_matrix3 set[1, 0.0];
	_matrix3 set[2, 0.0];
	_matrix3 set[3, 1.0];
	_matrix;