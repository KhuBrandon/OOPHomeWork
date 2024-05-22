#pragma once
class fruit {
public:
	// constructor
	fruit() {
		price = 200; many = 2;// default values
	}
	fruit(float p, int n);
	// member data
	int many;
	float price;
	// member function
	float show();
	void show_all();
};
