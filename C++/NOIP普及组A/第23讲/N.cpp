#include <iostream>

using namespace std;

int main() {
	/*
		"N"
		i��ʾ��    j��ʾ��
		1            1
		2            2
		3            3
		ʲô��������"*":j = 1  j = n   i = j
		���ѭ����������������ѭ����������
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
