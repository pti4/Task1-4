#include "includes.h"

void menu1()
{
	CPoint Point (0.0, 0.0);
	Point.EnterXY();
	cout << "\nx=" << Point.GetX() << endl;
	cout << "\ny=" << Point.GetY() << endl;
	cout << "\nRadius vector length = " << Point.VectorRadiusLength() << endl;
	cout << "\nIf you want to enter h in degrees - type g \n Or if you want to enter h in radians - type r" << endl;;
	char a;
	cin >> a;
	while ((a != 'r') && (a != 'g')&&(a!='R')&&(a!='G'))
	{
		cout << "\nYou entered an invalid value.Repeat one more time." << endl;;
		cin >> a;
	}
	if ((a=='g')||(a=='G'))
	{
		auto point1 = Point.CoordRadVecOnHGRAD();
		cout << " x=" << point1.GetX() << " y=" << point1.GetY() << endl;
	}
	if ((a == 'r')||(a=='R'))
	{
		auto point1 = Point.CoordRadVecOnHRAD();
		cout << " x=" << point1.GetX() << " y=" << point1.GetY() << endl;
	}
}