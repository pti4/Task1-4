#pragma once
#include "Includes.h"

class Cfrac
{
private:
	int m_p = 0, m_q = 1;
public:
	Cfrac(int p, int q);
	~Cfrac();
	void EnterPQ();
	double ToConvert();
	Cfrac ToReduce();
	Cfrac operator +(const Cfrac& other);
	Cfrac operator -(const Cfrac& other);
	Cfrac operator *(const Cfrac& other);
	Cfrac operator /(const Cfrac& other);
	int GetP()
	{
		return m_p;
	}
	int GetQ()
	{
		return m_q;
	}
};

