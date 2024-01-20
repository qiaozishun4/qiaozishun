#include <iostream>
#include <iomanip>
#include <istream>
#include <ostream>
#include <string>
using namespace std;

int main(){
	/*
		ASCII编码：将字符通过电脑编码（ASCII）转换为二进制数存储在计算机中
			0:48    A:65    a:97
		1.字符与数字0做加减法运算可得到该字符的ASCII码值
		原理：字符计算时会转换成对应的ASCII值来计算，即可得到该数字字符对应的数字
		2.数字字符与字符'0'做减法运算
		3.大写字母 + 32 = 小写字母
	*/
	//题
	short asc;
	cin >> asc;
	asc = 48 + asc;
	cout << asc << endl;
	//1.字符与数字0做加减法运算可得到该字符的ASCII码值
	char a = 'a';
	cout << a + 0 << endl;
	//2.数字字符与字符'0'做减法运算
	cout << '2' - '0' << endl;
	//3.大写字母 + 32 = 小写字母
	char c = 'A' + 32;
	cout << c << endl;
 	return 0;
}
