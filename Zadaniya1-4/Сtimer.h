#pragma once
#include "Includes.h"

class �timer
{
private:
	int m_min= 0, m_sec = 0;
public:
	�timer(int min, int sec);
	�timer(int sec);
	~�timer();
	void Input_min();
	void Input_sec();
};

