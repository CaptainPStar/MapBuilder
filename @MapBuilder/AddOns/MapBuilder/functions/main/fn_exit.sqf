//***************************************
//* Exit Function
//* Removed all handlers and restores the player view
//***************************************
		["MB_Draw3D", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		//["MB_MapClick", "onMapSingleClick"] call BIS_fnc_removeStackedEventHandler;
		(findDisplay 123) displayRemoveAllEventHandlers "MouseMoving";
		(findDisplay 46) displayRemoveAllEventHandlers "MouseButtonDown";
		(findDisplay 46) displayRemoveAllEventHandlers "MouseButtonUp";
		//MBCamera cameraEffect ["Terminate", "BACK"];
		player switchCamera "Internal";
		
		player enableSimulation true;