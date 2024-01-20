#include <iostream>
#include <cstring>
using namespace std;

int main(){
	/*
		高精度减法（一）:数位相同且没有退位，被减数大
	*/
	char a1[10001] = {}, b1[10001] = {};
	int a[10001] = {}, b[10001] = {}, c[10001] = {};
	//输入 char
	cin >> a1 >> b1;
	//获取长度
	int len = strlen(a1);
	//转换为int类型 并倒序输出 (个位对齐) 
	for (int i = 0; i < len; i++){
		a[len - i - 1] = a1[i] - '0';
		b[len - i - 1] = b1[i] - '0';
	}
	//减法运算
	for (int i = 0; i < len; i++){
		c[i] = a[i] - b[i];
	}
	//判断最高位是否为0，如果是 长度-1
	while (c[len - 1] == 0 && len > 0) len --;
	//倒序输出
	for (int i = len - 1; i >= 0; i--){
		cout << c[i];
	}
	return 0;
}
