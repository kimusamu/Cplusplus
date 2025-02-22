#include <iostream>
#include <vector>

using namespace std;

/*
void f(int* pi)
{
	cout << "정수" << endl;
}

void f(double* pd)
{
	cout << "실수" << endl;
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
	// 아래는 위의 3개 함수 가운데 모든 함수를 가리키므로 에러 발생
	// f(NULL);

	// 아래 delete라는 연산자를 사용하여 앞에서 new 연산자로 할당받은 메모리를
	// 운영체제에 반환하는 기능을 제공한다
	delete pi;
	delete pd;
}
*/

/*
int calcConstant()
{
	int foo = 0;
	cout << "초기값 입력 : ";
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
	cout << "초기값 입력 : ";
	cin >> foo;
	return foo;
}

int main()
{
	const int maxarray = calcConstant();
	// char store[maxarray]; 가변길이 사용 불가
	// char* store = new char[maxarray]; // 동적할당 해야함
	vector<char> store(maxarray); // vector 사용시 더 편함
	

	cout << "문자열 입력 : ";
	cin >> store.data();

	cout << maxarray << " " << store.data() << endl;

	// delete[] store; // 동작할당 후 해제 필수
	return 0;
}