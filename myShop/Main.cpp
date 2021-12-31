#include <iostream>
#include "Shop.h"
#include "List_of_prod.h"
#include <cstdlib>				// forsystem("cls")
#include <algorithm>
#include <list>
#include <Windows.h>			// for Sleep(int)
#include <conio.h>				// for _getch()
#define button1 49
#define button2 50
#define button3 51
#define button4 52
#define button5 53
#define button6 54
#define button7 55
#define button8 56
#define button9 57
#define button0 48
#define ESC 27

using namespace std;

void BackToMenu()
{
	cout << "\n\n ��� �������� � ���� ������� ESC ";
	int key;
	key = _getch();
	while (key != ESC)
	{
		key = _getch();
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	
	Shop myShop("��������", "��. ������ 10", "236-12-80", list_of_prod, (float)0.0); 
	while(true)
	{
		// SHOW MAIN MENU

		system("cls");
		cout << "\n\t������� <<��������>>\n\n";
		cout << " ���������� ����������� ____________ 1\n\n";
		cout << " ������� ����� _____________________ 2\n\n";
		cout << " ������� ����� _____________________ 3\n\n";
		cout << " ����������� ������ ________________ 4\n\n";
		cout << " ���������� ������� ________________ 5\n\n";
		cout << " ���������� � �������� _____________ 6\n\n";

		Product newProd;
		int choice;
		choice = _getch();
		while (choice != button1 && choice != button2 && choice != button3 && 
				choice != button4 && choice != button5 && choice != button6)
		{
			choice = _getch();
		}
		
		switch (choice)
		{

			// SHOW PRODUCT LIST

		case(button1): 
			system("cls");
			cout << "\n\t\t��C�������� ������� � �������\n\n"; 
			myShop.GetPriceList(list_of_prod);
			BackToMenu();
			break;

			// SELL PRODUCT

		case(button2):
			system("cls");
			cout << "\n\t\t������� �����\n\n";
 			myShop.SellProduct(list_of_prod);
			Sleep(2000);
			break;

			// ADD NEW PRODUCT TO THE LIST

		case(button3):
			system("cls");
			newProd = newProd.SetProduct();
			list_of_prod.push_back(newProd);
			cout << "\n\t ������� \n\n";
			Sleep(2000);
			break;

			// PRINT PRICE TAG

		case(button4):
			system("cls");
			myShop.PrintTag(list_of_prod); 
			Sleep(4000);
			break;
		case(button5):
			system("cls");
			cout << "\n ������� - " << myShop.GetDebt();
			BackToMenu();
			break;
		case(button6):
			system("cls");
			myShop.ShowInfo(); 
			BackToMenu();
			//break;
		//default:

		//	break;
		}
		
	}
	
		
	return 0;
}