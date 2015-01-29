#include "dik.hpp"

//=========================================
//= Object Manipulation
//=========================================
MB_fnc_CreateObject = {
	private["_class","_pos","_dir","_pitch","_bank","_obj","_layer","_scale"];
	_class = [_this,0] call bis_fnc_param;
	_pos = [_this,1] call bis_fnc_param;
	_layer = [_this,2,MB_CurLayer] call bis_fnc_param;
	_dir = [_this,3,0] call bis_fnc_param;
	_pitch = [_this,4,0] call bis_fnc_param;
	_bank = [_this,5,0] call bis_fnc_param;
	_scale = [_this,6,0] call bis_fnc_param;
	_obj = _class createvehicle _pos;
	_obj setposATL _pos;
	_obj enableSimulation false;
	_obj setdir _dir;
	[_obj,_pitch,_bank] call BIS_fnc_setPitchBank;
	[[_obj,_layer],"MB_fnc_LayerAddObject",true] call BIS_fnc_mp;
	_obj;
};


MB_fnc_MoveSelected = {
	private["_obj","_initialMousePos","_offset","_pos","_relPos","_height"];
	_obj = (MB_Selected select 0);
	_initialMousePos = MB_ClickedPosition;
	_offset = [(getposATL (_obj select 0) select 0)-(_initialMousePos select 0),(getposATL (_obj select 0) select 1)-(_initialMousePos select 1),0];
	while{[MB_L] call MB_fnc_isMousePressed && !([MB_R] call MB_fnc_isMousePressed)} do {
		_pos = screenToWorld MB_MousePosition;
		_pos = [(_pos select 0)+(_offset select 0),(_pos select 1)+(_offset select 1),0];

			[(_obj select 0),[(_pos select 0),(_pos select 1),(_obj select 2)]] call MB_fnc_SetPosition;
		if(!local (_obj select 0)) then {
			//[[(_obj select 0),[(_pos select 0),(_pos select 1),(_obj select 2)]],"MB_fnc_SetPosition",true] call bis_fnc_mp;
		};
		{
			_relPos = _x select 1;
			_height = _x select 2;
			if((_obj select 0) != (_x select 0)) then {
					[(_obj select 0),(_x select 0),_relPos,_height] call MB_fnc_SetRelPos;
				if(!local (_x select 0)) then {
					//[[(_obj select 0),(_x select 0),_relPos,_height],"MB_fnc_SetRelPos",true] call bis_fnc_mp;
				};
			};
		} foreach MB_Selected;
	};
};
MB_fnc_SetPosition = {
	private["_obj","_pos"];
	_obj = [_this,0] call bis_fnc_param;
	_pos = [_this,1] call bis_fnc_param;
	_obj setposATL _pos;
};
MB_fnc_SetRotation = {
	private["_obj","_rot"];
	_obj = [_this,0] call bis_fnc_param;
	_rot = [_this,1] call bis_fnc_param;
	_obj setdir _rot;
};
MB_fnc_RotateSelected = {
	private["_rotateCenter","_rot"];
	_rot = _this select 0;
	if(isNull(MB_ClickedObject)) then {
		_rotateCenter = getposATL ((MB_Selected select 0) select 0);
	} else {
		_rotateCenter = getposATL MB_ClickedObject;
	};
	if(([DIK_LSHIFT] call MB_fnc_isPressed)) then {
		_rotateCenter = MB_ClickedPosition;
	};	
	{
		private["_dir","_relPos"];
		_dir = ((_x select 3)+_rot);

		_relPos = [_rotateCenter,getposATL (_x select 0),_rot] call MB_fnc_RotatePos;
		_relPos set[2,(_x select 2)];
		[(_x select 0),_relPos] call MB_fnc_SetPosition;
		[(_x select 0),_dir] call MB_fnc_SetRotation;
		MB_Selected set [_forEachIndex,[(_x select 0),(_x select 1),(_x select 2),_dir,(_x select 4)]];
	} foreach MB_Selected;
};
MB_fnc_ChangeHeightSelected = {
	private["_delta","_pitchBank"];
	_delta = _this select 0;	
	{
		_pitchBank = (_x select 0) call BIS_fnc_getPitchBank;
		//(_x select 0) setposATL [getposATL (_x select 0) select 0,getposATL (_x select 0) select 1,(getposATL (_x select 0) select 2)-_delta];

			[(_x select 0),0,0] call BIS_fnc_setPitchBank;
			[(_x select 0),[getposATL (_x select 0) select 0,getposATL (_x select 0) select 1,(getposATL (_x select 0) select 2)-_delta]] call MB_fnc_SetPosition;
			[(_x select 0),(_pitchBank select 0),(_pitchBank select 1)] call BIS_fnc_setPitchBank;
		if(!local (_x select 0)) then {
			//[[(_x select 0),0,0],"BIS_fnc_setPitchBank",true] call BIS_fnc_MP;
			//[[(_x select 0),[getposATL (_x select 0) select 0,getposATL (_x select 0) select 1,(getposATL (_x select 0) select 2)-_delta]],"MB_fnc_SetPosition",true] call BIS_fnc_MP;
			//[[(_x select 0),(_pitchBank select 0),(_pitchBank select 1)],"BIS_fnc_setPitchBank",true] call BIS_fnc_MP;
		};
		
		MB_Selected set [_forEachIndex,[(_x select 0),(_x select 1),(getposATL (_x select 0) select 2),(_x select 3),(_x select 4)]];
	} foreach MB_Selected;	
};
MB_fnc_ChangePitchBankSelected = {
	private[];
	_dx = _this select 0;
	_dy = _this select 1;
	{
		_pb = (_x select 4);
		_pb = [(_pb select 0)+_dy,(_pb select 1)+_dx];
		
			[(_x select 0),(_pb select 0),(_pb select 1)] call BIS_fnc_setPitchBank;
		if(!local (_x select 0)) then {
			//[[(_x select 0),(_pb select 0),(_pb select 1)],"BIS_fnc_setPitchBank",true] call BIS_fnc_MP;
		};
		MB_Selected set [_forEachIndex,[(_x select 0),(_x select 1),(getposATL (_x select 0) select 2),(_x select 3),_pb]];
	} foreach MB_Selected;	
};
MB_fnc_DeleteSelected = {
	_selected = MB_selected;
	{
		[(_x select 0)] call MB_fnc_DeleteObject;
	} foreach _selected;
};
MB_fnc_DeleteObject = {
	private["_obj","_objArray","_layer"];
	_obj = _this select 0;
	[_obj] call MB_fnc_Deselect;
	_layer = MB_Layers select MB_CurLayer;
	[[_obj,MB_CurLayer],"MB_fnc_LayerRemoveObject",true] call BIS_fnc_mp;
	deletevehicle _obj;
};
MB_fnc_DeleteAllObjects = {
	private["_obj","_objArray","_layer"];
	{
		[_x] call MB_fnc_DeleteObject;
	} foreach ((MB_Layers select MB_CurLayer) select 0);
};