#include "\MB\MapBuilder\ui\includes\dik.hpp"
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
