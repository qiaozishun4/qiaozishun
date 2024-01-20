#include <iostream>
using namespace std;

int main(){
	/*
		算数运算符： % + - * /
		复合运算符： += -= *= /= %=
	*/
	short a = 1, b = 2, c = 3, d = 1;
	c += a;
	//c -= b;
	//c *= b;
	//c /= b;
	//c %= b;
	//cout << c << endl;
	// 关系（比较）运算符
	cout << (a > b) << endl; // 0
	cout << (a < c) << endl; // 1
	cout << (b >= c) << endl; // 0
	cout << (a <= b) << endl; // 1
	cout << (a == d) << endl; // 1
	cout << (a != c) << endl; // 1
	return 0;
}