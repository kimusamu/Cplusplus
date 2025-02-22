#include <iostream>

using namespace std;

int general(int i)
{
	return i >= 0 ? i : -i;
}

#define unsafe(i) ((i) >= 0 ? (i) : -(i))

inline int safe(int i)
{
	return i >= 0 ? i : -i;
}

constexpr int expr(int i)
{
	return i >= 0 ? i : -i;
}

int main()
{
	int ans, x = 0;

	{
		// 인라인 함수는 다움과 동일한 기능을 제공
		ans = (x >= 0) ? x : -x;
		x++;
	}

	cout << "ans = " << ans << " " << x << endl;

	// 일반 함수 호출 실행
	x = 0;
	ans = general(x++);
	cout << "general(x++) = " << ans << " " << x << endl;

	// C언어 매크로 실행
	x = 0;
	ans = unsafe(x++);
	cout << "unsafe(x++) = " << ans << " " << x << endl;

	// 인라인 함수 실행
	x = 0;
	ans = safe(x++);
	cout << "safe(x++) = " << ans << " " << x << endl;

	// 상수표현실 실행
	x = 0;
	ans = expr(x++);
	cout << "expr(x++) = " << ans << " " << x << endl;

	return 0;
}