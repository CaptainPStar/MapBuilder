private["_number","_digits","_acc"];
	_number = [_this,0,0] call bis_fnc_param;
	_digits = [_this,1,4] call bis_fnc_param;
	//Accuracy is 5 digits
	_acc = 10^_digits;
	_number = round((_number)*_acc)/_acc;
	_number;