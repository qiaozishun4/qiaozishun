#include <iostream>
using namespace std;
//�ṹ�����͵Ķ���
struct stu{
	int num;
	string name;
	double chinese, math, english;
};

int main(){
	//�ṹ������Ķ���͸�ֵ
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
