#include <iostream>
#include "fruit.h"
using namespace std;
int main() {
	fruit basic, pear, peach, mango;
	basic = fruit();
	cout << "Defaut value of fruit" << endl;
	basic.show_all();
	cout << "Total : " << basic.show() << endl << endl;
	pear = fruit(300, 5, 14);
	peach = fruit(1000, 5, 7);
	mango = fruit(700, 8, 3);
	cout << "Value of Pear" << endl;
	pear.show_all();
	cout << "Total : " << pear.show() << endl << endl;
	cout << "Value of Peach" << endl;
	peach.show_all();
	cout << "Total : " << peach.show() << endl << endl;
	cout << "Value of fruit" <<  endl;
	mango.show_all();
	cout << "Total : " << mango.show() << endl << endl;
	return 123;
}
