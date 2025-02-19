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
	} 사용자 정의 생성자

	Data(){
	age = 0;
	memset(name, 0, 100);
	balance = 0;
	} 디폴트 생성자
	*/

	// 멤버 변수
	int age;
	char name[100];
	int balance;
};

void Print(Data user)
{
	cout << user.age << ", " << user.name << ", 잔액 : " << user.balance << endl;
}

int main()
{
	// Data user01 = 21; -> 에러 발생
	// Data user02(33, "김김김", 20000); -> 구조체 생성자 만들어서 제공해야함
	Data user03{ 53, "김김김", 20000 };
	Print(user03);

	// Data user04 = Data(45, "이이이", 46000); -> 구조체 생성자 만들어야함

	Data user05();

	// 초기화 O
	Data user06 = Data();
	Print(user06);

	Data user07 = { 21, "박박박", 10000 };
	Print(user07);

	// 초기화 X, 기존에는 이상한 값, 여기선 오류 발생
	// Data user08;
	// Print(user08);

	// 초기화 X 이상한 값
	Data* user_08 = new Data;
	Print(*user_08);

	// 초기화 O
	Data* user_09 = new Data();
	Print(*user_09);
}