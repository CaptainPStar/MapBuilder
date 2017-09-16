/*
    Function:       MB_fnc_fencerPlace
    Author:         NeoArmageddon
    Description:    Action from "PLACE" button in the fencer window
*/


#define __CTRLFENCER(var1) ((uiNamespace getVariable ["MB_FencerContent", controlNull]) controlsGroupCtrl var1)

	private["_parent","_direction","_bbr","_dir","_fpos","_relPos","_class","_display"];

	if (MB_Selected isEqualTo []) exitWith {
		["You need to have an object selected to use Fencer", "important"] call MB_fnc_uiLogOutput;
	};

	_parent = (MB_Selected select (count(MB_Selected)-1));
	_boundingParent = [_parent] call MB_FNC_FencerCalcBounding;

	_parentPos = _parent getvariable "MB_ObjVar_PositionATL";
	_ParentMaxWidth = _boundingParent select 1;
	_ParentMaxLength = _boundingParent select 0;
	_ParentMaxHeight = _boundingParent select 2;

	_dir =  _parent getvariable "MB_ObjVar_Yaw";

	if(count(MB_Selected)>0) then {
		_class = typeof (MB_Selected select ((count MB_Selected)-1));
	} else {
		_class = MB_CurClass;
	};

	private _ctrlLibraryToggle = __CTRLFENCER(170412);
	private _useLibrary = ctrlChecked _ctrlLibraryToggle;
	if (_useLibrary) then {
		_class = MB_CurClass;
	};

	_created = [_class,_parentPos] call MB_fnc_CreateObject;
	_created setvariable ["MB_ObjVar_Yaw",_dir,false];
	_created setvariable ["MB_ObjVar_Bank",(_parent getvariable ["MB_ObjVar_Bank",false]),false];
	_created setvariable ["MB_ObjVar_Pitch",(_parent getvariable ["MB_ObjVar_Pitch",false]),false];
	_created setvariable ["MB_ObjVar_Simulate",(_parent getvariable ["MB_ObjVar_Simulate",false]),false];
	_created setvariable ["MB_ObjVar_Locked",(_parent getvariable ["MB_ObjVar_Locked",false]),false];

	_boundingCreated = [_created] call MB_FNC_FencerCalcBounding;

	_CreatedMaxWidth = _boundingCreated select 1;
	_CreatedMaxLength = _boundingCreated select 0;
	_CreatedMaxHeight = _boundingCreated select 2;


	_direction = MB_FencerDir;
	private _offsetText = ctrlText __CTRLFENCER(170410);
	_offset = parseNumber _offsetText;
	switch (_direction) do {
		case 0: {
			_relPos = [_parent,_created,[0,(_CreatedMaxLength+_ParentMaxLength)/2+_offset,0]] call MB_fnc_CalcRelativePosition;
		};
		case 1: {
			_relPos = [_parent,_created,[0,-1*((_CreatedMaxLength+_ParentMaxLength)/2+_offset),0]] call MB_fnc_CalcRelativePosition;
		};
		case 2: {
			_relPos = [_parent,_created,[-1*((_CreatedMaxWidth+_ParentMaxWidth)/2+_offset),0,0]] call MB_fnc_CalcRelativePosition;
		};
		case 3: {
			_relPos = [_parent,_created,[(_CreatedMaxWidth+_ParentMaxWidth)/2+_offset,0,0]] call MB_fnc_CalcRelativePosition;
		};
		case 4: {
			_relPos = getPosATL _parent;
			_relPos set[2,(_relPos select 2)+_ParentMaxHeight+_offset];
		};
		case 5: {
			_relPos = getPosATL _parent;
			_relPos set[2,(_relPos select 2)-_CreatedMaxHeight-_offset];
		};
	};

	if(_direction<4) then {
		switch (MB_FencerHeightMode) do {
			case 0: {
				//Do Nothing. It is already ATL
				_relPos set [2,_parentPos select 2];
				_created setvariable ["MB_ObjVar_PositionATL",_relPos,false];
			};
			case 1: {
				//Height to Zero
				_relPos set [2,0];
				_created setvariable ["MB_ObjVar_PositionATL",_relPos,false];
			};
			case 2: {
				//Get the ASL Pos and transform to ATL at new position
				_relPos set [2,(getposASL _parent) select 2];
				_created setvariable ["MB_ObjVar_PositionATL",ASLtoATL _relPos,false];
			};
		};
	} else {
		_created setvariable ["MB_ObjVar_PositionATL",_relPos,false];
	};

	private _terrainAlign = ctrlChecked __CTRLFENCER(170411);
	if (_terrainAlign) then {
		[_created] call MB_fnc_AlignObjectToTerrain;
	};

	// -- Save the current settings, so we can restore them whenever the UI is reopened
	["ui.fencer.libraryMode", parseNumber _useLibrary, false] call MB_fnc_uiSetSetting;
	["ui.fencer.terrainAlign", parseNumber _terrainAlign, false] call MB_fnc_uiSetSetting;
	["ui.fencer.offset", _offsetText, false] call MB_fnc_uiSetSetting;
	saveProfileNamespace;

	[_created] call MB_fnc_UpdateObject;
	[_created] call MB_fnc_Select;
	[] call MB_FNC_FencerUpdatePreview;
