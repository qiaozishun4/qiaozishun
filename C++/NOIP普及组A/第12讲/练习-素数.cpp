#include <iostream>
using namespace std;

bool isPrime(int x){
	//����2 - ����ǰһ�����֣��ж��Ƿ�Ϊ������
	if (x <= 1){
		return 0;
	}
	for (int i = 2; i < x; i++){
		if(x % i == 0){
			return 0; //��������������ѭ��
		}
	}
	return 1;//����true��������
}

int main(){
	bool flag = 1, sj = 0;
	int m, n;
	cin >> m >> n;
	for (int i = m; i <= n; i++){
		if (isPrime(i)){
			if (sj){
				cout << ",";
			} else{
				sj = 1;
			}
			flag = 0;
			cout << i;
		}
	}
	if (flag){
		cout << "No" << endl;
	}
	return 0;
}
