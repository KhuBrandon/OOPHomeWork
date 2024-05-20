#include<iostream>
#include"fish.h"
using namespace std;
fish::fish() {
	nFin = 6;
}
void fish::swim() {
	cout << nLegs <<" legs"<< endl;
	cout << nFin <<" fins"<< endl;
}
