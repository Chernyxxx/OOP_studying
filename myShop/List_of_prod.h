#pragma once
#include <algorithm>
#include <list>
#include "Product.h"


Product Milk{ "������", 1, 56.54, 150};
Product Bread{ "����", 2, 34.20, 220};
Product Veg_Oil{ "�����", 3, 95.43, 16};
Product Cheese{ "���", 4, 245.30, 10};
Product Sausage{ "�������",5, 650.56, 10};



list <Product> list_of_prod{ Milk, Bread, Veg_Oil, Cheese, Sausage };

