#include "\MB\MapBuilder\ui\dik.hpp"
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
