#include "SUV.h"
#include <iostream>
void SUV::setSparewheels(int ii) {
	spareWheels = ii;
}
int SUV::getSparewheels() {
	return spareWheels;
};
float SUV::getTotalPrice() {
	return (this->wheels * 100.0 + this->price);
}
void SUV::klaxon(int ii) {
	for (int i = 0; i < ii; i++) {
		std::cout << "Beep\n";
	}
}
void SUV::Color(int n) { // private 추가
	if (n % 3 == 0) std::cout << "White" << std::endl;
	else if (n % 3 == 1) std::cout << "Black" << std::endl;
	else std::cout << "Blue" << std::endl;
}
