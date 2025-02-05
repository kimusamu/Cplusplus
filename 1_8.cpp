#include <iostream>

using namespace std;

namespace MySpace1
{
	namespace InnerSpace
	{
		int my_func() 
		{
			return 0;
		}
	}

	int doSomething(int a, int b)
	{
		return a + b;
	}

}

namespace MySpace2
{
	int doSomething(int a, int b)
	{
		return a * b;
	}
}


int main()
{
	int a = 3, b = 4;

	using namespace MySpace1;
	cout << doSomething(a, b) << endl;

	// cout << MySpace1::doSomething(a, b) << endl;
	// cout << MySpace2::doSomething(a, b) << endl;

	using namespace MySpace1::InnerSpace;
	my_func();

	return 0;
}