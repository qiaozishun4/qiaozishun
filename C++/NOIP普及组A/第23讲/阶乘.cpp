#include <iostream>

using namespace std;

int main() {
	/*
		һ��ѭ����1-n֮���������
		����ѭ�����׳�
	*/
	int n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++){//1-n֮���������
		int m = 1;
		for (int j = 1; j <= i; j++) m *= j; //ÿ�����Ľ׳�
		sum += m;
	}
	cout << sum;
	return 0;
}
