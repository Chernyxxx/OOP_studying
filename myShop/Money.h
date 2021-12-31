#pragma once
#include <iostream>

using namespace std;
 
class Money
{
private:
	int m_rouble;
	int m_kop;
	
public:
	Money();
	Money(float value);
	
	float GetRouble();
	float GetKop();

	friend std::ostream& operator<<(std::ostream& out, const Money& obj);
};

