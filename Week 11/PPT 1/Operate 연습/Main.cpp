#include <iostream>
#include "store.h"
using namespace std;
int main() {
	store A, B, C, D;
	B = store(3, 4, 5, 6, 1000, 1500, 2000, 5000);
	A = store(1, 3, 5, 7, 1500, 2000, 2500, 6000);
	C = A + B;
	D = C - A;
	cout << "Value of B" << endl;
	cout << "  Apple" << endl;
	B.apple.show_all();
	cout << "  Pear" << endl;
	B.pear.show_all();
	cout << "  Peach" << endl;
	B.peach.show_all();
	cout << "  Mango" << endl;
	B.mango.show_all();
	cout << endl << "Value of C - A" << endl;
	cout << "  Apple" << endl;
	D.apple.show_all();
	cout << "  Pear" << endl;
	D.pear.show_all();
	cout << "  Peach" << endl;
	D.peach.show_all();
	cout << "  Mango" << endl;
	D.mango.show_all();
	return 123;
}
