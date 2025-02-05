#include <iostream>
#include <algorithm>

using namespace std;

#define MY_NUM 9 // 문서 편집기 개념
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define LIKE_APPLE

void doSomething();

int main()
{
	cout << MY_NUM << endl;
	cout << MAX(1 + 3, 2) << endl;

	cout << max(1 + 3, 2) << endl;

	doSomething();

	return 0;
}