private["_vdir","_vup","_bank","_pitch","_return"];
	
	//D=(XD,YD,ZD)
	_vdir = _this select 0;
	//U=(XU,YU,ZU) 
    _vup = _this select 1;
	//H=(XD,YD,0) 
	//angle_H=atan2(YD,XD)
	_angle_H = (_vdir select 0) atan2 (_vdir select 1);
	//angle_P=asin(ZD)
	_angle_P=asin(_vdir select 2);
	//W0 = ( -YD, XD, 0 )
	_W0 = [-(_vdir select 1), (_vdir select 0), 0];
	//U0 = W0 × D
	_U0 =  _W0 vectorCrossProduct _vdir;
	//angle_B = atan2( Dot(W0,U) / Dot(U0,U))
	_angle_B = ((_W0 vectorDotProduct _vup) atan2 (_U0 vectorDotProduct _vup));
	 
	
	
	//_bank = atan ((_vup select 0) / (_vup select 2));
	//_pitch = -atan ((_vup select 1) / (_vup select 2));
	
	_return = [_angle_H,_angle_P,_angle_B];
	_return;