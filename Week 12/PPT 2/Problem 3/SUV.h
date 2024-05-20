#pragma once
#include "Car.h"
class SUV : public Car {
private:
	int spareWheels;
	void Color(int); // private 추가
public:
	void klaxon(int);
	void setSparewheels(int);
	int getSparewheels();
	float getTotalPrice();
	void people(); // virtual 추가
};
