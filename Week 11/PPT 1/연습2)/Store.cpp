#include "store.h"
float store::total() {
	float x = apple.show();
	x += pear.show();
	x += peach.show();
	x += mango.show();
	return x;
}
float store::Average() {
	float x = apple.show(),y=apple.many;
	x += pear.show();
	x += peach.show();
	x += mango.show();
	y += pear.many;
	y += peach.many;
	y += mango.many;
	return x / y;
}
