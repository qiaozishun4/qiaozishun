#include <fstream>
using namespace std;

int main(){
	/*
		输入输出流
		头文件：fstream
		输入流：ifstream：用于从文件中读取数据
			ifstream cin("test1.in);
		输出流：ofstream:用于从文件中写入数据
			ofstream cout("test1.out");
		关闭文件：cin.close() / cout.close();
		【注意】不能有iostream头文件，否则会显示cin来源不明确
	*/
	//打开输入、输出流文件
	ifstream cin("test.in");
	ofstream cout("test.out");
		
	//逻辑代码
	int a;
	cin >> a;
	//scanf("%d", &a);
	cout << a;
	//printf("%d", a);
	cin.close();
	cout.close();
	return 0;
}
