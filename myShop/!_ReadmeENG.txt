This project is a console application, which is simple
simulation of application for food shop management.
Next functions are available for this app:
1. View product list;
2. Sell product from a list;
3. Add product to the list;
4. Print price tag;
5. View revenue;
6. View shop info (address & phone number).

Three classes are being used in application:
Shop, Product and Money. Also STL list 
 Used. It is located at separate file.
All classes separated to 2 files -  < >.h & < >.cpp.
Classes has no links by inheritance,
friend and inner classes does not exist too.

Class Shop has private fields:
- name of shop;
- address of shop;
- phone number of shop;
- revenue;
Also class Shop includes public methods, which are used when 
corresponded menu string is choosed, and also getters, setters, 
and several internal methods.

Class Product has following private fields:
- name of product;
- barcode number
- price;
- quantity; 

Also class Product contains getters, setters & several 
public methods. General method of this class is "SetProduct",
which allows to user add new product to the list .

Class Money provides a products price as ’’rub ’’kop.
This is used for print out price tags.

Wrong input protection is added to code, but some points is not 
completely finished. For example, you can sell more products then 
exist. But I prefer to stop, and leave it like it is, because
the purpose of that project was getting skills working with classes
and knowleges in OOP.

Best whishes, Dmitry.


