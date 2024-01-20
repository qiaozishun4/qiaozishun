#include <iostream>
using namespace std;

int main(){
	/*
		累加器:
			i++和++i的区别:
				i++是先使用i的值，再作加运算
				++i是先运算再使用运算后的值
	*/
	//都是累加
	int i = 1;
	//i++;
	++i;
	cout << i;
	//i++和++i的区别
	int a = 1;
	cout << a ++ << endl;
	cout << a << endl;
	
	int b = 1;
	cout << ++ b << endl;
	cout << b << endl;
	return 0;
}