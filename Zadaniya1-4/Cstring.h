#pragma once
#include "Includes.h"

class Cstring
{
private:
	char* m_string;
	int m_length;
public:
	Cstring();
	Cstring(char const* str);
	~Cstring();
	void output();
};

