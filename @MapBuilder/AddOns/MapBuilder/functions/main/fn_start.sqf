//***************************************
//* Start Function
//* Starts MB dialog and camera
//***************************************

	startLoadingScreen ["Starting MapBuilder..."];
	MBDialog = createDialog "MB_Main";
	[1,false] call MB_fnc_togglePopup;
	[2,false] call MB_fnc_togglePopup;
	[3,false] call MB_fnc_togglePopup;
	MBCamera = "camera" camCreate (MB_CamPos select 0);
	MBCamera switchCamera "Internal";
	[] call MB_fnc_updateCam;
	//MBCamera cameraEffect ["internal", "BACK"];
	//showcinemaborder false;
	//cameraEffectEnableHUD true;
	//MBCamera cameraEffect ["internal", "BACK"];
	//player enableSimulation false;
	//["MB_MapClick", "onMapSingleClick", {MBCamera camSetPos [_pos select 0, _pos select 1,getpos MBCamera select 2];}, []] call BIS_fnc_addStackedEventHandler;
	//((findDisplay 123) displayCtrl 170301) onDoubleClick "MBCamera camSetPos [_pos select 0, _pos select 1,getpos MBCamera select 2];";
	
	//Middle Mouse works only in Display 46...
	(findDisplay 46) displayAddEventHandler  ["MouseButtonDown","if(MB_ViewportHasFocus && (_this select 1)==2) then {_nil=_this call MB_fnc_MouseButtonDownInView;};"];
	(findDisplay 46) displayAddEventHandler  ["MouseButtonUp","if((_this select 1)==2) then {_nil=_this call MB_fnc_MouseButtonUpInView;};"];
	//(findDisplay 123) displayAddEventHandler ["MouseMoving","_nil=_this call MB_fnc_MouseMove"];
	//(findDisplay 123) displayAddEventHandler ["MouseButtonDown","systemchat format[""MB Down: %1"",_this];"];
	//(findDisplay 123) displayAddEventHandler ["MouseButtonUp","systemchat format[""MB Up: %1"",_this];"];
	((findDisplay 123) displayCtrl 170001) ctrlSetEventHandler ["MouseMoving","_this call MB_fnc_MouseMove;"];
	((findDisplay 123) displayCtrl 170001) ctrlSetEventHandler ["MouseEnter","[true] call MB_fnc_MouseInView;"];
    ((findDisplay 123) displayCtrl 170001) ctrlSetEventHandler ["MouseExit","[false] call MB_fnc_MouseInView;"];
	((findDisplay 123) displayCtrl 170001) ctrlSetEventHandler ["MouseZChanged","_nil=_this call MB_fnc_MouseWheelMoveInView;"];

	((findDisplay 123) displayCtrl 170001) ctrlSetEventHandler ["MouseButtonDown","_this call MB_fnc_MouseButtonDownInView;"];
	((findDisplay 123) displayCtrl 170001) ctrlSetEventHandler ["MouseButtonUp","_this call MB_fnc_MouseButtonUpInView;"];
	//(findDisplay 123) displayAddEventHandler ["MouseZChanged","_nil=_this call MB_fnc_MouseZ"];
	//findDisplay 123) displayAddEventHandler ["KeyDown","systemchat format[""%1"",_this];"];
	//(findDisplay 123) displayAddEventHandler ["KeyUp","_nil=_this call MB_fnc_KeyUp"];
	
	["MB_Draw3D", "onEachFrame", {call MB_fnc_Draw3D;}] call BIS_fnc_addStackedEventHandler;
	//addMissionEventHandler ['Draw3D',{call MB_fnc_Draw3D;}];
	MB_RegisterKeys = true;
	//[] call MB_fnc_refreshFilters;
	[MB_Library] call MB_fnc_libraryUpdate;
	[] call MB_fnc_updateUsed;
	//[] call MB_fnc_disable3DPreview;
	[] call MB_fnc_SetEditorFocus;
	[] call MB_fnc_hidePresetWindow;
	[170400] spawn MB_fnc_closeWindow;
	[170600] spawn MB_fnc_closeWindow;
	[666] spawn MB_fnc_closeWindow;
	[170700,true] spawn MB_fnc_closeWindow;
	[170800,true] spawn MB_fnc_closeWindow;
	[170900,true] spawn MB_fnc_closeWindow;
	[171000,true] spawn MB_fnc_closeWindow;
	[171100,true] spawn MB_fnc_closeWindow;
	[171200,true] spawn MB_fnc_closeWindow;
	[0] call MB_fnc_switchMode;
	[] call MB_fnc_checkVersion;
	endLoadingScreen;
	//[] call MB_Listbox_Categories_Refresh;
	[] spawn {
		while{dialog} do {
			[] call MB_fnc_updateCam;
			["camUpdate"] call MB_fnc_dispatchCallbacks;
			sleep 0.01;
		};
	};
	[] spawn {
		while{dialog} do {
			//[screenToWorld MB_MousePosition] spawn MB_fnc_colorVertices;
			["loop"] call MB_fnc_dispatchCallbacks;
			sleep 1;
		};
	};
	[] spawn {
		while{dialog} do {
			//[screenToWorld MB_MousePosition] spawn MB_fnc_colorVertices;
			["fastloop"] call MB_fnc_dispatchCallbacks;
			sleep 0.1;
		};
	};

