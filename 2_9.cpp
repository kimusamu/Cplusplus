#include <iostream>
#include "MY_CONSTANTS.h"
#define PRICE_PER_ITEM 30

using namespace std;

void printNumber(const int my_number)
{
	// my_number = 456; -> error

	int n = my_number;
	cout << my_number << endl;
}

int main()
{
	const double gravity{ 9.8 };
	// double const gravity{ 9.8 };
	// gravity = 1.2; -> Error

	printNumber(123);

	cout << endl;

	const int my_const1(123); // 컴파일 상수
	constexpr int my_const2(123);

	int number;
	cin >> number;

	const int special_number(number); // 런타임 상수
	// constexpr int special_number(number); -> Error

	cout << endl;

	int num_items = 123;
	int price = num_items * PRICE_PER_ITEM; // C언어 문법

	cout << endl;

	const int price_per_item = 30;
	int prices = num_items * price_per_item;

	cout << endl;

	double radius;
	cin >> radius;

	double circumference = 2.0 * radius * constants::pi;

	return 0;
}