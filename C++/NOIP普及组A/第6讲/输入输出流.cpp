#include <fstream>
using namespace std;

int main(){
	/*
		���������
		ͷ�ļ���fstream
		��������ifstream�����ڴ��ļ��ж�ȡ����
			ifstream cin("test1.in);
		�������ofstream:���ڴ��ļ���д������
			ofstream cout("test1.out");
		�ر��ļ���cin.close() / cout.close();
		��ע�⡿������iostreamͷ�ļ����������ʾcin��Դ����ȷ
	*/
	//�����롢������ļ�
	ifstream cin("test.in");
	ofstream cout("test.out");
		
	//�߼�����
	int a;
	cin >> a;
	//scanf("%d", &a);
	cout << a;
	//printf("%d", a);
	cin.close();
	cout.close();
	return 0;
}
