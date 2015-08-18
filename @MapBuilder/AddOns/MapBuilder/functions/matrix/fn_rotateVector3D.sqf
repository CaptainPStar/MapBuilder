private["_vec","_rotVec","_deg","_vecMatrix","_rotMatrix","_resultMatrix","_result"];
	_vec =  [_this,0] call bis_fnc_param;
	_rotVec =  [_this,1] call bis_fnc_param;
	_deg =  [_this,2] call bis_fnc_param;
	_vecMatrix = [[_vec select 0],[_vec select 1],[_vec select 2],[1]];
	_rotMatrix = [_deg,_rotVec] call MB_fnc_CreateRotationMatrix;
	_resultMatrix = [_vecMatrix,_rotMatrix] call MB_fnc_MultiplyMatrices;
	_result = [(_resultMatrix select 0) select 0,(_resultMatrix select 1) select 0, (_resultMatrix select 2) select 0];
	_result;