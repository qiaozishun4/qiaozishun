#include <iostream>
#include <cstring>
using namespace std;

int main(){
	/*
		1、字符串常量：用双引号引起来的0个或多个字符组成的序列
		2、在内存以\0结束
		3、格式
			char arr[6] = {"hello"};
			char arr[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
		4、字符串数组和字符数组的区别
			char arr[3] = {'a', 'b', '\0'};
			char arr[3] = {'a', 'b', 'c'};
		5、
			输入(不含有空格)使用for循环cin>>数组名[下标]
			输入(含有空格)使用cin.getline
	*/
	/*char arr[6] = {"hello"};
	for (int i = 0; i < 5; i++){
		cout << arr[i];
	}*/
	//无空格
	char arr1[5];
		for (int i = 0; i < 4; i++){
			cin >> arr1[i];
			cout << arr1[i];
		}
	//有空格
	char arr2[5];
	cin.getline(arr2, 5);
	cout << arr2;
	return 0;
}
