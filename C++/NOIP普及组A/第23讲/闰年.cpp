#include <iostream>

using namespace std;

bool runnian(int n){
	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0)) return true;
	else return false;
	
}

int main() {
	/*
		m-n年：for
		闰年：被4整除但是不能被100整除 或者 被400整除
		每行显示十个数字
	*/
	int m, n, cnt = 0;
	cin >> m >> n;
	for (int i = m; i <= n; i++){
		if(runnian(i)){
			cout << i << " ";
			cnt++;
			if (cnt % 10 == 0) cout << endl;
		}
	}
	return 0;
}
