#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	/*
		�߼����������&& ��|| �ǣ�
		�߼����ʽ���ֻ�����֣�true��false
		&&��һ�ټ���  ||��һ�漴��  ����ȡ��
		���ȼ���! > && > ||
	*/
	cout << (!(3 < 6) || (7 > 6 && 3 < 7)) << endl;
	cout << ((5 != 5) || (7 > 6 && 3 < 7)) << endl;
	cout << (7 < 5 && 3 > 4) << endl; //0
	cout << (4 < 7 && 2 < 4) << endl; //1
	cout << (7 > 5 || 1 > 8) << endl; //1
	cout << (4 > 10 || false) << endl; //0
	cout << (2 < 3 || 1) << endl; //1
	cout << !true << endl; //0
	cout << !false << endl; //1
	cout << !(2 < 9) << endl; //0
	return 0;
}
