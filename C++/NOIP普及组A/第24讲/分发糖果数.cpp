#include <iostream>

using namespace std;

int main() {
	/*
		分发糖果
	*/
	int n, arr[101] = {};
	cin >> n; //小朋友个数
	for (int i = 0; i < n; i++){
		cin >> arr[i];//每个小朋友所需糖果数
		cout << "第" << i + 1 << "个小朋友：";
		//分发糖果
		for (int j = 0; j < arr[i]; j++) cout << "*";
		cout << endl;
	}
	return 0;
}
