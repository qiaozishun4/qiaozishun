#include <iostream>
using namespace std;

int b();

int a(){
	b();
	return 0;
}

int b(){
	a();
	return 0;
}

int main(){
	/*
		���������������A�����е�����B������B�����е�����A��������Ҫ��ǰ����������
					�ó���֪�������иú���
		��ʽ���������� ������(�β�1���� �β�1, �β�2���� �β�2) ��������ʡ
	*/
	a();
	
	return 0;
}
