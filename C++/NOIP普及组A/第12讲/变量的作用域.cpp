#include <iostream>
using namespace std;

int a = 100; // ȫ�ֱ���
void func(){
	int a = 50;//�ֲ�����
	cout << a << endl;
}

int main(){
	/*
		������������
		ȫ�ֱ���(������)�������ⲿ���壬��ȫ��ʹ��
		�ֲ�����(�Լ������г�)�������ڲ����壬ֻ�к����ڲ�����ʹ��
		���ȼ����ֲ� > ȫ��
	*/
	int a = 1000;
	func();
	cout << a << endl;
	return 0;
}
