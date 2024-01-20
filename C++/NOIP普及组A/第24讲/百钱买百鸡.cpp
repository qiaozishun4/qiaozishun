#include <iostream>

using namespace std;

int main() {
	/*
		暴力枚举：循环(嵌套)
	*/
	
	for (int i = 0; i <= 20; i++){ //公鸡数量
		for (int j = 0; i <= 33; j++){//母鸡
			int k = 100 - i - j;//小鸡
			//百钱   百鸡
			if(i + j + k == 100 && i * 5 + j * 3 + k / 3 == 100 && k % 3 == 0) cout << i << " " << j << " "  << k << endl;
		}
	}
	return 0;
}
