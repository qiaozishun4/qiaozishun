#include <iostream>
#include <cstring>
using namespace std;

int main(){
	/*
		�������߾��������Ĵ洢
		�������long long ��Χ������
		���裺
			1���ַ�������루���뷽�㣩
			2�����ַ�����ת��Ϊ�������֣�������㣩
			3������洢����λ�������㣩
	*/
	
	char a1[1001] = {}, b1[1001] = {};//����ַ�����
	int a[1001] = {}, b[1001] = {};//�����������
	//�����ַ�������
	cin >> a1 >> b1;
	//���ַ�ת��Ϊint���Ͳ��������
	for (int i = 0; i < strlen(a1); i++) a[strlen(a1) - 1 - i] = a1[i] - '0';
	for (int i = 0; i < strlen(b1); i++) b[strlen(b1) - 1 - i] = b1[i] - '0';
	//������
	for (int i = 0; i < strlen(a1); i++) cout << a[i];
	cout << endl;
	for (int i = 0; i < strlen(b1); i++) cout << b[i];
	return 0;
}
