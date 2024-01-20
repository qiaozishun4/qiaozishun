#include <iostream>
#include <cstring>
using namespace std;

int main(){
	/*
		高精度加法（二）
		两个高精度数数位不相同且没有进位的加法：倒序，找到最到运算位数，对应为相加，倒序输出
	*/
	char a1[1001] = {}, b1[1001] = {};
	int a[1001] = {}, b[1001] = {}, c[1001] = {};
	//输入字符型数字
	cin >> a1 >> b1;
	//获取两个高精度数的长度
	int n1 = strlen(a1);
	int n2 = strlen(b1);
	//将两个高精度数转换为int类型 并倒序存储
	for (int i = 0; i < n1; i++) a[n1 - 1 - i] = a1[i] - '0';
	for (int i = 0; i < n2; i++) a[n1 - 2 - i] = b1[i] - '0';
	//找出最长的数据（最高位），需要几位运算
	int maxlen = max(n1, n2);
	//相加运算
	for (int i = 0; i < maxlen; i++) c[i] = a[i] + b[i];
	//倒序输出
	for (int i = maxlen - 1; i >= 0; i--) cout << c[i];
	return 0;
}
