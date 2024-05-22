#include <iostream>
#include "store.h"
using namespace std;
int main() {
	store A, B;
	B = store(3, 4, 5, 6, 1000, 2000, 2500, 5000);
	cout << "Size of Store A (add 2 fruits ;orange, lemon)" << endl;
	cout << "sizeof(A) = "<<sizeof(A) << endl;
	return 123;
}
