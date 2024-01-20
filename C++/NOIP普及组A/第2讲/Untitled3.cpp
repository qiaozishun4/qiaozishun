#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	cout << fixed;
	/*
	整型    字节数      上下限        有效位数
	 int		4		-2^31~2^31-1     10
  long long		8	   -2^63~2^63-1      19
	
	sizeof():获取所占字节数
	*/
	int n = 100;
	long long n1 = 21 / 10;
	cout << n << " " << n1 << endl;
	//字节数
	cout << sizeof(n) << endl;
	int min = INT_MIN;
	int max = INT_MAX;
	cout << min << " " << max << endl;
	cout << min - 1 << " " << max + 1 << endl;
	long long minn = LONG_LONG_MIN;
	long long maxn = LONG_LONG_MAX;
	cout << minn << " " << maxn << endl;
	cout << minn - 1 << " " << maxn + 1 << endl;
	return 0;
}
