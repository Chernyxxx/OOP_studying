//
// 
// Задание: Класс - десятичная дробь. Число д.б. представлено двумя полями - 
// целая часть тип long, дробная часть - short. Целая часть отделяется от
// дробной запятой. Реализовать методы сложения, вычитания, умножения и деления. 
//
//

#include <iostream>
#include <string>

using namespace std;


class DecFract
{

private:

    long m_integer;
    short m_fractional;
    char m_comma;

public:
    DecFract(long integer, short fract, char comma = ',')// Аргумент по умолчанию
    {                                                     // указывается последним
        m_integer = integer;
        m_fractional = fract;
        m_comma = comma;
    }

    void Print1()
    {
        cout << m_integer;
        cout << m_comma;
        cout << m_fractional;
        cout << endl;
    }
    
    friend DecFract Add(DecFract& obj1, DecFract& obj2);
    friend void Print(DecFract& obj);
    
};

DecFract Add(DecFract& obj1, DecFract& obj2)
{
    long l_sum = obj1.m_integer + obj2.m_integer;
    short s_sum = (obj1.m_fractional + obj2.m_fractional);
    float sum = (float)l_sum + ((float)s_sum) / 10;
    long integer_part = (long)sum;
    float temp = (sum - (float)integer_part)*10;
    short fract_part = (short)temp;
    DecFract sum1 (integer_part, fract_part);
    return sum1;
}

void Print(DecFract& obj)
{
    cout << obj.m_integer;
    cout << obj.m_comma;
    cout << obj.m_fractional;
    cout << endl;
}

int main()
{

    DecFract num = { 2,5 };
    num.Print1(); 
    DecFract num1(3, 4); 
    num1.Print1(); 
    DecFract sum = Add(num, num1); 
    Print(sum);
    return 0;
}

