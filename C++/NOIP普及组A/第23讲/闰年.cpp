#include <iostream>

using namespace std;

bool runnian(int n){
	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0)) return true;
	else return false;
	
}

int main() {
	/*
		m-n�꣺for
		���꣺��4�������ǲ��ܱ�100���� ���� ��400����
		ÿ����ʾʮ������
	*/
	int m, n, cnt = 0;
	cin >> m >> n;
	for (int i = m; i <= n; i++){
		if(runnian(i)){
			cout << i << " ";
			cnt++;
			if (cnt % 10 == 0) cout << endl;
		}
	}
	return 0;
}
