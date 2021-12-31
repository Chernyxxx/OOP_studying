#include <iostream>
#include "Shop.h"
#include "List_of_prod.h"
#include <cstdlib>			// for system("cls")
#include <algorithm>
#include <list>
#include <Windows.h>		// for Sleep(int)
#include <conio.h>			// for _getch()
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

// Function shows menu screen after user press ESC
void BackToMenu()
{
	cout << "\n\n Back to MENU - press ESC ";
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
	
	Shop myShop("MyShop", "Straight street, 10", "236-12-80", list_of_prod, (float)0.0); 
	while(true)
	{
		// SHOW MAIN MENU

		system("cls");
		cout << "\n\tProduct shop <<MY SHOP>>\n\n";
		cout << " Show product list_________________ 1\n\n";
		cout << " Sell product _____________________ 2\n\n";
		cout << " Recieve product __________________ 3\n\n";
		cout << " Print a price tag ________________ 4\n\n";
		cout << " Show revenue _____________________ 5\n\n";
		cout << " About shop _______________________ 6\n\n";

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
			cout << "\n\t\tPRICELIST\n\n"; 
			myShop.GetPriceList(list_of_prod);
			BackToMenu();
			break;

			// SELL PRODUCT

		case(button2):
			system("cls");
			cout << "\n\t\tSELL PRODUCT\n\n";
 			myShop.SellProduct(list_of_prod);
			Sleep(2000);
			break;

			// ADD NEW PRODUCT TO THE LIST

		case(button3):
			system("cls");
			newProd = newProd.SetProduct();
			list_of_prod.push_back(newProd);
			cout << "\n\t Product added \n\n";
			Sleep(2000);
			break;

			// PRINT PRICE TAG

		case(button4):
			system("cls");
			myShop.PrintTag(list_of_prod); 
			Sleep(4000);
			break;

			// SHOW REVENUE
		case(button5):
			system("cls");
			cout << "\n REVENUE - " << myShop.GetDebt();
			BackToMenu();
			break;

			// SHOW INFO
		case(button6):
			system("cls");
			myShop.ShowInfo(); 
			BackToMenu();
			break;
		}
		
	}
	
		
	return 0;
}