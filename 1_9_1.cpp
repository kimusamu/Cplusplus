#include <iostream>
#include <algorithm>

using namespace std;

void doSomething()
{
#ifdef LIKE_APPLE
	cout << "APPLE" << endl;
#endif

#ifndef LIKE_APPLE
	cout << "ORANGE" << endl;
#endif
}
