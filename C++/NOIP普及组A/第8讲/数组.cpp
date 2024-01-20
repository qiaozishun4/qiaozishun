#include <bits/stdc++.h>
using namespace std;

int main(){
	/*
		1、数组：相同数据类型的元素组合成集合
		2、格式：数据类型数组名[长度] = {数组的元素}
		3、获取数组中的元素：数组名[下标] (下标不可越界，没有负数下标)
		4、数组初始化
			①完全初始化 int arr[3] = {1, 2, 3};
			②部分初始化
				int arr[3] = {};数组中所有元素都为0
				int arr[3] = {1};第一个元素为1，其余为0
			③特殊初始化
				int arr[] = {1, 2}; 数组大小会根据当元素数量决定
		5、当数组长度比较大时，需要放在main函数外部，并且在没有赋值时，初始值为0
	*/
	
	//完全初始化
	int a[3] = {1, 3, 2};
	for (int value : a){
		cout << value << " ";
	}
	cout << endl;
	//部分初始化
	int arr[3] = {};
	for (int value : a){
		cout << value << " ";
	}
	cout << endl;
	//cout << *(a + 2) << endl;
	return 0;
}
