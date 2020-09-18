#pragma once
#include "Includes.h"

class Ñvector3
{
private:
	double m_x, m_y, m_z;
public:
	Ñvector3(double x, double y, double z);
	~Ñvector3();
	void Vector3Info()
	{
		std::cout << "\nx = " << m_x << "; y = " << m_y << "; z = " << m_z << std::endl;
	}
};

