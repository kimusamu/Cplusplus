#include <iostream>

using namespace std;

bool IsEqual(int a, int b)
{
	bool result = (a == b);

	return result;
}

int main()
{
	bool b1 = true; // copy initialization
	bool b2(false); // direct initialization
	bool b3{ true }; // uniform initializatin

	b3 = false;

	cout << b1 << endl;
	cout << b2 << endl;
	cout << b3 << endl;

	cout << endl;

	cout << noboolalpha;

	cout << !true << endl;
	cout << !false << endl;

	cout << endl;

	cout << !b1 << endl;
	cout << !b2 << endl;

	cout << endl;

	cout << (true && true) << endl;
	cout << (true && false) << endl;
	cout << (false && true) << endl;
	cout << (false && false) << endl;

	cout << endl;

	cout << (true || true) << endl;
	cout << (true || false) << endl;
	cout << (false || true) << endl;
	cout << (false || false) << endl;

	cout << endl;

	if (3 > 1) {
		cout << "This is true" << endl;
		cout << "True Second Life" << endl;
	}

	else {
		cout << "This is false" << endl;
	}

	cout << endl;

	cout << boolalpha;
	cout << IsEqual(1, 1) << endl;
	cout << IsEqual(0, 3) << endl;

	cout << endl;

	if (0) {
		cout << "True" << endl;
 	}

	else {
		cout << "False" << endl;
	}

	cout << endl;

	bool bb; 

	cin >> bb;
	cout << boolalpha;
	cout << "your input : " << bb << endl; // 위험성 있는 코딩

	return 0;
}