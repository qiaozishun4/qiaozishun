#include <iostream>

using namespace std;

int main() {
	/*
		"N"
		i表示行    j表示列
		1            1
		2            2
		3            3
		什么情况下输出"*":j = 1  j = n   i = j
		外城循环控制行数，历程循环控制列数
	*/
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			if (j == 1 || j == n || j == i) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
	return 0;
}
