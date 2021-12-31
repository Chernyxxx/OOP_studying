#pragma once
#include "Product.h"
#include <algorithm>
#include <list>
#include <iostream>
#include <conio.h>
#define ENTER 13
#define ESC 27
using namespace std;

class Shop
{
private:
	string m_name;
	string m_adress;
	string m_phoneNo;
	float m_debt;


	//						 PRIVATE FUNCTIONS
	//////////////////////////////////////////////////////////////////
	//
	// Function searches product which corresponds to entered barcode
	list<Product>::iterator SearchByBarCode(list<Product>& obj);

	// Function convert Money type object to float
	float GetFloatPrice(Money& obj);

	// Function avoid adding any symbols exept numbers to console
	int InputINT();

	// Function used to confirm or cancel some action by pressing ENTER or ESC
	int EnterEscapeChoice();


	//								PUBLIC 
	//////////////////////////////////////////////////////////////////////////
	//

public:
	
	Shop(string name, string adress,string phoneNo, list <Product> & prod, float debt); 


	//							 GETTERS & SETTERS
	//////////////////////////////////////////////////////////////////////////
	//

	string GetShopName();
	string GetShopPhoneNo();
	string GetShopAdress();
	float GetDebt();
	void SetShopName(string name);
	void SetShopPhoneNo(string phoneNo);
	void SetShopAdress(string adress);

	//							OTHER PUBLIC FUNCTIONS
	//////////////////////////////////////////////////////////////////
	//
	//Functions used in main menu
	void GetPriceList(list<Product> &obj);
	void SellProduct(list<Product>& obj);
	void PrintTag(list<Product>& obj);
	void ShowInfo();
	
	

	

	
	
	 
	
};

