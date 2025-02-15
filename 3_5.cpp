#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	cout << x << " " << y << endl;

	if (x == y) {
		cout << "equal" << endl;
	}

	if (x != y) {
		cout << "not equal" << endl;
	}

	if (x > y) {
		cout << "x is greater than y" << endl;
	}

	if (x < y) {
		cout << "x is less than y" << endl;
	}

	if (x >= y) {
		cout << "x is greater than or equal to y" << endl;
	}

	if (x <= y) {
		cout << "x is less than or equal to y" << endl;
	}

	cout << endl;

	double d1(100 - 99.99); // 0.001
	double d2(10 - 9.99); // 0.001

	cout << d1 << endl;
	cout << d2 << endl;

	if (d1 == d2) {
		cout << "equal" << endl;
	}

	else {
		cout << "not equal" << endl;

		if (d1 > d2) {
			cout << "d1 > d2" << endl;
		}

		else {
			cout << "d1 < d2" << endl;
		}
	}

	cout << d1 - d2 << endl;
	cout << abs(d1 - d2) << endl;

	cout << endl;

	const double epsilon = 1e-16;

	if (abs(d1 - d2) < epsilon) {
		cout << "approximately equal" << endl;
	}

	else {
		cout << "not equal" << endl;
	}

	return 0;
}