#include <iostream>
#include <iomanip>
#include <istream>
#include <ostream>
#include <string>
using namespace std;

int main(){
	/*
		布尔型bool:true（1）  false（0）
		其他数据类型转bool：非数字0即真
	*/
	bool a = true, b = false;
	cout << a << " " << b << endl;
	//转bool
	bool a1 = 10, b1 = 1.1, c1 = 'V', d1 = '0';
	cout << a1 << " " << b1 << " " << c1 << " " << d1 << endl;
	bool e1 = 0, f1 = 0.0;
	cout << e1 << " " << f1 << endl;
	return 0;
}
