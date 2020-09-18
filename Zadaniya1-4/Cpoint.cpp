#include "Includes.h"

CPoint::CPoint(double x, double y)
{	
	this->m_x = x;
	this->m_y = y;
}

CPoint::~CPoint()
{
}

void CPoint::EnterXY()
{
	char const* str = "You must enter a real number";
	cout << "\nInput X->";
	m_x = inputCheck(m_x, str);
	cout << "\nInput Y->";
	m_y = inputCheck(m_y, str);
}

double CPoint::VectorRadiusLength()
{
	return  sqrt((m_x * m_x) + (m_y * m_y));
}

CPoint CPoint::CoordRadVecOnHRAD()
{
	double radian;
	cout << "\nInput h-> ";
	cin >> radian;
	cout << "\nRotation of a vector by " << radian << " radian its coordinates ";
	return CPoint(m_x * cos(radian) + m_y * sin(radian), -m_x * sin(radian) + m_y * cos(radian));
}

CPoint CPoint::CoordRadVecOnHGRAD()
{
	double grad;
	double Pi = 3.14;
	cout << "\nInput h-> ";
	cin >> grad;
	cout << "\nRotation of a vector by " << grad << " gradus its coordinates ";
	return CPoint(m_x * cos(grad/(180/Pi)) + m_y * sin(grad / (180 / Pi)), -m_x * sin(grad / (180 / Pi)) + m_y * cos(grad / (180 / Pi)));
}