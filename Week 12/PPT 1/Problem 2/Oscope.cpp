#include "Oscope.h"

Oscope::Oscope() { X = 512; };
float Oscope::getVoltage() {
	if (!onoff) return 0;
	return (float)(rand() % 50) - 25.;
}
float Oscope::getCurrent() {
	if (!onoff) return 0;
	return (float)(rand() % 20) - 10.;
}
