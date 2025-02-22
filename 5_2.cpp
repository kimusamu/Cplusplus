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
		cout << "계좌 : " << account << endl;
		cout << "이름 : " << name << endl;
		cout << "잔액 : " << balance << endl;
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

// 사소한 실수로 인해 클래스, 구초내 내 멤버 변수의 값 변경 막기
// 멤버변수에 대한 보안 목적

int main()
{
	/*
	int* pi = (int*)malloc(sizeof(int));
	*pi = 100;

	cout << *pi << ' ' << pi << " 포인터는 정수의 저장소를 가리킴" << endl;
	free(pi);
	*/
	
	/*
	char mybuf[100]; // char 타입 배열로 문자열 저장 시 사용
	const char* yourbuf = "Hello World"; // yourbuf 포인터가 가리키는 변수를 상수로 제작

	char* const aptr = mybuf; // const 지정자는 aptr 포인터가 가리키는 메모리 주소 고정 시 사용

	*aptr = 'a'; // 포인터가 가리키는 저장소의 값에 대한 수정은 허용
	aptr = yourbuf; // 포인터 주소의 변경은 허용안됨
	*/

	/*
	int mybuf = 1000;
	const int* const bptr = &mybuf;
	*/
}