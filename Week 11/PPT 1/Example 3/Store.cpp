#include "store.h"
float store::total() {
	float x = apple.show();
	x += pear.show();
	x += peach.show();
	x += mango.show();
	return x;
}
void store::operator *=(int n) {
	apple.many *= n;
	pear.many *= n;
	peach.many *= n;
	mango.many *= n;
}
