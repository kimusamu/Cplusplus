#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	/*
	const char* cc = "This is String";
	char cb[17]; // 문자열 제작 시 마지막 문자는 NULL
	char* str; // 문자열 포인터

	memcpy(cb, cc, strlen(cc)) ; // strcpy 사용 시 에러
	cb[strlen(cc)] = '\0';

	str = (char*)malloc(strlen(cc) + 1); // 문자열 저장 위한 메모리 할당

	if (str == NULL) {
		return 1;
	}

	strcpy(str, cc);

	cout << "cc = " << cc << " " << strlen(cc) << endl;
	cout << "cc = " << cb << " " << strlen(cb) << endl;
	cout << "cc = " << str << " " << strlen(str) << endl;

	free(str);
	*/
	

	//////////////////////////////////////////////////////////////////////////

	const char* cc = "This is String.";
	string str;

	str = cc; // char type의 문자열 대입해도 사용 가능
	cout << "str = " << str.data() << endl;
	cout << "str data = " << str.length() << endl;

	str = "League Of Legends ";
	str += "Eternal Return";

	cout << "str = " << str.data() << endl;
	cout << "str data = " << str.length() << endl;

	cout << endl;

	////////////////////////////////////////////////////////////////////////////

	string s0("This is String.");

	string s1;
	
	string s2(s0);

	string s3(s0, 8, 3);

	string s4(s0, 6);

	string s5(10, 'x');

	cout << s0 << endl;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;

	return 0;
}