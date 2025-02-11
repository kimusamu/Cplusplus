#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
	float f;
	double d;
	long double ld;

	cout << sizeof(f) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(ld) << endl;

	cout << endl;

	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl;

	cout << endl;

	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl;

	cout << endl;

	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;

	cout << endl;

	float ff(3.14); // 3.14 = 31.4 * 0.1
	
	cout << 3.14 << endl;
	cout << 31.4e-1 << endl;
	cout << 31.4e-2 << endl;
	cout << 31.4e1 << endl;
	cout << 31.4e2 << endl; // 31.4 * 100

	cout << endl;

	float fff(123456789.0f); // 10 significant digits

	cout << setprecision(16) << endl;
	cout << 1.0 / 3.0 << endl;

	cout << endl;

	cout << setprecision(9) << endl;
	cout << fff << endl;

	cout << endl;

	double dd(0.1);

	cout << dd << endl;
	cout << setprecision(17);
	cout << dd << endl;

	cout << endl;

	double d1(1.0);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	cout << setprecision(17);
	
	cout << d1 << endl;
	cout << d2 << endl;

	cout << endl;

	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << posinf << endl;
	cout << neginf << endl;
	cout << nan << endl;

	cout << endl;

	cout << posinf << " " << isinf(posinf) << endl;
	cout << neginf << " " << isinf(neginf) << endl;
	cout << nan << " " << isnan(nan) << endl;
	cout << 1.0 << " " << isnan(1.0) << endl;

	return 0;
}