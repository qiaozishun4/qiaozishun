#include <iostream>
#include <cstring>
using namespace std;

int main(){
	/*
		�߾��ȼ�����һ��:��λ��ͬ��û����λ����������
	*/
	char a1[10001] = {}, b1[10001] = {};
	int a[10001] = {}, b[10001] = {}, c[10001] = {};
	//���� char
	cin >> a1 >> b1;
	//��ȡ����
	int len = strlen(a1);
	//ת��Ϊint���� ��������� (��λ����) 
	for (int i = 0; i < len; i++){
		a[len - i - 1] = a1[i] - '0';
		b[len - i - 1] = b1[i] - '0';
	}
	//��������
	for (int i = 0; i < len; i++){
		c[i] = a[i] - b[i];
	}
	//�ж����λ�Ƿ�Ϊ0������� ����-1
	while (c[len - 1] == 0 && len > 0) len --;
	//�������
	for (int i = len - 1; i >= 0; i--){
		cout << c[i];
	}
	return 0;
}
