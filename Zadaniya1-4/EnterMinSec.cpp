#include "Includes.h"

int EnterMin(int min)
{
	char const* str = "You must enter a real number ";
	cout << "\nEnter minutes ";
	min = inputCheck(min, str);
	bool True = true;
	while (True)
	{
		try
		{
			if (min < 0)
			{
				throw - 1;
			}
			else
			{
				True = false;
				break;
			}
		}
		catch (int)
		{
			True = true;
			cout << "Wrong input. Please enter minutes "
				"integer above or equal to zero." << endl;
			min = inputCheck(min, str);
		}
	}
	return min;
}

int EnterSec(int sec)
{
	char const* str = "You must enter a real number";
	cout << "\nEnter seconds ";
	sec = inputCheck(sec, str);
	bool True = true;
	while (True)
	{
		try
		{
			if (sec < 0)
			{
				throw - 1;
			}
			else
			{
				True = false;
				break;
			}
		}
		catch (int)
		{
			True = true;
			cout << "Wrong input. Please enter seconds"
				"integer above or equal to zero." << endl;
			sec = inputCheck(sec, str);
		}
	}
	return sec;
}