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
		
		//Reenable DevInfo:
		if ((productVersion select 4) != "Stable") then
		{
			disableSerialization;
			_display = findDisplay 46; 
			_control = _display displayctrl 11400;     
			_control ctrlsetfade 0;     
			_control ctrlcommit 0;
		};