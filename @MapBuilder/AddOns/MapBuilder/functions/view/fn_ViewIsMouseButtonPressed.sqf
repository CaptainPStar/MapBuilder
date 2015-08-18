#include "\MB\MapBuilder\ui\dik.hpp"
_return = false;
switch ((_this select 0)) do {
		case MB_L: { 
			if(MB_ViewportLastLMBDown>MB_ViewportLastLMBUp) then {
				_return = true;
			};
		};
		case MB_R: { 
			if(MB_ViewportLastRMBDown>MB_ViewportLastRMBUp) then {
				_return = true;
			};
		};
		case MB_M: { 
			if(MB_ViewportLastMMBDown>MB_ViewportLastMMBUp) then {
				_return = true;
			};
		};
	};
	_return;
