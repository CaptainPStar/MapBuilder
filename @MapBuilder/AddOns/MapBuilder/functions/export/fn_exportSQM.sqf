	_filename = [_this,0,"noFilename"] call bis_fnc_param;
	if(_filename == "") exitWith {systemChat "Error: Export needs a name!";};
	
	_folder = ["export"] call mb_fnc_getFolderContent;
	_confirmed = true;
	if(format["%1.sqm",_filename] in _folder) then {
		_confirmed = ["File with this name already exists. Overwrite?",0] call MB_fnc_showPopupDialog;
	};
		
	if(_confirmed) then {
	startLoadingScreen ["Exporting mission...","MB_LoadingScreen"];
	_path = ("MB_FileIO" callExtension format["open_w|export\%1.sqm",_filename]);
	systemChat format["Opening %1",_path];
	private["_number","_digits","_acc"];
	version=12;

	"MB_FileIO" callExtension "write|version=12;";
	"MB_FileIO" callExtension "write|class Mission {";
	"MB_FileIO" callExtension "write|addOns[]= {};";
	"MB_FileIO" callExtension "write|addOnsAuto[]= {};";
	"MB_FileIO" callExtension "write|class Intel{};";
	"MB_FileIO" callExtension "write|class Vehicles {";
	_total = ({!isNull _x} count MB_Objects);
	"MB_FileIO" callExtension format["write|items=%1;",_total];
	_count = 0;
	{
		if(!isNull(_x)) then {
			_obj = _x;


			_type = (typeof _obj);
			_pos = [_obj,[0,0]] call MB_fnc_getExactPosition;
			_pitch = _obj getvariable "MB_ObjVar_Pitch";
			_bank = _obj getvariable "MB_ObjVar_Bank";
			_yaw = _obj getvariable "MB_ObjVar_Yaw";

					
			
			_dirAndUp = [_pitch,_bank,_yaw] call MB_fnc_CalcDirAndUpVector;
			"MB_FileIO" callExtension format["write|class Item%1 {",_count];
			"MB_FileIO" callExtension format["write|position[]={%1,%3,%2};",_pos select 0, _pos select 1, _pos select 2];
			"MB_FileIO" callExtension format["write|azimut=%1;",_yaw];
			"MB_FileIO" callExtension format["write|offsetY=%1;",_pos select 2];
			"MB_FileIO" callExtension format["write|id=%1;",_count];
			"MB_FileIO" callExtension "write|side=""EMPTY"";";
			"MB_FileIO" callExtension format["write|vehicle=""%1"";",typeof _obj];
			"MB_FileIO" callExtension "write|skill=0.6;";
			"MB_FileIO" callExtension format["write|init=""this setVectorDirAndUp %1;this setposATL [%2,%3,%4];"";",_dirAndUp,_pos select 0,_pos select 1,_pos select 2];
			"MB_FileIO" callExtension "write|};";
			_count = _count + 1;
		};
		
		progressLoadingScreen (_count/_total);
	} foreach MB_Objects;
	"MB_FileIO" callExtension "write|};";
	"MB_FileIO" callExtension "write|};";

"MB_FileIO" callExtension "write|class Intro {";
	"MB_FileIO" callExtension "write|addOns[]={};";
	"MB_FileIO" callExtension "write|addOnsAuto[]={};";
	"MB_FileIO" callExtension "write|randomSeed=2744005;";
	"MB_FileIO" callExtension "write|class Intel{};";
"MB_FileIO" callExtension "write|};";
"MB_FileIO" callExtension "write|class OutroWin";
"MB_FileIO" callExtension "write|{";
	"MB_FileIO" callExtension "write|addOns[]={};";
	"MB_FileIO" callExtension "write|addOnsAuto[]={};";
	"MB_FileIO" callExtension "write|randomSeed=2744005;";
	"MB_FileIO" callExtension "write|class Intel{};";
"MB_FileIO" callExtension "write|};";
"MB_FileIO" callExtension "write|class OutroLoose";
"MB_FileIO" callExtension "write|{";
	"MB_FileIO" callExtension "write|addOns[]={};";
	"MB_FileIO" callExtension "write|addOnsAuto[]={};";
	"MB_FileIO" callExtension "write|randomSeed=2744005;";
	"MB_FileIO" callExtension "write|class Intel{};";
"MB_FileIO" callExtension "write|};";
	
	systemChat ("MB_FileIO" callExtension "close");
	systemchat format["%1 objects exported to %2.",_count,_path];
	endLoadingScreen;
	};
	