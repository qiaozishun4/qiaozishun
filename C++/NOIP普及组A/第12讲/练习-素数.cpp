#include <iostream>
using namespace std;

bool isPrime(int x){
	//除以2 - 本身前一个数字（判断是否为质数）
	if (x <= 1){
		return 0;
	}
	for (int i = 2; i < x; i++){
		if(x % i == 0){
			return 0; //不是质数，结束循环
		}
	}
	return 1;//返回true，是质数
}

int main(){
	bool flag = 1, sj = 0;
	int m, n;
	cin >> m >> n;
	for (int i = m; i <= n; i++){
		if (isPrime(i)){
			if (sj){
				cout << ",";
			} else{
				sj = 1;
			}
			flag = 0;
			cout << i;
		}
	}
	if (flag){
		cout << "No" << endl;
	}
	return 0;
}
