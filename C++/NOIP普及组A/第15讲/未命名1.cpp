#include <iostream>
#include <cstring>
using namespace std;

int main(){
	/*
		大数（高精度数）的存储
		概念：超出long long 范围的整数
		步骤：
			1、字符数组读入（输入方便）
			2、将字符数字转换为整型数字（方便计算）
			3、倒序存储（个位对齐运算）
	*/
	
	char a1[1001] = {}, b1[1001] = {};//存放字符数据
	int a[1001] = {}, b[1001] = {};//存放整型数据
	//输入字符型数据
	cin >> a1 >> b1;
	//将字符转换为int类型并倒序输出
	for (int i = 0; i < strlen(a1); i++) a[strlen(a1) - 1 - i] = a1[i] - '0';
	for (int i = 0; i < strlen(b1); i++) b[strlen(b1) - 1 - i] = b1[i] - '0';
	//输出结果
	for (int i = 0; i < strlen(a1); i++) cout << a[i];
	cout << endl;
	for (int i = 0; i < strlen(b1); i++) cout << b[i];
	return 0;
}
