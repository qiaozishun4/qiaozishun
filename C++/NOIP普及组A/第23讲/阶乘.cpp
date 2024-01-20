#include <iostream>

using namespace std;

int main() {
	/*
		一层循环：1-n之间的所有数
		二层循环：阶乘
	*/
	int n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++){//1-n之间的所有数
		int m = 1;
		for (int j = 1; j <= i; j++) m *= j; //每个数的阶乘
		sum += m;
	}
	cout << sum;
	return 0;
}
