#include <iostream>

using namespace std;

int main() {
	/*
		枚举：将所有情况全部罗列
	*/
	for (int i = 1; i <= 28; i++){
		for (int j = 1; j <= 28; j++){
			int z = 30 - j - i;
			if (i * 30 + j * 20 + z * 10 == 500) cout << i << " " << j << " " << z << endl;
		}
	}
	return 0;
}
