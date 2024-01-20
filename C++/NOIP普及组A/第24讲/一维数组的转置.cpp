#include <iostream>

using namespace std;

int main() {
	/*
		一维数组的转置
	*/
	
	int n, m;
	cin >> n >> m;
	int arr[n], a1[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	//处理7 8 9
	for (int i = 0; i < m; i++) a1[i] = arr[n - m + i];
	//处理0-6
	for (int i = 0; i <= n; i++) a1[m + i] = arr[i];//将下标0-6的元素放在a1数组3-9(m+i)的位置上
	for (int i = 0; i <= n; i++) cout << a1[i] << " ";
	return 0;
}
