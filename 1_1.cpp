#include <iostream>

using namespace std;

// 1.1 ��ü, ����, Left-values, Right-values, �ʱ�ȭ�� ����, �ʱ�ȭ ���� �ʾ��� �� ������

int main()
{
	int x; // initialization
	x = 123; // assignment

	x = x + 2; // lvalue : �̸��� ���ϴ� ����, rvalue : �ӽú���

	cout << x << endl;
	cout << &x << endl; // & == ampersand

	return 0;
}