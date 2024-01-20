#include <iostream>
#include <cstring>
using namespace std;

int main(){
	/*
		string类型
		包含头文件 #include <cstring>
		格式：string str; cin >> str; cout << str;
		长度：str.length() / str.size();
		*输入时遇到空格则结束
		
		string基本使用
		1、str1 = str2; 将str2赋值给str1，str1成为str2
		2、str1 = str1 + str2; 将str2的字符数据连接到str1的尾部
		3、> < >= <= == != 字符串比较运算符（基于字典序比较）
	*/
	string str;
	cin >> str;
	cout << str << endl;
	cout << str.length();
	
	string str1, str2;
	cin >> str1 >> str2;
	//操作1
	str1 = str2;
	cout << str1 << " " << str2;
	//操作2
	str1 += str2;
	cout << str1 << " " << str2;
	//操作3
	cout << "str1 > str2:" << (str1 > str2) << endl;
	return 0;
}
