#include <iostream>

using namespace std;

/*
void print(int i)
{
	cout << "int : " << i << endl;
}

void print(double f)
{
	cout << "float : " << f << endl;
}

void print(const char* c)
{
	cout << "const char : " << c << endl;
}

void print(char* c)
{
	cout << "char * : " << c << endl;
}

// template <typename T>
// void print(T c)
// {
//     cout << typeid(T).name() << " : " << c << endl;
// }

int main()
{
	print(5);
	print(500.264);
	print("Hello World");

	return 0;
}
*/

// �Ʒ� temp() �Լ��� �Լ� ������Ÿ�� ������ ���� ��� ���� �Լ��� �ٸ��� ���� ����
void temp(int, double, const char*);
void temp(int i = 4, double f = 3.141592, const char* c = "");
void m();

int main()
{
	m();
	temp(600); // temp(600, 3.141592, "")�� ����
	
	return 0;
}

// m() �Լ� ����
void m()
{
	// m() �Լ����� temp() �Լ��� ����Ʈ �μ��� �Ʒ��� ���� �ٽ� �����Ͽ� ��� ����
	void temp(int, double = 1.0, const char* = "Hello!");
	temp(4, 6.1, "Hello What?");
	temp(64); // temp(64, 1.0, "Hello!");�� ���� �� ȣ��
}

// temp() �Լ� ����
void temp(int i, double f, const char* c)
{
	cout << "���� : " << i << endl;
	cout << "�Ǽ� : " << f << endl;
	cout << "���� : " << c << endl;
	cout << endl;
}