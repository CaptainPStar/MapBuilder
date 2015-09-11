private["_folder","_content","_file","_exists"];
_folder = param [0,""];
_file = param [1,""];

_content = [_folder] call MB_fnc_getFolderContent;
_exists = false;
if(_file in _content) then {
	_exists = true;
};
_exists;