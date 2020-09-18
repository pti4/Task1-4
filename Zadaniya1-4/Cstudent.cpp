#include "Cstudent.h"


Cstudent::Cstudent()
{
	
}
Cstudent::~Cstudent()
{
}
void Cstudent::input_stud()
{
	Input();
	cout << "\nInput Faculty-> ";
	cin >> this->m_FacultyName;
	cout << "\nInput GroupNumber-> ";
	cin >> this->m_Number;
	cout << "Enter a group number of a student ";
	char const* str = "Wrong input. Please enter a group number in integer.";
	this->m_Number = inputCheck(this->m_Number, str);
	bool True = true;
	while (True)
	{
		try
		{
			if (this->m_Number <= 0)
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
			cout << "Wrong input. Please enter a group number of a student in "
				"integer above zero." << endl;
			this->m_Number = inputCheck(this->m_Number, str);
		}
	}
}
