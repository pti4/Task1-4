#include "Ñtimer.h"

Ñtimer::Ñtimer(int min, int sec)
{
	this->m_min = min;
	this->m_sec = sec;
}
Ñtimer::Ñtimer(int sec)
{
	this->m_sec = sec;
}
Ñtimer::~Ñtimer()
{
}
void Ñtimer::Input_min()
{
	cout << "\nminutes = " << this->m_min << "\nseconds = " << this->m_sec << endl;
}
void Ñtimer::Input_sec()
{
	cout << "\nseconds = " << this->m_sec << endl;
}