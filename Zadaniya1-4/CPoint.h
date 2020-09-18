#pragma once
class CPoint
{
private:
	double m_x = 0.0, m_y = 0.0;

public:
	CPoint(double x, double y);
	~CPoint();
	void EnterXY();
	double VectorRadiusLength();
	CPoint CoordRadVecOnHRAD();
	CPoint CoordRadVecOnHGRAD();
	double GetX()
	{
		return  m_x;
	}
	double GetY()
	{
		return  m_y;
	}
};

