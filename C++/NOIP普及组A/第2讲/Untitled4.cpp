#include <iostream>
#include <iomanip>
#include <istream>
#include <ostream>
#include <string>
using namespace std;

int main(){
	/*
		ASCII���룺���ַ�ͨ�����Ա��루ASCII��ת��Ϊ���������洢�ڼ������
			0:48    A:65    a:97
		1.�ַ�������0���Ӽ�������ɵõ����ַ���ASCII��ֵ
		ԭ���ַ�����ʱ��ת���ɶ�Ӧ��ASCIIֵ�����㣬���ɵõ��������ַ���Ӧ������
		2.�����ַ����ַ�'0'����������
		3.��д��ĸ + 32 = Сд��ĸ
	*/
	//��
	short asc;
	cin >> asc;
	asc = 48 + asc;
	cout << asc << endl;
	//1.�ַ�������0���Ӽ�������ɵõ����ַ���ASCII��ֵ
	char a = 'a';
	cout << a + 0 << endl;
	//2.�����ַ����ַ�'0'����������
	cout << '2' - '0' << endl;
	//3.��д��ĸ + 32 = Сд��ĸ
	char c = 'A' + 32;
	cout << c << endl;
 	return 0;
}
