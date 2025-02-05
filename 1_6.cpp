#include <iostream>

using namespace std;

int add(int a, int b); // forward declaration
int mul(int a, int b);
int sub(int a, int b);

int main()
{
	int a = 1, b = 2;

	cout << add(a, b) << endl;
	cout << mul(a, b) << endl;
	cout << sub(a, b) << endl;
}

// definition
int add(int a, int b)
{
	return a + b;
}

int mul(int a, int b) {
	return a * b;
}

int sub(int a, int b) {
	return a - b;
}
