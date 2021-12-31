#pragma once
#include <algorithm>
#include <list>
#include "Product.h"


Product Milk{ "Молоко", 1, 56.54, 150};
Product Bread{ "Хлеб", 2, 34.20, 220};
Product Veg_Oil{ "Масло", 3, 95.43, 16};
Product Cheese{ "Сыр", 4, 245.30, 10};
Product Sausage{ "Колбаса",5, 650.56, 10};



list <Product> list_of_prod{ Milk, Bread, Veg_Oil, Cheese, Sausage };

