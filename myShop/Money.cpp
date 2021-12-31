#include "Money.h"


Money::Money()
{
}

Money::Money(float value): m_rouble((int)value),
							m_kop((value - (int)value) * 100)
{
}

float Money:: GetRouble()
{
	return (float)m_rouble; 
}

float Money::GetKop()
{
	return (float)m_kop/100; 
}



std::ostream& operator<<(std::ostream& out, const Money& obj)
{

	out << obj.m_rouble<< "rub" <<obj.m_kop<<"kop";
	return out;
}
