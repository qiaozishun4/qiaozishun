#include <iostream>
#include <cstring>
using namespace std;

int main(){
	/*
		string����
		����ͷ�ļ� #include <cstring>
		��ʽ��string str; cin >> str; cout << str;
		���ȣ�str.length() / str.size();
		*����ʱ�����ո������
		
		string����ʹ��
		1��str1 = str2; ��str2��ֵ��str1��str1��Ϊstr2
		2��str1 = str1 + str2; ��str2���ַ��������ӵ�str1��β��
		3��> < >= <= == != �ַ����Ƚ�������������ֵ���Ƚϣ�
	*/
	string str;
	cin >> str;
	cout << str << endl;
	cout << str.length();
	
	string str1, str2;
	cin >> str1 >> str2;
	//����1
	str1 = str2;
	cout << str1 << " " << str2;
	//����2
	str1 += str2;
	cout << str1 << " " << str2;
	//����3
	cout << "str1 > str2:" << (str1 > str2) << endl;
	return 0;
}
