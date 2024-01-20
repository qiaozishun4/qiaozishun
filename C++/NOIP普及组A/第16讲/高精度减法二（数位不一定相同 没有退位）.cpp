#include <iostream>
#include <cstring>
using namespace std;

int main(){
	/*
		高精度减法（二）:数位不相同且没有退位，被减数大
	*/
	char a1[10001] = {}, b1[10001] = {};
	int a[10001] = {}, b[10001] = {}, c[10001] = {};
	//输入 char
	cin >> a1 >> b1;
	//获取长度
	int lena = strlen(a1);
	int lenb = strlen(b1);
	//转换为int类型 并倒序输出 (个位对齐) 
	for (int i = 0; i < lena; i++) a[lena - i - 1] = a1[i] - '0';
	for (int i = 0; i < lenb; i++) b[lenb - i - 1] = b1[i] - '0';
	//获取最高位长度
	int maxlen = max(lena, lenb);
	//减法运算
	for (int i = 0; i < maxlen; i++){
		c[i] = a[i] - b[i];
	}
	//判断最高位是否为0，如果是 长度-1
	while (c[maxlen - 1] == 0 && maxlen > 0) maxlen --;
	//倒序输出
	for (int i = maxlen - 1; i >= 0; i--) cout << c[i];
	return 0;
}
