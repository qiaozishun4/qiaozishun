#include <iostream>
#include <istream>
#include <ostream>
#include <iomanip>
using namespace std;

int main(){
	/*
		字符型char
		256种不同字符（ASCII表及拓展表范围内的所有字符）
		
		1.字符只能用单引号引起来
		2.字符常量只能是单个字符 ‘AB’是错误写法
		3.数字字符不可以参与计算
	*/
	char a = 'a';
	cout << a << endl;
	//只能是单个字符
	char b = 'abc';
	cout << b << endl;
	//数字字符不可以参与计算
	char c = '1', d = '2';
	cout << c + d << endl;
	char word[] = "hello";
	cout << word << endl;
	return 0;
}
