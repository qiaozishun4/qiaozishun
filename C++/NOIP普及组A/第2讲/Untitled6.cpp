#include <iostream>
#include <iomanip>
#include <istream>
#include <ostream>
#include <string>
using namespace std;

int main(){
	//隐式转换（自动转换）:不同数据类型在运算时，较小的数据类型会转换为大类型（大小看字节）
	//强制转换：
		//格式：
			//(数据类型)变量
			//数据类型（变量）
	//隐式转换
	char a = 'a';	//1
	int b = 4;	//4
	long long c = 5;	//8
	double d = 1.3;		//8	
	cout << a + b << sizeof(a + b) << endl;		//101 4
	cout << b + c << sizeof(b + c) << endl;		//9 8
	cout << c + d << sizeof(c + d) << endl;		//6.3 8
	cout << a + d << sizeof(a + d) << endl;		//98.3 8
	//强制转换：
	double n = 1.2;
	char m = '2';
	cout << (int)n << " " << int(m) << endl;
	return 0;
}