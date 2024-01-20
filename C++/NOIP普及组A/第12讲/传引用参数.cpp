#include <iostream>
using namespace std;

void change(int &x, int &y){
	swap (x, y);
	cout << x << " " << y << endl;
}

int main(){
	/*
		传引用参数：形参改变，实参也跟着改变
		同步修改：在形参变量前加"&"
	*/
	int x, y;
	cin >> x >> y;
	change(x, y);
	cout << x << " " << y;
	return 0;
}
