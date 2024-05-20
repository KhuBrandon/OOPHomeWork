#include <iostream>
using namespace std;
#include "Car.h"
#include "SUV.h"
#include "Engineer.h"
int main(int argc, char* argv[]) {
	SUV* newSUV = new SUV();
	newSUV->setPrice(45000);
	cout << "The wheels are " << newSUV->getWheels() << endl;
	Engineer engineer;
	cout << "Price is " << engineer.getCarPrice(newSUV) << "dollars" << endl;
	engineer.Klaxon(5); // public 확인
	engineer.CarSeat(6); // protected 확인
	engineer.Color(13); // private 확인
	delete newSUV;

	getchar();
	return 123;
}
