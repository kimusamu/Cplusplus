#include <iostream>

using namespace std;

int getPrice(bool onSale)
{
	if (onSale) {
		return 10;
	}

	else {
		return 100;
	}
}

int main()
{
	float a1;

	sizeof(float);
	sizeof(a1);

	// comma operator
	int x = 3;
	int y = 10;
	int z = (++x, ++y); // ++x -> ++y -> int z = y;

	cout << x << endl;
	cout << y << endl;
	cout << z << endl;

	cout << endl;

	int a = 1, b = 10; // int a = 1, int b = 10
	int c;
	c = a, b; // c = a, 대입 먼저

	cout << c << endl;

	cout << endl;

	// conditional operator(arithmetric if)
	bool onSale = true;

	/*
	int price;

	if (onSale) {
		price = 10;
	}

	else {
		price = 100;
	}
	*/
	
	//const int price = (onSale == true) ? 10 : 100;

	const int price = getPrice(onSale);

	cout << price << endl;

	cout << endl;

	int xx = 5;
	cout << ((xx % 2 == 0) ? "even" : "odd") << endl;

	return 0;
}