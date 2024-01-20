#include <iostream>
#include <cstring>
using namespace std;

int main(){
	/*
		高精度减法（四）:数位不相同且有退位，可能被减数小
	*/
	char a1[10001] = {}, b1[10001] = {};
	int a[10001] = {}, b[10001] = {}, c[10001] = {};
	//输入 char
	cin >> a1 >> b1;
	//判断被减数和减数谁大，如果被减数小，交换两个数的位置并添加负号
	if(strlen(a1) < strlen(b1) || strlen(a1) == strlen(b1) && strcmp(a1, b1) < 0){
		//交换两个数组值
		swap(a1, b1);
		//输出负号
		cout << "-";
	}
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
		//处理退位
		if (a[i] < b[i]){ //判断是否需要退位
			//当前数字+10
			a[i] += 10;
			//上一位数字少1
			a[i + 1] --;
		}
		c[i] = a[i] - b[i];
	}
	//判断最高位是否为0，如果是 长度-1
	while (c[maxlen - 1] == 0 && maxlen > 0) maxlen --;
	//倒序输出
	for (int i = maxlen - 1; i >= 0; i--) cout << c[i];
	return 0;
}
