#include <iostream>

using namespace std;

/*
void swap(int a, int b)
{
	int c(a);
	a = b;
	b = c;
}

int main()
{
	int x = 10, y = 20;
	swap(x, y);
	cout << "x : " << x << "y : " << y << endl;

	return 0;
}
*/

/*
void swapref(int* a, int* b)
{
	int c(*a);
	*a = *b;
	*b = c;
}

int main()
{
	int x = 10, y = 20;
	swapref(&x, &y);
	cout << "x : " << x << " y : " << y << endl;
}
*/

void swapref(int& a, int& b)
{
	int c(a);
	a = b;
	b = c;
}

int main()
{
	int x = 10, y = 20;
	swapref(x, y);
	cout << "x : " << x << " y : " << y << endl;
}