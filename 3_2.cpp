#include <iostream>

using namespace std;

int main()
{
	int x = 6;
	int y = 4;
	int z = x % y;

	cout << x / y << " " << z << endl;
	cout << float(x) / y << endl;
	cout << x / float(y) << endl;
	cout << float(x) / float(y) << endl;

	cout << endl;

	cout << -5 / 2 << " " << -5 % 2 << endl;

	cout << endl;

	int z = x;
	z += y; // z = z + y;

	return 0;
}