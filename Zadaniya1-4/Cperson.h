#pragma once
#include "Includes.h"


class Cperson
{
protected:
	std::string m_name = "";
	int m_year = 0;
public:
	Cperson();
	~Cperson();
	void Input();
};

