#pragma once
#include "Includes.h"

class �vector3
{
private:
	double m_x, m_y, m_z;
public:
	�vector3(double x, double y, double z);
	~�vector3();
	void Vector3Info()
	{
		std::cout << "\nx = " << m_x << "; y = " << m_y << "; z = " << m_z << std::endl;
	}
};

