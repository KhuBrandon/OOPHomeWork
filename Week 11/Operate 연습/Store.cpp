#include "store.h"
float store::total() {
	float x = apple.show();
	x += pear.show();
	x += peach.show();
	x += mango.show();
	return x;
}
store store::operator-(store& b) {
	store c;
	c.apple.many = apple.many - b.apple.many;
	c.pear.many = pear.many - b.pear.many;
	c.peach.many = peach.many - b.peach.many;
	c.mango.many = mango.many - b.mango.many;
	if (apple.price < b.apple.price) c.apple.price = apple.price;
	else  c.apple.price = b.apple.price;
	if (pear.price < b.pear.price) c.pear.price = pear.price;
	else  c.pear.price = b.pear.price;
	if (peach.price < b.peach.price) c.peach.price = peach.price;
	else  c.peach.price = b.peach.price;
	if (mango.price < b.mango.price) c.mango.price = mango.price;
	else  c.mango.price = b.mango.price;
	return c;
}
store store::operator+(store& b) {
	store c;
	c.apple.many = apple.many + b.apple.many;
	c.pear.many = pear.many + b.pear.many;
	c.peach.many = peach.many + b.peach.many;
	c.mango.many = mango.many + b.mango.many;
	if (apple.price < b.apple.price) c.apple.price = apple.price;
	else  c.apple.price = b.apple.price;
	if (pear.price < b.pear.price) c.pear.price = pear.price;
	else  c.pear.price = b.pear.price;
	if (peach.price < b.peach.price) c.peach.price = peach.price;
	else  c.peach.price = b.peach.price;
	if (mango.price < b.mango.price) c.mango.price = mango.price;
	else  c.mango.price = b.mango.price;
	return c;
}
