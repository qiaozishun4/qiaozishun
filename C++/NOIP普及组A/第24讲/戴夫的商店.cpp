#include <iostream>

using namespace std;

int main() {
	/*
		������̵�
	*/
	int n, a, b, c, cnt = 0;
	cin >> a >> b >> c >> n;
	for (int i = 0; i <= a; i++){
		for (int j = 0; j <= b; j++){
			for (int k = 0; k <= c; k++){
				if (i * 5 + j * 2 + k * 1 == n){
					cout << i << " " << j << " " << k << endl;
					cnt++;
				}
			}
		}
	}
	//cnt = 0��ʾû�з���������
	if (cnt == 0) cout << "NO";
	return 0;
}
