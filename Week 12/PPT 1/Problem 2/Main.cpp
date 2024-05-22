#include <iostream>
#include "TV.h"
#include "Oscope.h"
using namespace std;

int main() {
	TV tv1, tv2;
	Oscope os1, os2;
	cout << "(" << os1.X << " " << os1.Y << ")\n";
	os1.turnOn();
	cout << "  on/off " << os1.onoff << " " << os2.onoff << endl;

	cout << "   voltage \n";
	cout << os1.getVoltage() << " " << os2.getVoltage() << endl;

	os1.volumeControl();
	cout << "   volume \n";
	cout << os1.volume << endl;


	return 123;
}
