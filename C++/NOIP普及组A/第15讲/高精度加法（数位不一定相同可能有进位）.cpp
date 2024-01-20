#include <iostream>
#include <cstring>
using namespace std;

int main(){
	/*
		高精度加法（三）
		两个高精度数数位不一定相同且可能存在进位
	*/
	char a1[1001] = {}, b1[1001] = {};
	int a[1001] = {}, b[1001] = {}, c[1001] = {};
	int x = 0;//进位
	//输入字符型数字
	cin >> a1 >> b1;
	//获取两个高精度数的长度
	int n1 = strlen(a1);
	int n2 = strlen(b1);
	//将两个高精度数转换为int类型 并倒序存储
	for (int i = 0; i < n1; i++) a[n1 - 1 - i] = a1[i] - '0';
	for (int i = 0; i < n2; i++) a[n1 - 2 - i] = b1[i] - '0';
	//获取最高位
	int maxlen = max(n1, n2);
	//相加并处理进位
	for (int i = 0; i < maxlen; i++){
		c[i] = a[i] + b[i] + x;
		x = c[i] / 10;//进位数字（0/1）
		c[i] = c[i] % 10;
	}
	//最高位进位是否有效
	if (x){
		c[maxlen] = x;
		maxlen ++;
	}
	//倒序输出
	for (int i = maxlen - 1; i >= 0; i--) cout << c[i];
	return 0;
}
