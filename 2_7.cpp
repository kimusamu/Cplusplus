#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
	char c1(65);
	char c2('A'); // string

	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

	cout << endl;

	// C style
	cout << (char)65 << endl;
	cout << (int)'A' << endl;

	cout << endl;

	// Cpp style
	cout << char(65) << endl;
	cout << int('A') << endl;

	cout << endl;

	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	cout << endl;

	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;
	cout << ch << endl;

	cout << endl;

	char cc1(65);

	cin >> cc1;
	cout << cc1 << " " << static_cast<int>(cc1) << endl;

	cout << endl;

	char cc11(65);

	cout << sizeof(char) << endl;
	cout << numeric_limits<char>::max() << endl;
	cout << numeric_limits<char>::lowest() << endl;

	cout << endl;
	 
	cout << sizeof(unsigned char) << endl;
	cout << (int)numeric_limits<unsigned char>::max() << endl;
	cout << (int)numeric_limits<unsigned char>::lowest() << endl;

	cout << endl;

	cout << int('\n') << endl;
	cout << "This is first line \nsecond line" << endl;
	cout << "This is first line " << flush;
	cout << "second line" << endl;

	cout << endl;

	cout << int('\t') << endl;
	cout << "This is first line \tsecond line \" \? \a" << endl;

	wchar_t c;
	char16_t c3;
	char32_t c6;

	return 0;
}