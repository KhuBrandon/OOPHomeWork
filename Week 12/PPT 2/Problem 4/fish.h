#pragma once
#include "animal.h"
using namespace std;
class fish : public animal {
public:
	fish() {
		nFin = 6;
	}
	int nFin;
	void swim() {
		cout << " I swim" << endl;

	}
};
