#include <iostream>

using namespace std;

// 함수, 리턴값, 매개변수, 인수

int addTwoNumbers(int num_1, int num_2) 
{
	int sum = num_1 + num_2;

	return sum; 
}

int multiplyTwoNumbers(int num_1, int num_2) 
{
	return num_1 * num_2;
}

void printHelloWorld() 
{
	cout << "Hello World" << endl;
}

int main()
{
	cout << 1 + 2 << endl;
	cout << 3 + 4 << endl;
	cout << 8 + 13 << endl;

	cout << endl;

	cout << addTwoNumbers(1, 2) << endl;
	cout << addTwoNumbers(3, 4) << endl;
	cout << addTwoNumbers(8, 13) << endl;

	cout << endl;

	cout << multiplyTwoNumbers(1, 2) << endl;
	cout << multiplyTwoNumbers(3, 4) << endl;
	cout << multiplyTwoNumbers(8, 13) << endl;

	cout << endl;

	printHelloWorld();

	return 0;
}