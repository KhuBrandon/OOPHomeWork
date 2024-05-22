#include <iostream>
#include "store.h"
using namespace std;
int main() {
	store A, B;
	B = store(3, 4, 5, 6, 1000, 2000, 2500, 5000);
	A *= 2;
	B *= 5;
	cout << "Changed value of Store A" << endl;
	cout << "   Apple" << endl;
	A.apple.show_all();
	cout << "   Pear" << endl;
	A.pear.show_all();
	cout << "   Peach" << endl;
	A.peach.show_all();
	cout << "   Mango" << endl;
	A.mango.show_all();
	cout << endl;
	cout << "Changed value of Store B" << endl;
	cout << "   Apple" << endl;
	B.apple.show_all();
	cout << "   Pear" << endl;
	B.pear.show_all();
	cout << "   Peach" << endl;
	B.peach.show_all();
	cout << "   Mango" << endl;
	B.mango.show_all();
	return 123;
}
