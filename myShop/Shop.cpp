#include "Shop.h"


Shop::Shop(string name, string adress, string phoneNo, list <Product>& prod,
	float debt=(float)0.0)
	: m_name(name),
	m_adress(adress),  
	m_phoneNo(phoneNo),
	m_debt(debt)
{
	
}


//								GETTERS & SETTERS
////////////////////////////////////////////////////////////////////////////////
//


string Shop::GetShopName()
{
	return m_name;
}

string Shop::GetShopPhoneNo()
{
	return m_phoneNo;
}

string Shop::GetShopAdress()
{
	return m_adress;
}

float Shop::GetDebt()
{
	return m_debt;
}


void Shop::SetShopName(string name)
{
	m_name = name;
}

void Shop::SetShopPhoneNo(string phoneNo)
{
	m_phoneNo = phoneNo;
}

void Shop::SetShopAdress(string adress)
{
	m_adress = adress;
}



//								OTHER FUNC
/////////////////////////////////////////////////////////////////////////////////
//



void Shop::GetPriceList(list<Product>& obj)
{
	auto it = obj.begin();
	for (int i=0 ; i < obj.size(); i++)  
	{			
		cout << *it << endl;
		advance(it, 1);				// Move iter fom begin to eng
	}
}

list<Product>::iterator Shop::SearchByBarCode(list<Product> &obj)
{
	cout << "\n Введите номер на штрих-коде\t";
		
	list<Product>::iterator it=obj.begin();
	
	bool barCodeOK = false;
	while (!barCodeOK)
	{
		int barCode = InputINT();
		it = find_if(obj.begin(), obj.end(),
			[&barCode](Product& obj)
			{return obj.GetBarCode() == barCode; });
		if (it == obj.end())
		{
			cout << " Номер не найден! ";
			cout << " Введите другой номер!\n\n";
			barCodeOK = false;
		}
		else
		{
			cout << "\n    Выбранный продукт\n\n";
			cout << " " << *(it) << "\n";
			barCodeOK = true;
		}
	}
	barCodeOK = false;
	return  it;
}

void Shop::SellProduct(list<Product>& obj)
{
	float pricef; 
	list<Product>::iterator it;
	
	it = SearchByBarCode(obj);
	
	cout << " Укажите количество\t";
	Money price = (*it).GetProductPrice();
	int qnt = InputINT();
	
	cout << "\n К оплате = " << GetFloatPrice(price) * qnt << "\n\n";
	cout << " Оформить _____ ENTER\t";
	cout << " Отмена ______ ESC\n\n";
	
	int choice = EnterEscapeChoice();
	switch (choice)
	{
	case(ENTER):
		(*it).MinusQuantity(qnt);
		pricef = GetFloatPrice(price);
		m_debt = m_debt + pricef * qnt;
		cout << "\n\t УСПЕШНО \n\n";
		break;
	case(ESC):
		cout << "\n\t ОТМЕНЕНО \n\n";
		break;
	default:
		break;
	}
}

float Shop::GetFloatPrice(Money& obj)
{
	float ruble = obj.GetRouble();
	float kop = obj.GetKop();
	float result = ruble + kop;
	return  result;
}

void Shop::PrintTag(list<Product>& obj) 
{
	
	auto it = SearchByBarCode(obj);
	string name = (*it).GetProductName();
	Money price = (*it).GetProductPrice();
	cout << "\n Напечатать ______ ENTER\n";
	cout << " Отмена __________ ESC\n";

	int choice = EnterEscapeChoice();
	switch (choice)
	{
	case(ENTER):
		system("cls");
		cout << "\t\tПЕЧАТЬ ЦЕННИКА\n\n";
		cout << "----------------------------------\n";
		cout << "-------- " << name << " " << "\n\n";
		cout << "-------- " << price << " " << "\n\n";
		cout << "----------------------------------";
		break;
	case(ESC):
		break;
	default:
		break;
	}

}

void Shop::ShowInfo()
{
	
	cout << "----" << m_name << "----\n\n"
		<< "Адрес_____ " << m_adress << "\n\n"
		<< "Телефон___ " << m_phoneNo;
		
}

int Shop::InputINT()
{
	while (true)
	{
		int barCode;
		cin >> barCode;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else
			return barCode;
	}
}
int Shop::EnterEscapeChoice()
{
	int choice;
	choice = _getch();
	while (choice != ESC && choice != ENTER )
	{
		choice = _getch();

	}
	return choice;
}






				