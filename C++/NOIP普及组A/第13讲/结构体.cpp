#include <iostream>
using namespace std;
//结构体类型的定义
struct stu{
	int num;
	string name;
	double chinese, math, english;
};

int main(){
	//结构体变量的定义和赋值
	stu a[10];
	for (int i = 0; i < 3; i++){
		cin >> a[i].num;
		cin >> a[i].name;
		cin >> a[i].chinese;
		cin >> a[i].math;
		cin >> a[i].english;
	}
	for (int i = 0; i < 3; i++){
		cout << a[i].num << " " << a[i].name;
	}
	return 0;
}
