private["_filename","_line","_failedTBImport","_failedTBImportLine","_lineCount","_importCount","_p3dNameTmp","_p3dName","_key","_posX","_posY","_posZ","_yaw","_pitch","_bank","_scale","_pos","_created","_failedTBImportCount","_popUp"];

_failedTBImport = [];
_failedTBImportLine = [];
_lineCount = 1;
_importCount = 0;


_filename = [_this,0,"noFilename"] call bis_fnc_param;
if(_filename == "") exitWith {systemChat "Error: Export needs a name!";};

if(!(["import",format["%1.txt",_filename]] call MB_FNC_FileExists)) exitwith {
	systemChat "Error: File not found!";
};
"MB_FileIO" callExtension format["open_r|import\%1.txt",_filename];
_line = "MB_FileIO" callExtension "readline";
while{_line != "EOF"} do {
	//Do somethign with _line
	_importLine = _line splitString ";";

	_p3dNameTmp = _importLine select 0;
	_p3dName = [_p3dNameTmp, 1, -1] call BIS_fnc_trimString;
	diag_log format["_p3dName: %1",_p3dName];

	_key = MB_importTB_P3D find _p3dName;
	if(_key!=(-1)) then {
		_className = MB_importTB_ClassName select _key;

		_posX = parseNumber (_importLine select 1);
		_posY = parseNumber (_importLine select 2);
		_posZ = parseNumber (_importLine select 3);
		_yaw = parseNumber (_importLine select 4);
		_pitch = parseNumber (_importLine select 5);
		_bank = parseNumber (_importLine select 6);
		_scale = parseNumber (_importLine select 7);

		_pos = [(_posX-200000),_posY,_posZ];
		_created = [_className,_pos] call MB_FNC_CreateObject;

		_created setvariable["MB_ObjVar_PositionATL",_pos,false];
		_created setvariable["MB_ObjVar_Pitch",0,false];
		_created setvariable["MB_ObjVar_Bank",0,false];
		_created setvariable["MB_ObjVar_Yaw",1,false];
		_created setvariable["MB_ObjVar_Simulate",false,false];
		_created setvariable["MB_ObjVar_Locked",false,false];
		_created setvariable["MB_ObjVar_Scale",1,false];

		[_created,true] call MB_fnc_UpdateObject;

		_importCount = _importCount+1
	} else {
		_failedTBImport pushBack  _p3dName;
		_failedTBImportLine pushBack  _lineCount;
	};
	_lineCount = _lineCount+1;
	_line = "MB_FileIO" callExtension "readline"; //Read next line
};
"MB_FileIO" callExtension "close";


_path = ("MB_FileIO" callExtension format["open_w|import\%1.log",_filename]);

systemChat format["Opening %1",_path];
_failedTBImportCount = count(_failedTBImport);
if(_failedTBImportCount>0) then {
	"MB_FileIO" callExtension format["write|%1 objects were imported from %2.txt, %3 objects failed to import.",_importCount,_filename,_failedTBImportCount];
	"MB_FileIO" callExtension format["write|Following objects could not be imported. Most likely because the addons containing these objects are not loaded."];
	for [{_i=0},{_i<_failedTBImportCount},{_i=_i+1}] do {
		"MB_FileIO" callExtension format["write|Line: %1, Object: %2.p3d",_failedTBImportLine select _i,_failedTBImport select _i];
	};
} else {
	"MB_FileIO" callExtension format["write|%1.txt imported successfully",_filename];
};
"MB_FileIO" callExtension "close";

_popUp = [format["%1 objects were imported from %2.txt, %3 objects failed to import. View the import log for more informations",_importCount,_filename,_failedTBImportCount],0] call MB_fnc_showPopupDialog;