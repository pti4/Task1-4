#include "Includes.h"

void menu3()
{
	int min = 0, sec = 0;
	cout << "\nIf you want to enter minutes and seconds - type m \nIf you only want to enter seconds - type s" << endl;
	char a = ' ';
	cin >> a;
	while ((a != 'M') && (a != 'S') && (a != 'm') && (a != 's'))
	{
		cout << "\nYou entered an invalid value.Repeat one more time." << endl;;
		cin >> a;
	}
	if ((a == 'm') or (a == 'M'))
	{
		min = EnterMin(min);
		sec = EnterSec(sec);
		Ñtimer timer_min(min, sec);
		timer_min.Input_min();
	}
	if ((a == 's') or (a == 'S'))
	{
		sec = EnterSec(sec);
		Ñtimer timer_sec(min, sec);
		timer_sec.Input_sec();
	}
	char const* str = "You must enter a number";
	double x = 0.0, y = 0.0, z = 0.0;
	cout << "\nEnter x ";
	x = inputCheck(x, str);
	cout << "\nEnter y ";
	y = inputCheck(y, str);
	cout << "\nEnter z ";
	z = inputCheck(z, str);
	Ñvector3 vector3(x, y, z);
	vector3.Vector3Info();
	cout << "\n\n";
	Cstring string("Hello world");
	string.output();
}