#include "\MB\MapBuilder\ui\dik.hpp"
switch ((_this select 1)) do {
		case MB_L: { 
		
			MB_ViewportLastLMBUp = diag_tickTime;
			if((MB_ViewportLastLMBUp-MB_ViewportLastLMBDown)<=MB_ClickTime) then {
				//_this spawn MB_fnc_MouseButtonClick;
				["LeftMouseButtonReleased",_this] spawn MB_fnc_dispatchCallbacks;
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
				["RightMouseButtonReleased",_this] spawn MB_fnc_dispatchCallbacks;
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
				["MiddleMouseButtonReleased",_this] spawn MB_fnc_dispatchCallbacks;
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