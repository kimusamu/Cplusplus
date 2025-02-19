#pragma warning(disable: 4996)

#include <iostream>
#include <string>

using namespace std;

/*
struct Something
{
	static int s_value; // 정적 멤버 변수
	static int getSValue() { return s_value; } // 정적 멤버 함수

	int value; // 일반 멤버 변수
	int getValue() { return value; } // 일반 멤버 함수
};

int Something::s_value = 1;
// 정적 멤버 변수 초기화 -> 범위 확인 연산자 사용

int main()
{
	cout << Something::getSValue() << endl;
	// 정적 멤버 함수는 구조체로 선언된 변수가 없더라도 선언 가능

	Something s = { 100 };
	// 구조체의 일반 멤버 변수는 변수 선언과 함께 이런 방식으로 선언 가능

	cout << s.getSValue() << ", " << s.getValue() << endl;
	// 정벅 멤버 함수, 일반 멤버 함수 무관하게 함수 호출
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

// 데이터 타입 별 상수
#define None 1
#define Integer 2
#define Float 3
#define String 4

// 같은 메모리 영역에 정수, 실수, 문자열 공유
union DataValue
{
	int v_int;
	float v_float;
	char* v_string;
};

struct DataNode
{
	// 콘솔에서 받는 문자의 데이터 타입 넣는 변수
	int type;
	DataValue value;

	// 이 함수를 통해 입력되는 문자를 받아 정수, 실수, 문자열에 따른
	// 아래 type 변수와 value 변수에 데이터를 입력시켜 주는 기능을 함
	void read_some_input()
	{
		char* p;

		// 입력 문제 최대 100 -> string 타입으로 잡는게 좋음
		char s[100];
		cout << "문자, 정수, 실수 입력 : ";
		cin >> s;

		// 입력 문자가 정수?
		long l = strtol(s, &p, 10);

		if (*p == 0) {
			type = Integer;
			value.v_int = l;

			return;
		}

		// 입력 문자가 실수?
		float f = strtof(s, &p);

		if (*p == 0) {
			type = Float;
			value.v_float = f;

			return;
		}

		// 둘 다 아니면 String
		type = String;

		// \0 추가 후 문자열 복사
		rsize_t len = strlen(s) + 1;
		value.v_string = (char*)malloc(len);
		strcpy(value.v_string, s);
	}

	// malloc() 호출로 인한 힙 메모리 할당 -> free를 통해 삭제
	void free_string()
	{
		if (String == type) {
			free(value.v_string);
		}
	}
};

int main()
{
	// DataNode 공유체 타입 변수 선언
	DataNode inputData;
	inputData.read_some_input();

	// type에 따라 선택 후 데이터 출력
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

	// 작업 완료 후 문자열 할당 시 free 실시
	inputData.free_string();
}