#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main(){
	/*
		�ض���
		ͷ�ļ���cstdio
		��ʽ��
			�򿪣�freopen(�ļ���, �ļ��Ĵ򿪷�ʽr/w, ��׼���ļ�stdin/stdout)
			�رգ�fclose(stdin/stdout)
	*/
	//�����롢������ļ�
	freopen("test.in", "r", stdin);
	freopen("test.out", "w", stdout);
	
	//�߼�����
	int a;
	cin >> a;
	cout << a;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
