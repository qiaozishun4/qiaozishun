#include <iostream>
using namespace std;

int a = 100; // 全局变量
void func(){
	int a = 50;//局部变量
	cout << a << endl;
}

int main(){
	/*
		变量的作用域
		全局变量(共享单车)：函数外部定义，供全局使用
		局部变量(自己的自行车)：函数内部定义，只有函数内部可以使用
		优先级：局部 > 全局
	*/
	int a = 1000;
	func();
	cout << a << endl;
	return 0;
}
