#include <iostream>
#include <algorithm>
using namespace std;

int compare(int a, int b){
	return a > b;
}

int main(){
	int a[10];
	for (int i = 0; i < 10; i++){
		cin >> a[i];
	}
	sort(a, a + 10, compare);//默认从小到大排序
	for (int i = 0; i < 10; i++){
		cout << a[i] << " ";
	}
	return 0;
}
