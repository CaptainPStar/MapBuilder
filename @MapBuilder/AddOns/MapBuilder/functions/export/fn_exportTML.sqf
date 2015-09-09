//startLoadingScreen ["Exporting Terrain Builder file..."];

	_filename = [_this,0,"noFilename"] call bis_fnc_param;
	if(_filename == "") exitWith {systemChat "Error: Export needs a name!";endLoadingScreen;};
	_projFolder = ("MB_FileIO" callExtension "listfiles|export");
	_projFolder = _projFolder splitString  "|";
	_projFolder = _projFolder - ["."];
	_projFolder = _projFolder - [".."];
	_confirmed = true;
	if(format["%1.tml",_filename] in _projFolder) then {
		_confirmed = ["File with this name already exists. Overwrite?",0] call MB_fnc_showPopupDialog;
	};	
	
	
	if(_confirmed) then {
	private["_used","_usedTypes"];
	_used = [];
	_usedTypes = [];
	{
		if(!((typeof _x) in _usedTypes)) then {
			_used pushBack _x;
			_usedTypes pushBack (typeof _x);
		};
	
	} foreach MB_Objects;
	
	
	
		_path = ("MB_FileIO" callExtension format["open_w|export\%1.tml",_filename]);
		
		systemChat format["Opening %1",_path];
		

		"MB_FileIO" callExtension "write|<?xml version=""1.0"" ?>";
		"MB_FileIO" callExtension format["write|<Library name=""%1 MB TPLs"" shape=""elipse"" default_fill=""-8355712"" default_outline=""-1"" tex=""0"">",_filename];
		
		
		{
		private["_model","_boundingBox","_bbMin","_bbMax"];
		systemChat format["Writing %1",_x];
		"MB_FileIO" callExtension format["write|<Template>"];
        "MB_FileIO" callExtension format["write|<Name>%1</Name>",_x];
		_model = [(configFile >> "CfgVehicles" >> _x),"model",""] call BIS_fnc_returnConfigEntry;
        "MB_FileIO" callExtension format["write|<File>%1</File>",_model];
        "MB_FileIO" callExtension format["write|<Date>22/06/01 12:20:00</Date>"];
        "MB_FileIO" callExtension format["write|<Archive></Archive>"];
        "MB_FileIO" callExtension format["write|<Fill>-11513776</Fill>"];
        "MB_FileIO" callExtension format["write|<Outline>-16777216</Outline>"];
        "MB_FileIO" callExtension format["write|<Scale>1.000000</Scale>"];
        "MB_FileIO" callExtension format["write|<Hash>1785904081</Hash>"];
        "MB_FileIO" callExtension format["write|<ScaleRandMin>0.000000</ScaleRandMin>"];
        "MB_FileIO" callExtension format["write|<ScaleRandMax>0.000000</ScaleRandMax>"];
        "MB_FileIO" callExtension format["write|<YawRandMin>0.000000</YawRandMin>"];
        "MB_FileIO" callExtension format["write|<YawRandMax>0.000000</YawRandMax>"];
        "MB_FileIO" callExtension format["write|<PitchRandMin>0.000000</PitchRandMin>"];
        "MB_FileIO" callExtension format["write|<PitchRandMax>0.000000</PitchRandMax>"];
        "MB_FileIO" callExtension format["write|<RollRandMin>0.000000</RollRandMin>"];
        "MB_FileIO" callExtension format["write|<RollRandMax>0.000000</RollRandMax>"];
        "MB_FileIO" callExtension format["write|<TexLLU>0.000000</TexLLU>"];
        "MB_FileIO" callExtension format["write|<TexLLV>0.000000</TexLLV>"];
        "MB_FileIO" callExtension format["write|<TexURU>1.000000</TexURU>"];
        "MB_FileIO" callExtension format["write|<TexURV>1.000000</TexURV>"];
        "MB_FileIO" callExtension format["write|<BBRadius>1</BBRadius>"];
        "MB_FileIO" callExtension format["write|<BBHScale>1</BBHScale>"];
        "MB_FileIO" callExtension format["write|<AutoCenter>1</AutoCenter>"];
        "MB_FileIO" callExtension format["write|<XShift>-0.000000</XShift>"];
        "MB_FileIO" callExtension format["write|<YShift>-0.000000</YShift>"];
        "MB_FileIO" callExtension format["write|<ZShift>-0.000000</ZShift>"];
        "MB_FileIO" callExtension format["write|<Height>0.000000</Height>"];
		_boundingBox = boundingBoxReal (_used select _forEachIndex);
		_bbMin = _boundingBox select 0;
		_bbMax = _boundingBox select 1;		
        "MB_FileIO" callExtension format["write|<BoundingMin X=""%1"" Y=""%2"" Z=""%3"" />",_bbMin select 0,_bbMin select 2,_bbMin select 1];
        "MB_FileIO" callExtension format["write|<BoundingMax X=""%1"" Y=""%2"" Z=""%3"" />",_bbMax select 0,_bbMax select 2,_bbMax select 1];
        "MB_FileIO" callExtension format["write|<BoundingCenter X=""0.0"" Y=""0.0"" Z=""0.0"" />"];
        "MB_FileIO" callExtension format["write|<Placement></Placement>"];
		"MB_FileIO" callExtension format["write|</Template>"];
		
		} foreach _usedTypes;
		"MB_FileIO" callExtension format["write|</Library>"];
		systemChat ("MB_FileIO" callExtension "close");
		systemchat format["Templates exported."];
	};
	//endLoadingScreen;