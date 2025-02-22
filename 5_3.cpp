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
		// �ζ��� �Լ��� �ٿ�� ������ ����� ����
		ans = (x >= 0) ? x : -x;
		x++;
	}

	cout << "ans = " << ans << " " << x << endl;

	// �Ϲ� �Լ� ȣ�� ����
	x = 0;
	ans = general(x++);
	cout << "general(x++) = " << ans << " " << x << endl;

	// C��� ��ũ�� ����
	x = 0;
	ans = unsafe(x++);
	cout << "unsafe(x++) = " << ans << " " << x << endl;

	// �ζ��� �Լ� ����
	x = 0;
	ans = safe(x++);
	cout << "safe(x++) = " << ans << " " << x << endl;

	// ���ǥ���� ����
	x = 0;
	ans = expr(x++);
	cout << "expr(x++) = " << ans << " " << x << endl;

	return 0;
}