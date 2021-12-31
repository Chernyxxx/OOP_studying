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

void Product::MinusQuantity(int qnt) // Уменьшает количество продукта на заданное число
{
	m_quantity = m_quantity - qnt;
}

Product Product::SetProduct()
{
	cout << " Введите наименование\t";
	string name;
	cin >> name;
	cout << "\n Введите номер штрих-кода\t";
	int barCode;
	cin >> barCode;
	cout << "\n Введите цену (рубли от копеек отделить через точку)\t";
	float price;
	cin >> price;
	cout << "\n Введите количество\t";
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
		<<"Номер штрих-кода________ " <<obj.m_BarCode <<"\n"
		<<"Цена____________________ "<<obj.m_price<<"\n"
		<<"Остаток_________________ "<<obj.m_quantity<<" шт\n\n";
	return out;
}
