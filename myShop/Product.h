#pragma once
//#include <string>
#include "Money.h"

using namespace std;

class Product
{
private:

	string m_name;  
	int m_BarCode;
	Money m_price;
	int m_quantity;
	
	//								PUBLIC 
	//////////////////////////////////////////////////////////////////////////
	//


public:
	Product();
	Product(string name, int BarCode, Money price, int quantity);

	//							GETTERS & SETTERS
	//////////////////////////////////////////////////////////////////////////
	//


	string GetProductName();
	int GetBarCode();
	Money GetProductPrice();
	int GetQuantity();
	


	//								OTHER PUBLIC FUNCTIONS
	//////////////////////////////////////////////////////////////////////////
	//

	void MinusQuantity(int qnt);
	Product SetProduct();

	//								OVERLOADING
	//////////////////////////////////////////////////////////////////////////
	//
	
	friend std::ostream& operator<<(std::ostream& out, const Product& obj);
	
};

