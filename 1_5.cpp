#include <iostream>

using namespace std;

// 리터럴, 피연산자, 단항, 이항, 삼항

int main()
{
	int x = 2; // x is a variable, 2 is a literal
	// assignment

	cout << 1 + 2 << endl; // 1 and 2 is literal,

	cout << x + 2 << endl; // operand

	cout << endl;

	// 조건 연산자는 C++의 유일한 삼항 연산자
	int y = (x > 0) ? 1 : 2;

	cout << y << endl;
}