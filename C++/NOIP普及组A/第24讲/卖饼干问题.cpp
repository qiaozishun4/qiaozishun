#include <iostream>

using namespace std;

int main() {
	/*
		卖饼干问题
	*/
	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i <= 10; i++){
		for (int j = 0; j <= 4; j++){
			for (int k = 0; k <= 8; k++){
				if (i * 5 + j * 2 + k * 1 == n){
					cout << i << " " << j << " " << k << endl;
					cnt++;
				}
			}
		}
	}
	//cnt = 0表示没有符合条件的
	if (cnt == 0) cout << "NO";
	return 0;
}
