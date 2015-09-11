private["_name"];
_class = param[0];
if(typeName _class == "OBJECT") then {
	_class = typeof _class;
};
_name = toLower(format["%1_MB",_class]);
_name;
