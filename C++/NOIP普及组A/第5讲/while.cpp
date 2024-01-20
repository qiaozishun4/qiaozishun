#include <iostream>
using namespace std;

int main(){
	/*
		while(判断条件){条件为真时循环要做的事情}
	*/
	//1-100之间的所有数
	int i = 1;
	while (i <= 100){
		cout << i << " ";
		i++;
	}
	//1-100之间的奇数
	int n = 1;
	while(n <= 100){
		cout << n << " ";
		i += 2;
	}
	return 0;
}