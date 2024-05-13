#pragma once
class fruit {
public:
	// constructor
	fruit() {
		price = 200; many = 2; day = 12;// default values
	}
	fruit(float p, int n);
	fruit(float p, int n, int d);
	// member data
	int many, day;
	float price;
	// member function
	float show();
	void show_all();
};
