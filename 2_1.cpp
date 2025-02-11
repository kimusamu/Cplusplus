#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int j = 3;
	int i = -1;
	int k = 123;
	char a = 'H';

	cout << (uintptr_t)static_cast<void*>(&a) << endl;
	cout << (uintptr_t)static_cast<void*>(&i) << endl;

	cout << endl;

	bool bValue = true;
	char chValue = 'A';
	float fValue = 3.141592f;
	double dValue = 3.141592;

	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;

	// cout << fValue << endl;
	// cout << dValue << endl;
	// cout << sizeof(aValue) << endl;
	// cout << sizeof(aValue2) << endl;

	cout << sizeof(bool) << endl;
	cout << sizeof(bValue) << endl;

	int aa(123); // direct initialization
	int bb{ 123 }; // uniform initialization

	int ii = (int)3.141592; // copy initialization

	int k, l, m = 123; // ±ÇÀå X

	return 0;
}