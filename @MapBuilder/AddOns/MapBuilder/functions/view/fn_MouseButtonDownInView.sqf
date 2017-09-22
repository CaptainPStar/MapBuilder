/*
    Function:       MB_fnc_mouseButtonDownInView
    Author:         NeoArmageddon
    Description:    Handles mouse button hold actions.
*/
#include "\MB\MapBuilder\ui\includes\dik.hpp"

switch ((_this select 1)) do {
	case MB_L: {
		MB_ViewportLastLMBDown = diag_tickTime;
		MB_namespace setVariable ["mb.drag.startPos", MB_MousePosition];
		_this spawn {
			private["_downtime"];
			_downtime = MB_ViewportLastLMBDown;
			sleep MB_DragStartTime;
			if(MB_ViewportLastLMBUp<_downtime && !MB_ViewportRMBDrag) then {
				MB_ViewportLMBDrag = true;
				["BeginLeftMBDrag",_this] spawn MB_fnc_dispatchCallbacks;
			};
		};
	};
	case MB_R: {
		MB_ViewportLastRMBDown = diag_tickTime;
		MB_namespace setVariable ["mb.drag.startPos", MB_MousePosition];
		_this spawn {
			private["_downtime"];
			_downtime = MB_ViewportLastRMBDown;
			sleep MB_DragStartTime;
			if(MB_ViewportLastRMBUp<_downtime&& !MB_ViewportLMBDrag) then {
				MB_ViewportRMBDrag = true;
				["BeginRightMBDrag",_this] spawn MB_fnc_dispatchCallbacks;
			};
		};
	};
	case MB_M: {
		MB_ViewportLastMMBDown = diag_tickTime;
		MB_namespace setVariable ["mb.drag.startPos", MB_MousePosition];
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
