#include <iostream>

using namespace std;

int main() {
	/*
		һά�����ת��
	*/
	
	int n, m;
	cin >> n >> m;
	int arr[n], a1[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	//����7 8 9
	for (int i = 0; i < m; i++) a1[i] = arr[n - m + i];
	//����0-6
	for (int i = 0; i <= n; i++) a1[m + i] = arr[i];//���±�0-6��Ԫ�ط���a1����3-9(m+i)��λ����
	for (int i = 0; i <= n; i++) cout << a1[i] << " ";
	return 0;
}
