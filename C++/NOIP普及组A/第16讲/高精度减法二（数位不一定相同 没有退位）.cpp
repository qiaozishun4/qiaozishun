#include <iostream>
#include <cstring>
using namespace std;

int main(){
	/*
		�߾��ȼ���������:��λ����ͬ��û����λ����������
	*/
	char a1[10001] = {}, b1[10001] = {};
	int a[10001] = {}, b[10001] = {}, c[10001] = {};
	//���� char
	cin >> a1 >> b1;
	//��ȡ����
	int lena = strlen(a1);
	int lenb = strlen(b1);
	//ת��Ϊint���� ��������� (��λ����) 
	for (int i = 0; i < lena; i++) a[lena - i - 1] = a1[i] - '0';
	for (int i = 0; i < lenb; i++) b[lenb - i - 1] = b1[i] - '0';
	//��ȡ���λ����
	int maxlen = max(lena, lenb);
	//��������
	for (int i = 0; i < maxlen; i++){
		c[i] = a[i] - b[i];
	}
	//�ж����λ�Ƿ�Ϊ0������� ����-1
	while (c[maxlen - 1] == 0 && maxlen > 0) maxlen --;
	//�������
	for (int i = maxlen - 1; i >= 0; i--) cout << c[i];
	return 0;
}
