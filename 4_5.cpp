#include <iostream>

using namespace std;

/*
int main()
{
	int a = 10;
	cout << "a : " << a << endl;

	int b(20);
	cout << "b : " << b << endl;

	int c{ 30 };
	cout << "c : " << c << endl;

	int d = int(40);
	cout << "d : " << d << endl;

	int e();
	if (e) {
		cout << "e : " << e << endl;
	} // not good

	int f = int();
	cout << "f : " << f << endl;

	int g = { 50 };

	int* h = new int;
	cout << "*h : " << *h << endl;

	int* i = new int();
	cout << "*i : " << *i << endl;

	int* j = new int(60);
	cout << "*j : " << *j << endl;

	bool ok = true;
	cout << boolalpha << ok << endl;
	cout << noboolalpha << ok << endl;
}
*/

struct Data
{
	/*
	Data(int a, const char* n, int b) {
		age = a;

		strncpy(name, n, sizeof(name) - 1);
		name[sizeof(name) - 1] = '\0';
		or
		strcpy(name, n);

		balance = b;
	} ����� ���� ������

	Data(){
	age = 0;
	memset(name, 0, 100);
	balance = 0;
	} ����Ʈ ������
	*/

	// ��� ����
	int age;
	char name[100];
	int balance;
};

void Print(Data user)
{
	cout << user.age << ", " << user.name << ", �ܾ� : " << user.balance << endl;
}

int main()
{
	// Data user01 = 21; -> ���� �߻�
	// Data user02(33, "����", 20000); -> ����ü ������ ���� �����ؾ���
	Data user03{ 53, "����", 20000 };
	Print(user03);

	// Data user04 = Data(45, "������", 46000); -> ����ü ������ ��������

	Data user05();

	// �ʱ�ȭ O
	Data user06 = Data();
	Print(user06);

	Data user07 = { 21, "�ڹڹ�", 10000 };
	Print(user07);

	// �ʱ�ȭ X, �������� �̻��� ��, ���⼱ ���� �߻�
	// Data user08;
	// Print(user08);

	// �ʱ�ȭ X �̻��� ��
	Data* user_08 = new Data;
	Print(*user_08);

	// �ʱ�ȭ O
	Data* user_09 = new Data();
	Print(*user_09);
}