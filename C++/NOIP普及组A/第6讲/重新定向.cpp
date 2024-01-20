#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main(){
	/*
		重定向
		头文件：cstdio
		格式：
			打开：freopen(文件名, 文件的打开方式r/w, 标准流文件stdin/stdout)
			关闭：fclose(stdin/stdout)
	*/
	//打开输入、输出流文件
	freopen("test.in", "r", stdin);
	freopen("test.out", "w", stdout);
	
	//逻辑代码
	int a;
	cin >> a;
	cout << a;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
