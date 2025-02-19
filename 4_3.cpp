#pragma warning(disable: 4996)

#include <iostream>
#include <string>

using namespace std;

/*
struct Something
{
	static int s_value; // ���� ��� ����
	static int getSValue() { return s_value; } // ���� ��� �Լ�

	int value; // �Ϲ� ��� ����
	int getValue() { return value; } // �Ϲ� ��� �Լ�
};

int Something::s_value = 1;
// ���� ��� ���� �ʱ�ȭ -> ���� Ȯ�� ������ ���

int main()
{
	cout << Something::getSValue() << endl;
	// ���� ��� �Լ��� ����ü�� ����� ������ ������ ���� ����

	Something s = { 100 };
	// ����ü�� �Ϲ� ��� ������ ���� ����� �Բ� �̷� ������� ���� ����

	cout << s.getSValue() << ", " << s.getValue() << endl;
	// ���� ��� �Լ�, �Ϲ� ��� �Լ� �����ϰ� �Լ� ȣ��
}
*/

/*
union DataValue01
{
	int v_int;
	float v_float;
	char v_string[4];
};

struct DataValue02
{
	int v_int;
	float v_float;
	char v_string[4];
};

int main()
{
	cout << "Union Data : " << sizeof(DataValue01) << endl;
	cout << "Struct Data : " << sizeof(DataValue02) << endl;
}
*/

// ������ Ÿ�� �� ���
#define None 1
#define Integer 2
#define Float 3
#define String 4

// ���� �޸� ������ ����, �Ǽ�, ���ڿ� ����
union DataValue
{
	int v_int;
	float v_float;
	char* v_string;
};

struct DataNode
{
	// �ֿܼ��� �޴� ������ ������ Ÿ�� �ִ� ����
	int type;
	DataValue value;

	// �� �Լ��� ���� �ԷµǴ� ���ڸ� �޾� ����, �Ǽ�, ���ڿ��� ����
	// �Ʒ� type ������ value ������ �����͸� �Է½��� �ִ� ����� ��
	void read_some_input()
	{
		char* p;

		// �Է� ���� �ִ� 100 -> string Ÿ������ ��°� ����
		char s[100];
		cout << "����, ����, �Ǽ� �Է� : ";
		cin >> s;

		// �Է� ���ڰ� ����?
		long l = strtol(s, &p, 10);

		if (*p == 0) {
			type = Integer;
			value.v_int = l;

			return;
		}

		// �Է� ���ڰ� �Ǽ�?
		float f = strtof(s, &p);

		if (*p == 0) {
			type = Float;
			value.v_float = f;

			return;
		}

		// �� �� �ƴϸ� String
		type = String;

		// \0 �߰� �� ���ڿ� ����
		rsize_t len = strlen(s) + 1;
		value.v_string = (char*)malloc(len);
		strcpy(value.v_string, s);
	}

	// malloc() ȣ��� ���� �� �޸� �Ҵ� -> free�� ���� ����
	void free_string()
	{
		if (String == type) {
			free(value.v_string);
		}
	}
};

int main()
{
	// DataNode ����ü Ÿ�� ���� ����
	DataNode inputData;
	inputData.read_some_input();

	// type�� ���� ���� �� ������ ���
	switch (inputData.type) {
		case Integer:
			cout << "Integer : " << inputData.value.v_int << endl;
			break;

		case Float:
			cout << "Float : " << inputData.value.v_float << endl;
			break;

		case String:
			cout << "String : " << inputData.value.v_string << endl;
			break;
	}

	// �۾� �Ϸ� �� ���ڿ� �Ҵ� �� free �ǽ�
	inputData.free_string();
}