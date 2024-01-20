#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	/*
		for循环:
			for (变量初始化表达式; 循环条件; 增量表达式){
				循环要做的事情;
			}
	*/
	for (int i = 0; i < 100; i++){
		cout << i + 1 << " ";
	}
	cout << endl;
	for (int i = 1; i < 100; i += 2){
		cout << i << " ";
	}
	return 0;
}
