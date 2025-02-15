#include <iostream>

using namespace std;

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int x = 5;
	int y = ++x;
	int z = x--;

	cout << y << endl;
	cout << z << endl;

	cout << endl;

	int a = 6, b = 6;
	cout << a << " " << b << endl;
	cout << a++ << " " << b-- << endl;
	cout << a << " " << b << endl;
	// cout << ++a << " " << --b << endl;

	cout << endl;

	int c = 1;
	int e = 2;
	int d = add(c, ++c); // do not
	int f = add(c, ++e);
	cout << d << endl;
	cout << f << endl;

	cout << endl;

	int u = 1;
	// u = u++;
	++u;

	cout << u << endl;

	return 0;
}