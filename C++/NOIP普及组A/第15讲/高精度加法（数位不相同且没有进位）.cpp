#include <iostream>
#include <cstring>
using namespace std;

int main(){
	/*
		�߾��ȼӷ�������
		�����߾�������λ����ͬ��û�н�λ�ļӷ��������ҵ������λ������ӦΪ��ӣ��������
	*/
	char a1[1001] = {}, b1[1001] = {};
	int a[1001] = {}, b[1001] = {}, c[1001] = {};
	//�����ַ�������
	cin >> a1 >> b1;
	//��ȡ�����߾������ĳ���
	int n1 = strlen(a1);
	int n2 = strlen(b1);
	//�������߾�����ת��Ϊint���� ������洢
	for (int i = 0; i < n1; i++) a[n1 - 1 - i] = a1[i] - '0';
	for (int i = 0; i < n2; i++) a[n1 - 2 - i] = b1[i] - '0';
	//�ҳ�������ݣ����λ������Ҫ��λ����
	int maxlen = max(n1, n2);
	//�������
	for (int i = 0; i < maxlen; i++) c[i] = a[i] + b[i];
	//�������
	for (int i = maxlen - 1; i >= 0; i--) cout << c[i];
	return 0;
}
