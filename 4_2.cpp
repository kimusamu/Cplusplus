#include <iostream>
#include <string>

using namespace std;

extern int x;
// extern "C++" int x
extern "C" int y;
// extern "C" {extern int y}
extern "C" { int z; }

void Print_Int(int x)
{
	cout << x << " �μ��� " << (x ? "��" : "����") << "�Դϴ�." << endl;
}

void Print_Bool(bool x)
{
	cout << x << " �μ��� " << (x ? "��" : "����") << "�Դϴ�." << endl;

	// std::boolalpha�� ȭ�� ��� �� 1�� 0�� �ƴ� true�� false�� ���ڷ� ����� �ִ� ����� �Ѵ�.
	cout << "bool Ÿ���� �����ʹ�  " << boolalpha << x << "�� " << !x << "�� ǥ���� �� �ֽ��ϴ�. " << endl;
}

int main()
{
	int value = 5;

	int* pos = &value; // pos ������ �����ͷ� value ������ ����Ű�� �ּҸ� ����
	char str[] = "Hello";
	char* ptr = str;

	// MyString* obj = new MyString("������ ����");
	// ��ü ���� ��� ��� ����� ������

	///////////////////////////////////////////////////////////////////////////////////

	// int const* a, * b;
	// const int* a, * b;
	// a�� ����Ű�� ������� �����ʹ� ������ ���
	 
	// int* a, const* b;
	// b�� ����Ű�� ������� �����ʹ� ������ ���
	
	// int* const a;
	// a ������ ����Ű�� �޸� �ּҴ� ������ ���
	
	// static int* p;
	// static �����ڰ� int Ÿ�� �տ� �����Ͽ� p �����ʹ� ���� Ÿ���̶�� ���

	///////////////////////////////////////////////////////////////////////////////////

	auto name = "Seoul";
	int foo = 0;
	auto bar = foo;
	// or decltype(foo) bar;, auto�� �ʱ�ȭ�� �ʼ�

	///////////////////////////////////////////////////////////////////////////////////
	
	/*
	bool ok = true;
	bool not_ok = false;

	Print_Int(100);
	Print_Bool(ok);

	cout << not_ok << " " << noboolalpha << not_ok << endl;

	boolalpha(cout);
	cout << not_ok << endl;

	bool is_true;
	cin >> boolalpha >> is_true;
	cout << is_true << " = " << (is_true == true) << endl;
	*/
	
	///////////////////////////////////////////////////////////////////////////////////

	char en[] = "Hello, World!";
	cout << "char " << en << endl;

	cout << "�Է� ���� : ";
	cin >> en;

	for (int i = 0; en[i]; ++i) {
		cout << (char)en[i];
	}

	cout << endl;

	char wc1[] = "�ѱ�ȭ �۾�";
	cout << wc1 << endl;

	int i = 0;

	while (wc1[i]) {
		cout << (char)wc1[i];
		++i;
	}

	cout << endl;

	const char* wc2 = "�ѱ�ȭ �۾�";
	cout << wc2 << ", ���� ũ�� : " << strlen(wc2) << endl;

	return 0;
}