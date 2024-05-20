#include <iostream>
using namespace std;
#include "Car.h"
#include "SUV.h"
#include "Engineer.h"
int main(int argc, char* argv[]) {
	SUV* newSUV = new SUV();
	cout << "   With Virtual" << endl; // With virtual
	cout << "Maximum people : ";
	newSUV->people();
	cout << "   Without Virtual" << endl; // Without virtual
	cout << "Maximun people : ";
	newSUV->people();
	delete newSUV;

	getchar();
	return 123;
}
