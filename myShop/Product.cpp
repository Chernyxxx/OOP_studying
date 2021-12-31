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

void Product::MinusQuantity(int qnt) // ”меньшает количество продукта на заданное число
{
	m_quantity = m_quantity - qnt;
}

Product Product::SetProduct()
{
	cout << " Please enter the product name \t";
	string name;
	cin >> name;
	cout << "\n Please enter the barcode\t";
	int barCode;
	cin >> barCode;
	cout << "\n Please enter the price \n(rubles should be devided from kops by dot)\t";
	float price;
	cin >> price;
	cout << "\n Please enter the guantity\t";
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
		<<"Barcode number___________ " <<obj.m_BarCode <<"\n"
		<<"Price____________________ "<<obj.m_price<<"\n"
		<<"Quantity_________________ "<<obj.m_quantity<<" units\n\n";
	return out;
}
