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
		int x = 2; // �ٸ� �޸�, �̸��� �Ȱ����� �ּҴ� �ٸ�

		cout << x << " " << &x << endl;
	}

	cout << x << " " << &x << endl;

	{
		// ���������� ������ ����� ���Ұ�
		// ���������� �����ϰ� �ִ� �޸𸮴� �� ���� ������ ������ ��� �� Stack Memory�� �ݳ�
		// �ݳ��� �޸𸮴� ���� ���������� ����� �� �ֵ��� ���

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

