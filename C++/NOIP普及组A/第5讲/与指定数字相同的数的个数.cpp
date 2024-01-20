#include <iostream>
using namespace std;

int main() {
    int n, m, cnt, num;
	cin >> n >> m;
	cnt = 0;
	for (int i = 0; i < n; i++){
		cin >> num;
		if (num == m){
			cnt ++;
		}
	}
	cout << cnt << endl;
    return 0;
}
