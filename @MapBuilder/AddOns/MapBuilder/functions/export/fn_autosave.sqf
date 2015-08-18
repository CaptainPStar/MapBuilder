if(time>=MB_nextProjectAutosave && MB_nextProjectAutosave>0) then {
		["autosave"] call MB_fnc_saveProject;
		MB_nextProjectAutosave = time + MB_autosaveInterval;
	};