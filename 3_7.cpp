#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	// << left shift
	// >> 
	// ~, &, |, ^

	unsigned int a = 3;

	cout << bitset<8>(a) << endl;

	unsigned int b = a << 3;

	cout << bitset<8>(b) << " " << b << endl;
	
	cout << endl;

	unsigned int a1 = 1024;

	cout << bitset<16>(a1) << endl;

	cout << bitset<16>(a1 << 1) << " " << (a1 << 1) << endl;
	cout << bitset<16>(a1 << 2) << " " << (a1 << 2) << endl;
	cout << bitset<16>(a1 << 3) << " " << (a1 << 3) << endl;
	cout << bitset<16>(a1 << 4) << " " << (a1 << 4) << endl;

	cout << endl;

	cout << bitset<16>(a1 >> 1) << " " << (a1 >> 1) << endl;
	cout << bitset<16>(a1 >> 2) << " " << (a1 >> 2) << endl;
	cout << bitset<16>(a1 >> 3) << " " << (a1 >> 3) << endl;
	cout << bitset<16>(a1 >> 4) << " " << (a1 >> 4) << endl;

	cout << endl;

	unsigned int a2 = 0b1100;
	unsigned int b2 = 0b0110;

	cout << a << " " << b << endl;
	cout << bitset<16>(a2) << endl;

	cout << bitset<16>(~a2) << " " << (~a2) << endl;

	cout << bitset<4>(a & b) << endl; // bitwise AND
	cout << bitset<4>(a | b) << endl; // bitwise OR
	cout << bitset<4>(a ^ b) << endl; // bitwise XOR



	return 0;
}