#include <iostream>
#include <cstring>
using namespace std;

int main(){
	/*
		�߾��ȼӷ���һ��
		�����߾�������λ��ͬ��û�н�λ�ļӷ�����ӦΪ��Ӽ���
	*/
	char a1[1001] = {}, b1[1001] = {};
	int a[1001] = {}, b[1001] = {}, sum;
	//�����ַ�������
	cin >> a1 >> b1;
	//�������߾�����ת��Ϊint����
	for(int i = 0; i <= strlen(a1) -1; i++){
		a[i] = a1[i] - '0';
		b[i] = b1[i] - '0';
		//��ӡ����
		sum = a[i] + b[i];
		cout << sum;
	}
	return 0;
}
