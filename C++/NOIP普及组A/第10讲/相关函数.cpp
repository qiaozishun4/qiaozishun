#include <iostream>
#include <cstring>
using namespace std;

int main(){
	/*
		����ͷ�ļ�:#include <cstring>
		strlen():��ȡ�ַ������ȡ�ַ�����������Ч�ַ���������������\0��
		strcat(a, b):��b�ַ���ƴ�ӵ�a�ַ������ַ������ȡ�ַ���������
	*/
	//strlen()
	char a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << strlen(a) << endl;
	cout << strlen("hello") << endl;
	//strcat()
	char a1[7] = "noip";
	char b[5] = "2023";
	strcat(a1, b);
	
	char a2[4] = "hah";
	char b1[4] = "heh";
	cout << strcmp(a, b) << endl;
	return 0;
}
