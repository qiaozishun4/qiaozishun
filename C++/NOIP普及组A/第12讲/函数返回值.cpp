#include <iostream>
using namespace std;

int out_put(int a, int b){
	int sum = a + b;
	return sum;
}

int main(){
	/*
		函数的返回值：函数内部是私密空间，函数内部的数据无法在函数体外使用，
					  所以返回值为：向函数体外传递数据
		返回值的关键词：return (遇到return 结束)
	*/
	cout << out_put(2, 3);
	
	return 0;
}
