#include <iostream>

using namespace std;

int main() {
	/*
		����ö�٣�ѭ��(Ƕ��)
	*/
	
	for (int i = 0; i <= 20; i++){ //��������
		for (int j = 0; i <= 33; j++){//ĸ��
			int k = 100 - i - j;//С��
			//��Ǯ   �ټ�
			if(i + j + k == 100 && i * 5 + j * 3 + k / 3 == 100 && k % 3 == 0) cout << i << " " << j << " "  << k << endl;
		}
	}
	return 0;
}
