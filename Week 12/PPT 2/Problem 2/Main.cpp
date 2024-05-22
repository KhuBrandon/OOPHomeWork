#include <iostream>
using namespace std;
#include "Car.h"
#include "SUV.h"
#include "Engineer.h"
int main(int argc, char* argv[]) {
	SUV* newSUV = new SUV();
	newSUV->setPrice(45000);
	Engineer engineer;
	cout << "Price is " << engineer.getCarPrice(newSUV); // protected 접근
	cout << "dollars" << endl;
	cout << "Weight is "; 
	engineer.getWeight(newSUV); // private 접근
	cout << "Klaxon is " << endl;
	engineer.getKlaxon(newSUV); // public 접근
	delete newSUV;
	getchar();
	return 123;
}
