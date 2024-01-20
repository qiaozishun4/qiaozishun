#include <iostream>

using namespace std;

int main() {
	/*
		数据加密
	*/
	
	int a[11];
	for (int i = 1; i <= 10; i++){
		cin >> a[i];
		a[i] += 5;
		a[i] = a[i] % 10;
	}
	//交换 注意：1 2交换  3 4交换    i+=2!!!!!
	for (int i = 0; i < 10; i += 2) swap(a[i], a[i+1]);
	
	for (int i = 1; i <= 10; i++) cout << a[i] << " ";
	return 0;
}
