private["_matrix","_rmatrix","_omatrix","_oi"];
	_matrix = [_this,0] call bis_fnc_param;
	_rmatrix = [_this,1] call bis_fnc_param;
	_omatrix = [] call MB_fnc_CreateMatrix;
	
	for "_i" from 0 to 3 do {
		for "_j" from 0 to 0 do {
			(_omatrix select _i) set [_j,0];
			for "_k" from 0 to 3 do {
				_oi = (_omatrix select _i);
				_oi set [_j,(_oi select _j) + ((_rmatrix select _i) select _k)*((_matrix select _k) select _j)];
				//diag_log format["Index %1%2%3 is %4",_i,_j,_k,(_oi select _j) + ((_rmatrix select _i) select _k)*((_matrix select _k) select _j)];
			};
		};
	};
	_omatrix;