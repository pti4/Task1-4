#include "�timer.h"

�timer::�timer(int min, int sec)
{
	this->m_min = min;
	this->m_sec = sec;
}
�timer::�timer(int sec)
{
	this->m_sec = sec;
}
�timer::~�timer()
{
}
void �timer::Input_min()
{
	cout << "\nminutes = " << this->m_min << "\nseconds = " << this->m_sec << endl;
}
void �timer::Input_sec()
{
	cout << "\nseconds = " << this->m_sec << endl;
}