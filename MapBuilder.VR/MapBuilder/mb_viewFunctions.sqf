#include "dik.hpp"

MB_fnc_MouseInView = {
	disableSerialization;
	private["_in"];
	_in = [_this,0] call bis_fnc_param;
	if(_in) then {
		systemChat "Mouse in View";
		_display = uinamespace getvariable 'mb_main_dialog';
		_ctrl = _display displayCtrl 170001;
		ctrlSetFocus _ctrl;
	} else {
		systemChat "Mouse left View";
		_this call MB_fnc_resetKeys;
	};
};


MB_ViewportLastRMBDown = 0;
MB_ViewportLastLMBDown = 0;
MB_ViewportLastMMBDown = 0;
MB_ViewportLastRMBUp = 0;
MB_ViewportLastLMBUp = 0;
MB_ViewportLastMMBUp = 0;
MB_ClickTime = 0.2;
MB_DragStartTime = 0.2;
MB_DblClickTime = 0.3;
MB_ViewportLMBDrag = false;
MB_ViewportRMBDrag = false;
MB_ViewportMMBDrag = false;
MB_fnc_MouseButtonDownInView = {
	systemchat format["%1",(_this select 1)];
	switch ((_this select 1)) do {
		case MB_L: { 
			MB_ViewportLastLMBDown = diag_tickTime;
			_this spawn {
				private["_downtime"];
				_downtime = MB_ViewportLastLMBDown;
				sleep MB_DragStartTime;
				if(MB_ViewportLastLMBUp<_downtime) then {
					MB_ViewportLMBDrag = true;
					["BeginLeftMBDrag",_this] spawn MB_fnc_dispatchCallbacks;
				};
			};
		};
		case MB_R: { 
			MB_ViewportLastRMBDown = diag_tickTime;
			_this spawn {
				private["_downtime"];
				_downtime = MB_ViewportLastRMBDown;
				sleep MB_DragStartTime;
				if(MB_ViewportLastRMBUp<_downtime) then {
					MB_ViewportRMBDrag = true;
					["BeginRightMBDrag",_this] spawn MB_fnc_dispatchCallbacks;
				};
			};
		};
		case MB_M: { 
			systemchat "middle";
			MB_ViewportLastMMBDown = diag_tickTime;
			_this spawn {
				private["_downtime"];
				_downtime = MB_ViewportLastMMBDown;
				sleep MB_DragStartTime;
				if(MB_ViewportLastMMBUp<_downtime) then {
					MB_ViewportMMBDrag = true;
					["BeginMiddleMBDrag",_this] spawn MB_fnc_dispatchCallbacks;
				};
			};
		};
	};
	_handled = true;
	_handled;
};

MB_fnc_MouseButtonUpInView = {
	switch ((_this select 1)) do {
		case MB_L: { 
		
			MB_ViewportLastLMBUp = diag_tickTime;
			if((MB_ViewportLastLMBUp-MB_ViewportLastLMBDown)<=MB_ClickTime) then {
				//_this spawn MB_fnc_MouseButtonClick;
			};	
			if(MB_ViewportLMBDrag) then {
				MB_ViewportLMBDrag = false;
				["EndLeftMBDrag",_this] spawn MB_fnc_dispatchCallbacks;
			} else {
				_this call MB_fnc_MouseButtonClick;
			};			
		};
		case MB_R: { 
			MB_ViewportLastRMBUp = diag_tickTime;
			if((MB_ViewportLastRMBUp-MB_ViewportLastRMBDown)<=MB_ClickTime) then {
				//_this spawn MB_fnc_MouseButtonClick;
			};	
			if(MB_ViewportRMBDrag) then {
				MB_ViewportRMBDrag = false;
				["EndRightMBDrag",_this] spawn MB_fnc_dispatchCallbacks;
			} else {
				_this call MB_fnc_MouseButtonClick;
			};			
		};
		case MB_M: { 
			MB_ViewportLastMMBUp = diag_tickTime;
			if((MB_ViewportLastMMBUp-MB_ViewportLastMMBDown)<=MB_ClickTime) then {
				//_this spawn MB_fnc_MouseButtonClick;
			};	
			if(MB_ViewportMMBDrag) then {
				MB_ViewportMMBDrag = false;
				["EndMiddleMBDrag",_this] spawn MB_fnc_dispatchCallbacks;
			} else {
				_this call MB_fnc_MouseButtonClick;
			};			
		};
	};
	_handled = true;
	_handled;
};
MB_ViewportLastLMBClick = 0;
MB_fnc_MouseButtonClick = {
	switch ((_this select 1)) do {
		case MB_L: { 			
			if(diag_tickTime-MB_ViewportLastLMBClick<MB_DblClickTime) then {
				_this call MB_fnc_MouseButtonDblClick;
			};
			["LeftMouseClick",_this] spawn MB_fnc_dispatchCallbacks;
			MB_ViewportLastLMBClick = diag_tickTime;
		};
		case MB_R: { 
			if(diag_tickTime-MB_ViewportLastRMBClick<MB_DblClickTime) then {
				_this call MB_fnc_MouseButtonDblClick;
			};
			["RightMouseClick",_this] spawn MB_fnc_dispatchCallbacks;
			MB_ViewportLastRMBClick = diag_tickTime;
		};
		case MB_M: { 
			if(diag_tickTime-MB_ViewportLastMMBClick<MB_DblClickTime) then {
				_this call MB_fnc_MouseButtonDblClick;
			};
			["MiddleMouseClick",_this] spawn MB_fnc_dispatchCallbacks;
			MB_ViewportLastMMBClick = diag_tickTime;
		};
	};
};
//["LeftMouseClick",{systemChat format["Click: %1",_this];}] call MB_fnc_addCallback;
//["LeftMouseClick",{systemChat "A click!";},{!(_this select 4) && !(_this select 5) && !(_this select 6)}] call MB_fnc_addCallback;
//["LeftMouseClick",{systemChat "A click with shift!";},{(_this select 4) && !(_this select 5) && !(_this select 6)}] call MB_fnc_addCallback;
//["LeftMouseClick",{systemChat "A click with ctrl!";},{!(_this select 4) && (_this select 5) && !(_this select 6)}] call MB_fnc_addCallback;
//["LeftMouseClick",{systemChat "A click with alt!";},{!(_this select 4) && !(_this select 5) && (_this select 6)}] call MB_fnc_addCallback;
MB_fnc_MouseButtonDblClick = {
	switch ((_this select 1)) do {
		case MB_L: { 			
				["LeftMouseDblClick",_this] spawn MB_fnc_dispatchCallbacks;
		};
		case MB_R: { 
				["RightMouseDblClick",_this] spawn MB_fnc_dispatchCallbacks;
		};
		case MB_M: { 
				["MiddleMouseDblClick",_this] spawn MB_fnc_dispatchCallbacks;
		};
	};
};