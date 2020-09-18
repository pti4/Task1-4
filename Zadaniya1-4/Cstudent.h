#pragma once
#include "Cperson.h"

class Cstudent: protected Cperson
{
private:
	std::string m_FacultyName = "";
	int m_Number = 0;
public:
	Cstudent();
	~Cstudent();
	void input_stud();
	void PrintINFO()
	{
		std::cout << "\nStudent Name->" << m_name
			<< "\nStudent Year->" << m_year
			<< "\nStudent Faculty->" << m_FacultyName
			<< "\nStudent GroupNumber->" << m_Number;

	}
};

