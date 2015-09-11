private["_folder","_extension"];
_folderName = param [0,""];
_extension = param [1,""];

_folder = ("MB_FileIO" callExtension format["listfiles|%1",_folderName]);
_folder = [_folder,"|"] call BIS_fnc_splitString;
_folder = _folder - ["."];
_folder = _folder - [".."];

if(_extension != "") then {
	private["_cleanedList"];
	_cleanedList = [];
	{
		private["_tokens"];
		_tokens = _x splitString ".";
		if(_tokens select (count(_tokens)-1) == _extension) then {
			_cleanedList pushBack _x;
		};
	} foreach _folder;
	_folder = _cleanedList;
};
_folder;