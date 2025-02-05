#include <iostream>

using namespace std;

void doSomething(int y)
{
	y = 123;
	cout << y << " " << &y << endl;
}

int main()
{
	int x = 0;

	cout << x << " " << &x << endl;

	{
		x = 1;

		cout << x << " " << &x << endl;
	}

	{
		int x = 2; // 다른 메모리, 이름은 똑같지만 주소는 다름

		cout << x << " " << &x << endl;
	}

	cout << x << " " << &x << endl;

	{
		// 지역변수는 영역을 벗어나면 사용불가
		// 지역변수가 차지하고 있던 메모리는 그 지역 변수가 영역을 벗어날 때 Stack Memory로 반납
		// 반납된 메모리는 다음 지역변수가 사용할 수 있도록 대기

		int x = 3;

		cout << x << " " << &x << endl;
	}

	cout << endl;
	cout << endl;

	/////////////////////////////////////////////////////

	int y = 0;

	cout << y << " " << &y << endl;
	doSomething(y);
	cout << y << " " << &y << endl;

	return 0;
}

