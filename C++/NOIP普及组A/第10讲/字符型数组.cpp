#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char a[5] = "1234";
	for (int i = 0; i < 4; i++){
		cout << a[i] << endl;
	}
	char arr[255];
	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
		if (arr[i] >= '0' && arr[i] <= '9'){
			cnt ++;
		}
	}
	cout << cnt;
	return 0;
}
