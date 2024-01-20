#include <iostream>
#include <istream>
#include <ostream>
#include <iomanip>
using namespace std;

int main(){
	/*
		整型：
			1.短整型short
			2.基本整形int（默认）
			3.长整型long long
		浮点型：
			1.单精度浮点型float
			2.双精度浮点型double（默认）
		字符型char
		布尔型bool
	*/
	/*
	浮点型      字节数        上下限         有效位数
	float         4      -3.4e-38~3.4e+38     7
	double        8      -1.7e-308~1.7e+308   14
	fixed默认保留6位有效数字（四舍五入）
	setprecision(n)保留n位小数（导入iomanip头文件）
	*/
	cout << fixed << setprecision(2);
	float a = 3.14f;
	double b = 3.14;
	cout << a << " " << b << endl;
	double c = 3 / 2.0;
	cout << c << endl;
	double e = 3 / 2;
	cout << e << endl;
	double d = 123456789.123456789;
	cout << d << endl;
	return 0;
}
