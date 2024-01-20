#include <iostream>
using namespace std;

int b();

int a(){
	b();
	return 0;
}

int b(){
	a();
	return 0;
}

int main(){
	/*
		函数的声明：如果A函数中调用了B函数，B函数中调用了A函数，需要提前声明函数，
					让程序知道后面有该函数
		格式：数据类型 函数名(形参1类型 形参1, 形参2类型 形参2) 参数名可省
	*/
	a();
	
	return 0;
}
