// BT số nguyên.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int k;
	int b;
	cout << " Nhập số nguyên k: ";
	cin >> k;
	for (int i = 1; i <= k; i++);
	cin.ignore(1000, '\n');

	b = k + 1;
	cout << " In tổng của tất cả các số nguyên: " << b << '\n';

	return 0;
}

