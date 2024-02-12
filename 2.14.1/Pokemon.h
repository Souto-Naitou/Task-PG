#pragma once

class Pokemon
{
public:
	Pokemon(const char* _name);
	Pokemon(const Pokemon& _obj);
	Pokemon& operator=(const Pokemon& _obj);
	void PrintName(const char* _add = "");
private:
	const char* name;
};
