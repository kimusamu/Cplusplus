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
	cout << x << " 인수는 " << (x ? "참" : "거짓") << "입니다." << endl;
}

void Print_Bool(bool x)
{
	cout << x << " 인수는 " << (x ? "참" : "거짓") << "입니다." << endl;

	// std::boolalpha는 화면 출력 시 1과 0이 아닌 true와 false의 문자로 만들어 주는 기능을 한다.
	cout << "bool 타입의 데이터는  " << boolalpha << x << "와 " << !x << "로 표시할 수 있습니다. " << endl;
}

int main()
{
	int value = 5;

	int* pos = &value; // pos 변수는 포인터로 value 변수를 가리키는 주소를 보관
	char str[] = "Hello";
	char* ptr = str;

	// MyString* obj = new MyString("포인터 생성");
	// 객체 지향 언어 사용 방식의 포인터

	///////////////////////////////////////////////////////////////////////////////////

	// int const* a, * b;
	// const int* a, * b;
	// a가 가리키는 저장소의 데이터는 상수라는 사실
	 
	// int* a, const* b;
	// b가 가리키는 저장소의 데이터는 상수라는 사실
	
	// int* const a;
	// a 변수가 가리키는 메모리 주소는 상수라는 사실
	
	// static int* p;
	// static 지정자가 int 타입 앞에 존재하여 p 포인터는 정적 타입이라는 사실

	///////////////////////////////////////////////////////////////////////////////////

	auto name = "Seoul";
	int foo = 0;
	auto bar = foo;
	// or decltype(foo) bar;, auto는 초기화가 필수

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

	cout << "입력 문자 : ";
	cin >> en;

	for (int i = 0; en[i]; ++i) {
		cout << (char)en[i];
	}

	cout << endl;

	char wc1[] = "한글화 작업";
	cout << wc1 << endl;

	int i = 0;

	while (wc1[i]) {
		cout << (char)wc1[i];
		++i;
	}

	cout << endl;

	const char* wc2 = "한글화 작업";
	cout << wc2 << ", 문자 크기 : " << strlen(wc2) << endl;

	return 0;
}