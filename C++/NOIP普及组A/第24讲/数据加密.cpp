#include <iostream>

using namespace std;

int main() {
	/*
		���ݼ���
	*/
	
	int a[11];
	for (int i = 1; i <= 10; i++){
		cin >> a[i];
		a[i] += 5;
		a[i] = a[i] % 10;
	}
	//���� ע�⣺1 2����  3 4����    i+=2!!!!!
	for (int i = 0; i < 10; i += 2) swap(a[i], a[i+1]);
	
	for (int i = 1; i <= 10; i++) cout << a[i] << " ";
	return 0;
}
