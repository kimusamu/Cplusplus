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

// 아래 temp() 함수는 함수 프로토타입 범위에 따라 모두 같은 함수를 다르게 선언 가능
void temp(int, double, const char*);
void temp(int i = 4, double f = 3.141592, const char* c = "");
void m();

int main()
{
	m();
	temp(600); // temp(600, 3.141592, "")로 변경
	
	return 0;
}

// m() 함수 정의
void m()
{
	// m() 함수에서 temp() 함수의 디폴트 인수를 아래와 같이 다시 선언하여 사용 가능
	void temp(int, double = 1.0, const char* = "Hello!");
	temp(4, 6.1, "Hello What?");
	temp(64); // temp(64, 1.0, "Hello!");로 변경 후 호출
}

// temp() 함수 정의
void temp(int i, double f, const char* c)
{
	cout << "정수 : " << i << endl;
	cout << "실수 : " << f << endl;
	cout << "문자 : " << c << endl;
	cout << endl;
}