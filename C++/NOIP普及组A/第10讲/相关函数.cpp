#include <iostream>
#include <cstring>
using namespace std;

int main(){
	/*
		包含头文件:#include <cstring>
		strlen():获取字符数组获取字符串常量中有效字符的数量（不包含\0）
		strcat(a, b):将b字符串拼接到a字符串后（字符数组获取字符串常量）
	*/
	//strlen()
	char a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << strlen(a) << endl;
	cout << strlen("hello") << endl;
	//strcat()
	char a1[7] = "noip";
	char b[5] = "2023";
	strcat(a1, b);
	
	char a2[4] = "hah";
	char b1[4] = "heh";
	cout << strcmp(a, b) << endl;
	return 0;
}
