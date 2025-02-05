#include <iostream>

using namespace std;

// 1.1 객체, 변수, Left-values, Right-values, 초기화와 대입, 초기화 하지 않았을 때 문제점

int main()
{
	int x; // initialization
	x = 123; // assignment

	x = x + 2; // lvalue : 이름을 지니는 변수, rvalue : 임시변수

	cout << x << endl;
	cout << &x << endl; // & == ampersand

	return 0;
}