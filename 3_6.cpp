#include <iostream>

using namespace std;

int main()
{
	// logical NOT
	bool x = true;
	cout << !x << endl;

	// logical AND
	bool x = true;
	bool y = false;
	cout << (x && y) << endl;

	bool hit = true;
	int health = 10;

	if (hit && health < 20) {
		cout << "die" << endl;
	}

	else {
		health -= 20;
	}

	// logical OR
	bool x = true;
	bool y = false;

	cout << (x || y) << endl;

	int v = 1;

	if (v == 0 || v == 1) {
		cout << "v is 0 or 1" << endl;
	}

	cout << endl;

	// short circuit evaluation
	int x = 1;
	int y = 2;

	if (x == 1 && y++ == 2) {
		// do something
	}

	// De Morgan's Law
	!(x && y);
	!x && !y;
	!(x || y);

	// XOR
	// false false false
	// false true true
	// true false true
	// true true false

	cout << (x != y) << endl;

	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool r1 = v1 || v2 && v3; // true
	bool r2 = (v1 || v2) && v3; // false
	bool r3 = v1 || (v2 && v3); // true

	return 0;
}