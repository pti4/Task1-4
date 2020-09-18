#include "Cperson.h"


Cperson::Cperson()
{
	this->m_year = 0;
	this->m_name = "";
}
Cperson::~Cperson()
{
}
void Cperson::Input()
{
	bool True = true;
	cout << "Enter name of a person ";
	cin >> this->m_name;
	cout << "Enter year of birth of a person ";
	char const* str = "Wrong input. Please enter a year of birth in integer. ";
	this->m_year = inputCheck(this->m_year, str);
	True = true;
	while (True)
	{
		try
		{
			if (this->m_year <= 0)
			{
				True = true;
				throw - 1;
			}
			else
			{
				True = false;
				break;
			}
		}
		catch (int)//i
		{
			True = true;
			cout << "Wrong input. Please enter a year of birth in "
				"integer above zero." << endl;
			this->m_year = inputCheck(this->m_year, str);
		}
	}
}
