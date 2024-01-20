#include <iostream>
#include <cstring>
using namespace std;

int main(){
	/*
		高精度加法（一）
		两个高精度数数位相同且没有进位的加法：对应为相加即可
	*/
	char a1[1001] = {}, b1[1001] = {};
	int a[1001] = {}, b[1001] = {}, sum;
	//输入字符型数字
	cin >> a1 >> b1;
	//将两个高精度数转换为int类型
	for(int i = 0; i <= strlen(a1) -1; i++){
		a[i] = a1[i] - '0';
		b[i] = b1[i] - '0';
		//相加、输出
		sum = a[i] + b[i];
		cout << sum;
	}
	return 0;
}
