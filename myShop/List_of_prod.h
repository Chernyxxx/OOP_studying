#pragma once
#include <algorithm>
#include <list>
#include "Product.h"


Product Milk{ "Milk", 1, 56.54, 150};
Product Bread{ "Bread", 2, 34.20, 220};
Product Veg_Oil{ "Oil_vegetable", 3, 95.43, 16};
Product Cheese{ "Cheese", 4, 245.30, 10};
Product Sausage{ "Sausages",5, 650.56, 10};



list <Product> list_of_prod{ Milk, Bread, Veg_Oil, Cheese, Sausage };

