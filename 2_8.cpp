#include <iostream>

using namespace std;

int main()
{
	float pi = 3.14;
	int i = (unsigned int)1234;

	unsigned int n = 5u;
	long n2 = 5L;
	double d = 6.0e-10;

	// Decimal	: 0 1 2 3 4 5 6 7 8 9 10
	// Octal	: 0 1 2 3 4 5 6 7 10 11 12 13
	// Hexa		: 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

	// 0011 1010 1111 1111
	// 3A7F

	int y = 012;
	int x = 0xF;
	cout << x << endl;

	cout << endl;

	int xx = 0b1011'1111'1010;
	cout << xx << endl;

	cout << endl;

	const int price_per_item = 10;
	int num_items = 123;
	int price = num_items * price_per_item; // 10 is ...

	return 0;
}