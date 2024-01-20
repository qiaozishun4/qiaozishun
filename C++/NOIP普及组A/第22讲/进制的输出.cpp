#include <iostream>
#include <bitset>

using namespace std;

int main() {
	/*
		进制的输出
	*/
	//2进制
//	cout << bitset<4>(15) << endl;//4:位数
	//8进制
//	cout << oct << 15 << endl;
	//16进制
//	cout << hex << 15 << endl;
	//进制的表示方式
	int n = 0B11;//0B二进制
	cout << n << endl;
	int n1 = 012;//0八进制
	cout << n1 << endl;
	int n2 = 0xf;//0x十六进制
	cout << n2 << endl;
	return 0;
}
