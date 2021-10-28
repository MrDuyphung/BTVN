// BTVN4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	int x; //gio mo cua
	int y; //gio dong cua
	int a = 30000;
	int b; //fee

	cout << " chung toi mo tu 8h den 24h moi ngay" << endl;
	cout << " nhap thoi gian bat dau: ";
	cin >> x;
	cout << " nhap thoi gian hoan thanh o";
	cin >> y;

	int z = y - x;

	if (x < 8 && y>24) {
		cout << " Error";
	}
	else if (y <= 17) {
		if (z > 3) {
			b = ((a - a * 30 / 100) * (z - 3) + 3 * a) - (((a - a * 30 / 100) * (z - 3) + 3 * a) * 10 / 100);
			cout << " You have to pay " << b << " dong " << endl;
		}
		else {
			b = (z * a) - (z * a * 10 / 100);
			cout << " You have to paid " << b << " dong " << endl;
		}

	}
	else if (y > 17) {
		if (z > 3) {
			b = (a - a * 30 / 100) * (z - 3) + 3 * a;
			cout << " You have to pay " << b << " dong " << endl;
		}
		else {
			b = (z * a);
			cout << " You have to paid " << b << " dong " << endl;
		}

	}


	return 0;
}

