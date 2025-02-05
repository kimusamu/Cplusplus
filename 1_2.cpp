#include <iostream> // cout, cin, endl ...
#include <cstdio> // printf

using namespace std;

int main()
{
	int x = 1024;
	double pi = 3.141592;

	cout << "I love this lecture!\n";
	cout << "x is " << x << " pi is " << pi << endl; // ÁÙ¹Ù²Þ

	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << "\t" << "cdef" << endl; // Tap

	cout << "\a"; // Audio

	cout << "Before Your Input, x was " << x << endl;

	cin >> x;

	cout << "Your Input is " << x << endl;

	return 0;
}