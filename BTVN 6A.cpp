// BTVN 6A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int tinhgiaithua(int x) {
	int z = 1;

	for (int i = 1; i <= x; ++i) {
		z *= i;
	}
	return z;
}
	int main() {
		int result = 0;
		int soluong = 0;
		int x = 0;
		int mangsotunhien[900];

		cout << " Nhap vao so so tu nhien" << endl;
		cin >> soluong;

		for (int i = 0; i < soluong; i++) {
			cout << " Nhap so thu " << i + 1 << ":" << endl;
			cin >> x;
			//result = result + tinhgiaithua(x);
			mangsotunhien[i] = tinhgiaithua(x);
		}
		for (int i = 0; i < soluong; i++) {
			result = result + mangsotunhien[i];
		}

		cout << " Ket qua la:" << result << endl;

		return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
