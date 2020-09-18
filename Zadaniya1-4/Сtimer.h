#pragma once
#include "Includes.h"

class Ñtimer
{
private:
	int m_min= 0, m_sec = 0;
public:
	Ñtimer(int min, int sec);
	Ñtimer(int sec);
	~Ñtimer();
	void Input_min();
	void Input_sec();
};

