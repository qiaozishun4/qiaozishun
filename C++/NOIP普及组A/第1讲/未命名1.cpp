#include <iostream>
using namespace std;

int main(){	
	/*
		about %:
			一个整数对10%，得到的是这个数的个位
			一个整数对100%，得到的是这个数的十位和个位
	*/
	int w = 10000, q = 9;
	cout << w + q << "\n";
	cout << w - q << "\n";
	cout << w * q << "\n";
	cout << w / q << "\n";
	cout << w % q << "\n";
	
	int a = 3, b = 23, c = 2;
	cout << a % c << "\n";
	cout << 3 % 10 << "\n";
	cout << 4 % 10 << "\n";
	cout << 24 % 10 << "\n";
	cout << 24 % 100 << "\n";
	return 0;
}
