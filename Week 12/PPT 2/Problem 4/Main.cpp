// DougFO Play Jan. 19, 2022
#include <iostream>
#include "animal.h"
#include "human.h"
#include "bird.h"
#include "fish.h"
using namespace std;
int main() {
	animal a;
	human b;
	fish c;
	a.eat();
	b.eat();
	c.eat();
	b.walk();
	c.swim();
	return 123;
}
