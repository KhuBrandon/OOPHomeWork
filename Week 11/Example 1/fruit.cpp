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
fruit::fruit(float p, int n, int d) {
	price = p;
	many = n;
	day = d;
}
void fruit::show_all() {
	cout << "price : " << price << endl;
	cout << "How many : " << many << endl;
	cout << "day : " << day << endl;
}
