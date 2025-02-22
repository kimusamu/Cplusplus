#include <iostream>
#include <string>

using namespace std;

/*
int main()
{
	int orig = 5; // ����� ����
	int& ref = orig; // ref�� orig�� ���� ���� ����
	int* pos = &ref; // orig ������ �ּҸ� pos �����Ϳ� ����
	cout << "ref = " << ref << ", pos = " << *pos << endl;
}
*/

/*
int funcX()
{
	return 42;
}

int main()
{
	int(&xFunc)() = funcX;
	int(*f)() = funcX;

	int x = xFunc();

	cout << "x : " << x << ", " << f() << endl;
}
*/

/*
string id;

// ��ȯ ������ Ÿ���� ���ڿ� ����
string& GetId()
{
	// ���� ������ ���� ��ȯ �ȵ�
	// ���� ������ ��ȯ �� ���Ŀ� �Ҹ�ǹǷ� ������ ����� �� ����
	return id;
}

// �۾������ ���� ��ȯ ���� �� ����
void square(int x, int& result)
{
	result = x * x;
}

int main()
{
	int x;
	square(10, x);

	cout << "x = " << x << endl;

	string& s = GetId(); // ��ȯ�Ǵ� ���� ������ ������ ����
	s = "Hello World";

	cout << "s = " << s << endl;
}
*/

struct Person
{
	Person(string n) {
		name = n;
	}

	string name;
};

struct Student : public Person
{
	// Person ��ü ���� + u�� id�� �й� �ο�
	Student(string i, int n) : Person(i) {
		id = n;
	}

	int id;
};

int main()
{
	// Student Ÿ���� ���� ����
	Student d("�̼���", 2013);

	// ��ĳ���� ����Ͽ� Student Ŭ���� Ÿ���� ��ü�� ���� Person Ŭ���� Ÿ���� ���� ��ȯ
	Person& b = d;

	// �ٽ� ���� Ŭ������ ������ ĳ����(��ȯ) �Ѵ�
	Student& d1 = (Student&)b;
	cout << d.name << ", " << b.name << ", " << d1.name << endl;

	// �ּ� ��½�, ��� ���� �ּ� ���
	cout << &d << ", " << &b << ", " << &d1 << endl;

	Student dd("����", 2039);
	
	// ���� Ŭ���� Ÿ���� ������ ���� ����
	Person bb = (Person)dd;
	cout << bb.name << endl;

	// dd ������ bb ������ ���� �ٸ� �ּҸ� ����Ų��(���� ����)
	cout << &dd << ", " << &bb << endl;

	// Person ��ü�κ��� Student ��ü�� �ٿ�ĳ��Ʈ �Ұ�
	// Student dd2 = (Student)bb;
}