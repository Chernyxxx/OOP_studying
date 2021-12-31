#include "Product.h"


Product::Product(string name, int BarCode, Money price, int qnt):m_name(name),
m_BarCode(BarCode), m_price(price), m_quantity(qnt)
{
}

Product::Product()
{
}

//								GETTERS
//////////////////////////////////////////////////////////////////////////////
//

string Product::GetProductName()
{
	return m_name;
}

int Product::GetBarCode()
{
	return m_BarCode;
}

Money Product::GetProductPrice()
{
	return m_price;
}

int Product::GetQuantity()
{
	return m_quantity;
}


//								OTHER FUNCTIONS
//////////////////////////////////////////////////////////////////////////////
//

void Product::MinusQuantity(int qnt) // ��������� ���������� �������� �� �������� �����
{
	m_quantity = m_quantity - qnt;
}

Product Product::SetProduct()
{
	cout << " ������� ������������\t";
	string name;
	cin >> name;
	cout << "\n ������� ����� �����-����\t";
	int barCode;
	cin >> barCode;
	cout << "\n ������� ���� (����� �� ������ �������� ����� �����)\t";
	float price;
	cin >> price;
	cout << "\n ������� ����������\t";
	int qnt;
	cin >> qnt;
	
	return Product(name, barCode, price, qnt);
}


//								OVERLOADING
//////////////////////////////////////////////////////////////////////////////
//

std::ostream& operator<<(std::ostream& out, const Product& obj)
{

	out <<"- - - "<<obj.m_name << " - - -\n"
		<<"����� �����-����________ " <<obj.m_BarCode <<"\n"
		<<"����____________________ "<<obj.m_price<<"\n"
		<<"�������_________________ "<<obj.m_quantity<<" ��\n\n";
	return out;
}
