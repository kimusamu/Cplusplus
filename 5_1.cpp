#include <iostream>
#include <vector>

using namespace std;

/*
void f(int* pi)
{
	cout << "����" << endl;
}

void f(double* pd)
{
	cout << "�Ǽ�" << endl;
}

void f(nullptr_t nullp)
{
	cout << "null ptr" << endl;
}

int main()
{
	int* pi = new int();
	double* pd = new double();

	f(pi);
	f(pd);
	f(nullptr);
	// �Ʒ��� ���� 3�� �Լ� ��� ��� �Լ��� ����Ű�Ƿ� ���� �߻�
	// f(NULL);

	// �Ʒ� delete��� �����ڸ� ����Ͽ� �տ��� new �����ڷ� �Ҵ���� �޸𸮸�
	// �ü���� ��ȯ�ϴ� ����� �����Ѵ�
	delete pi;
	delete pd;
}
*/

/*
int calcConstant()
{
	int foo = 0;
	cout << "�ʱⰪ �Է� : ";
	cin >> foo;
	return foo;
}

int main()
{
	const int x = calcConstant();

	cout << x << endl;

	return 0;
}
*/

int calcConstant()
{
	int foo = 0;
	cout << "�ʱⰪ �Է� : ";
	cin >> foo;
	return foo;
}

int main()
{
	const int maxarray = calcConstant();
	// char store[maxarray]; �������� ��� �Ұ�
	// char* store = new char[maxarray]; // �����Ҵ� �ؾ���
	vector<char> store(maxarray); // vector ���� �� ����
	

	cout << "���ڿ� �Է� : ";
	cin >> store.data();

	cout << maxarray << " " << store.data() << endl;

	// delete[] store; // �����Ҵ� �� ���� �ʼ�
	return 0;
}