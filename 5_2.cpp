#include <iostream>

using namespace std;

struct Account
{
	Account(const char* id, const char* names, int bal) {
		strcpy(account, id);
		strcpy(name, names);
		balance = bal;
	}

	void Print() const {
		cout << "���� : " << account << endl;
		cout << "�̸� : " << name << endl;
		cout << "�ܾ� : " << balance << endl;
	}

	void Deposit(int money) {
		balance += money;
	}

	void Withdraw(int money) {
		balance -= money;
	}

	char account[20];
	char name[20];
	int balance;
};

// ����� �Ǽ��� ���� Ŭ����, ���ʳ� �� ��� ������ �� ���� ����
// ��������� ���� ���� ����

int main()
{
	/*
	int* pi = (int*)malloc(sizeof(int));
	*pi = 100;

	cout << *pi << ' ' << pi << " �����ʹ� ������ ����Ҹ� ����Ŵ" << endl;
	free(pi);
	*/
	
	/*
	char mybuf[100]; // char Ÿ�� �迭�� ���ڿ� ���� �� ���
	const char* yourbuf = "Hello World"; // yourbuf �����Ͱ� ����Ű�� ������ ����� ����

	char* const aptr = mybuf; // const �����ڴ� aptr �����Ͱ� ����Ű�� �޸� �ּ� ���� �� ���

	*aptr = 'a'; // �����Ͱ� ����Ű�� ������� ���� ���� ������ ���
	aptr = yourbuf; // ������ �ּ��� ������ ���ȵ�
	*/

	/*
	int mybuf = 1000;
	const int* const bptr = &mybuf;
	*/
}