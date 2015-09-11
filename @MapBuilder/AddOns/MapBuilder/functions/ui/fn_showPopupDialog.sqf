	private["_msg","_type","_return"];
	_msg = param[0,"No Message"];
	//_callback = param[1,"MB_PopUp_Confirmed"];
	_type = param[1,0];

	//call compile format["%1 = 0;",_callback];

	//--- Assign button actions
	[171000,true] call MB_fnc_openWindow;
	
	uinamespace setvariable ["MB_popupDialog_status",nil];

	disableSerialization;
	private["_display","_ctrlText","_ctrlButtonOK","_ctrlButtonCancel","_ehKeyDown"];
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrlText = (_display displayCtrl 171001);
	_ctrlButtonOK = (_display displayCtrl 171002);
	_ctrlButtonCancel = (_display displayCtrl 171003);
	
	_ctrlText ctrlSetStructuredText parseText _msg; 
	_ctrlButtonOK ctrlseteventhandler ["buttonclick","uinamespace setvariable ['MB_popupDialog_status',true]; true"];
	_ctrlButtonCancel ctrlseteventhandler ["buttonclick","uinamespace setvariable ['MB_popupDialog_status',false]; true"];
	_display displayaddeventhandler ["unload","uinamespace setvariable ['MB_popupDialog_status',false];"];
	_ehKeyDown = _display displayaddeventhandler ["keydown","if ((_this select 1) == 1) then {uinamespace setvariable ['MB_popupDialog_status',false]; true} else {false}"];
	

	
	switch(_type) do {
		case 0: {
			_ctrlButtonOK ctrlShow true;
			_ctrlButtonCancel ctrlShow true;
		};
		case 1: {
			_ctrlButtonOK ctrlShow true;
			_ctrlButtonCancel ctrlShow false;
		};
	};
	
	
	
	
	waituntil{sleep 0.1;!isNil {uinamespace getvariable 'MB_popupDialog_status'}};
	
	[171000,true] call MB_fnc_closeWindow;
	
	_display displayremoveeventhandler ["keydown",_ehKeyDown];
	
	_return = uinamespace getvariable 'MB_popupDialog_status';
	
	_return;
