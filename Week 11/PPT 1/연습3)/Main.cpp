#include <iostream>
using namespace std;
class A {
public:
	A() : ii(10) { M++; }
	A(int x) : ii(x) { M++; }
	int ii;
	static int M;
};
int A::M = 0;
int main() {
	A c, * bb[3];
	c = A(100);       // reconstruct
	bb[0] = new A();  // ‘new’ returns a pointer. 
	bb[1] = &c;  // address of an object
	bb[2] = new A[5];// ‘new’ returns a pointer of an array 
	cout << c.ii << " ";
	cout << bb[0]->ii << " ";
	cout << bb[1]->ii << " ";
	cout << bb[2]->ii << " ";
	cout << A::M << endl;
	return 123;
}
