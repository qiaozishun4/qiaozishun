#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	/*
		forѭ��:
			for (������ʼ�����ʽ; ѭ������; �������ʽ){
				ѭ��Ҫ��������;
			}
	*/
	for (int i = 0; i < 100; i++){
		cout << i + 1 << " ";
	}
	cout << endl;
	for (int i = 1; i < 100; i += 2){
		cout << i << " ";
	}
	return 0;
}
