#include <iostream>
using namespace std;
#include "Car.h"
#include "SUV.h"
int main() {
	SUV* newSUV = new SUV();
	cout << "Weight of the car : "; //public 확인
	newSUV->weight(1000);
	cout << "Number of seat in car : ";//protected 확인
	newSUV->CarSeat(5);
	cout << "Color of the car : ";//private 확인
	newSUV->Color(10);
	delete newSUV;
	return 0;
}
