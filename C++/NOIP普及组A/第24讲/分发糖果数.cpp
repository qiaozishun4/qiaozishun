#include <iostream>

using namespace std;

int main() {
	/*
		�ַ��ǹ�
	*/
	int n, arr[101] = {};
	cin >> n; //С���Ѹ���
	for (int i = 0; i < n; i++){
		cin >> arr[i];//ÿ��С���������ǹ���
		cout << "��" << i + 1 << "��С���ѣ�";
		//�ַ��ǹ�
		for (int j = 0; j < arr[i]; j++) cout << "*";
		cout << endl;
	}
	return 0;
}
