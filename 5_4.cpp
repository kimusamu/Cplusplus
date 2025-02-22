#include <iostream>
#include <string>

using namespace std;

/*
int main()
{
	int orig = 5; // 저장소 생성
	int& ref = orig; // ref를 orig에 대한 참조 선언
	int* pos = &ref; // orig 변수의 주소를 pos 포인터에 넣음
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

// 반환 데이터 타입은 문자열 참조
string& GetId()
{
	// 전역 변수를 참조 변환 안됨
	// 지역 변수는 반환 된 이후에 소멸되므로 참조로 사용할 수 없다
	return id;
}

// 작업결과를 참조 반환 받을 수 있음
void square(int x, int& result)
{
	result = x * x;
}

int main()
{
	int x;
	square(10, x);

	cout << "x = " << x << endl;

	string& s = GetId(); // 반환되는 전역 변수를 참조로 만듬
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
	// Person 객체 생성 + u도 id에 학번 부여
	Student(string i, int n) : Person(i) {
		id = n;
	}

	int id;
};

int main()
{
	// Student 타입의 변수 생성
	Student d("이순신", 2013);

	// 업캐스팅 사용하여 Student 클래스 타입의 객체를 상위 Person 클래스 타입의 참조 변환
	Person& b = d;

	// 다시 하위 클래스의 참조로 캐스팅(변환) 한다
	Student& d1 = (Student&)b;
	cout << d.name << ", " << b.name << ", " << d1.name << endl;

	// 주소 출력시, 모두 같은 주소 출력
	cout << &d << ", " << &b << ", " << &d1 << endl;

	Student dd("원균", 2039);
	
	// 상위 클래스 타입의 변수로 복사 저장
	Person bb = (Person)dd;
	cout << bb.name << endl;

	// dd 변수와 bb 변수는 서로 다른 주소를 가리킨다(변수 복사)
	cout << &dd << ", " << &bb << endl;

	// Person 객체로부터 Student 객체로 다운캐스트 불가
	// Student dd2 = (Student)bb;
}