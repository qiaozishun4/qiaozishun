#include <iostream>
using namespace std;

void out_put(int a[], int length){
	//将数组中的元素全部赋值为0
	for (int i = 0; i < length; i++){
		a[i] = 0;
		cout << a[i] << " ";
	}
}

int main(){
	/*
		一维数组作为函数参数格式：类型名 数组名[];([]中无需写出元素个数)
								  void 数组名(int a[])
		*数组作为函数参数时，是传引用的，即形参数组改变形参也会改变
	*/
	int a[4] = {4, 15, 6, 9};
	out_put(a, 4);
	return 0;
}
