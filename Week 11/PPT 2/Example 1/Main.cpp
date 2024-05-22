#include <iostream>
#include "Health.h"
using namespace std;
int main() {
	CHealth VIP(65), VIP2(80), * mario, * mickey;  // need for CHealth() to be public 
	mario = new CHealth(70);
	mickey = new CHealth();
	VIP.measureCel();
	VIP2.measureCel();
	mario->measureCel();
	mickey->measureCel();
	cout << "   VIP " << endl;
	cout << "age : " << VIP.age << endl;
	cout << "tempeture : " << VIP.cel << "C , " << VIP.faren << "F" << endl;
	cout << "   VIP2 " << endl;
	cout << "age : " << VIP2.age << endl;
	cout << "tempeture : " << VIP2.cel << "C , " << VIP2.faren << "F" << endl;
	cout << "   Mario " << endl;
	cout << "age : " << mario->age << endl;
	cout << "tempeture : " << mario->cel << "C , " << mario->faren << "F" << endl;
	cout << "   Mickey " << endl;
	cout << "age : " << mickey->age << endl;
	cout << "tempeture : " << mickey->cel << "C , " << mickey->faren << "F" << endl << endl;
	cout << "  size : " << sizeof(CHealth);
	getchar();
	return 1;
}
