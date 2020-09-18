#include "Includes.h"
#include <fstream>

int inputCheck(int number, char const* str)
{
	bool validInput;
	cin.exceptions(ifstream::failbit);
	do
	{
		try
		{
			validInput = true;
			cin >> number;
		}
		catch (ios_base::failure&)//fail
		{
			validInput = false;
			cin.clear();
			string dummy;
			cin >> dummy;
			cout << str << endl;
		}
	} while (!validInput);
	return number;
}

double inputCheck(double number, char const* str)
{
	bool validInput;
	cin.exceptions(ifstream::failbit);
	do
	{
		try
		{
			validInput = true;
			cin >> number;
		}
		catch (ios_base::failure&) //fail
		{
			validInput = false;
			cin.clear();
			string dummy;
			cin >> dummy;
			cout << str << endl;
		}
	} while (!validInput);
	return number;
}