#include "Pokemon.h"
#include <stdio.h>

Pokemon::Pokemon(const char* _name)
{
	name = _name;
}

Pokemon::Pokemon(const Pokemon& _obj)
{
	this->name = _obj.name;
}

Pokemon& Pokemon::operator=(const Pokemon& _obj)
{
	this->name = _obj.name;
	return *this;
}

void Pokemon::PrintName(const char* _add)
{
	printf("%s%s", name, _add);
}