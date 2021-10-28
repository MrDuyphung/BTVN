// BT số nguyên.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int k;
	int x = 0;
	cout << " Điền số nguyên " << endl;
	cin >> k;

	for (int i = 1; i <= k; ++i)
		x = x + i;

	cout << x;
	return 0;
}
