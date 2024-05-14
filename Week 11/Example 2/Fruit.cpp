#include<iostream>
#include "fruit.h"
using namespace std; 
float fruit::show() {
	return price * many;
}
fruit::fruit(float p, int n) {
	price = p;
	many = n;
}
void fruit::show_all() {
	cout << "price : " << price << endl;
	cout << "How many : " << many << endl;
}
