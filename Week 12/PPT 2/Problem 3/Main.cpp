#include <iostream>
using namespace std;
#include "Car.h"
#include "SUV.h"
#include "Engineer.h"
int main(int argc, char* argv[]) {
	Car * newSUV = new SUV(); 
	cout << "Maximum people : ";
	newSUV->people();
	delete newSUV;
	getchar();
	return 123;
}
