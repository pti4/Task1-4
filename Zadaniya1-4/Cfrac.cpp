#include "Includes.h"

Cfrac::Cfrac(int p, int q)
{
	this->m_p = p;
	this->m_q = q;
}
Cfrac::~Cfrac()
{
}
void Cfrac::EnterPQ()
{
	char const* str = "You must enter an integer";
	char const* str2 = "You must enter an integer that doesn`t equal to zero";
	cout << "\nEnter P:";
	m_p = inputCheck(m_p, str);
	cout << "\nEnter Q:";
	m_q = inputCheck(m_q, str);
	while (m_q == 0) { m_q = inputCheck(m_q, str2); }
}
double Cfrac::ToConvert()
{
	return static_cast<double>(m_p) / static_cast<double>(m_q);
}
Cfrac Cfrac::ToReduce()
{
	int Gcd = gcd(m_p, m_q);
	return Cfrac(m_p / Gcd, 0);
}
Cfrac Cfrac::operator+(const Cfrac& other)
{
	int  Nok = this->m_q * other.m_q / gcd(this->m_q, other.m_q);

	return Cfrac(((this->m_p * (Nok / this->m_q)) + (other.m_p * (Nok / other.m_q))), Nok);
}

Cfrac Cfrac::operator-(const Cfrac& other)
{
	int  Nok = this->m_q * other.m_q / gcd(this->m_q, other.m_q);

	return Cfrac(((this->m_p * (Nok / this->m_q)) - (other.m_p * (Nok / other.m_q))), Nok);
}

Cfrac Cfrac::operator*(const Cfrac& other)
{
	return Cfrac((this->m_p * other.m_p), (this->m_q * other.m_q));
}

Cfrac Cfrac::operator/(const Cfrac& other)
{
	return Cfrac((this->m_p * other.m_q), (this->m_q * other.m_p));
}
