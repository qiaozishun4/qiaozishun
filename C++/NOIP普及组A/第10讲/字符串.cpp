#include <iostream>
#include <cstring>
using namespace std;

int main(){
	/*
		1���ַ�����������˫������������0�������ַ���ɵ�����
		2�����ڴ���\0����
		3����ʽ
			char arr[6] = {"hello"};
			char arr[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
		4���ַ���������ַ����������
			char arr[3] = {'a', 'b', '\0'};
			char arr[3] = {'a', 'b', 'c'};
		5��
			����(�����пո�)ʹ��forѭ��cin>>������[�±�]
			����(���пո�)ʹ��cin.getline
	*/
	/*char arr[6] = {"hello"};
	for (int i = 0; i < 5; i++){
		cout << arr[i];
	}*/
	//�޿ո�
	char arr1[5];
		for (int i = 0; i < 4; i++){
			cin >> arr1[i];
			cout << arr1[i];
		}
	//�пո�
	char arr2[5];
	cin.getline(arr2, 5);
	cout << arr2;
	return 0;
}
