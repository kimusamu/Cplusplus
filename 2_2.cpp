#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	short s = 1; // 2 bytes = 2 * 8bits = 16 bits
	int i = 1;
	long l = 1;
	long long ll = 1;

	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;

	cout << endl;

	cout << pow(2, sizeof(short) * 8 - 1) - 1 << endl;
	cout << numeric_limits<short>::max() << endl;
	cout << numeric_limits<short>::min() << endl;
	cout << numeric_limits<short>::lowest() << endl;

	s = 32767;
	s = s + 1; // 32768

	cout << s << endl; // overflow

	cout << endl;

	s = numeric_limits<short>::min();
	s = s - 1;

	cout << s << endl;

	cout << endl;

	unsigned int ii = -1;

	cout << ii << endl;

	cout << endl;

	int iii = 22 / 4;

	cout << iii << endl;
	cout << 22 / 4 << endl;
	cout << (float)22 / 4 << endl;

	return 0;
}