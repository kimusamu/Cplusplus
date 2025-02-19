#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	/*
	const char* cc = "This is String";
	char cb[17]; // ���ڿ� ���� �� ������ ���ڴ� NULL
	char* str; // ���ڿ� ������

	memcpy(cb, cc, strlen(cc)) ; // strcpy ��� �� ����
	cb[strlen(cc)] = '\0';

	str = (char*)malloc(strlen(cc) + 1); // ���ڿ� ���� ���� �޸� �Ҵ�

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

	str = cc; // char type�� ���ڿ� �����ص� ��� ����
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