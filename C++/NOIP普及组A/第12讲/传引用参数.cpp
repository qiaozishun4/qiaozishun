#include <iostream>
using namespace std;

void change(int &x, int &y){
	swap (x, y);
	cout << x << " " << y << endl;
}

int main(){
	/*
		�����ò������βθı䣬ʵ��Ҳ���Ÿı�
		ͬ���޸ģ����βα���ǰ��"&"
	*/
	int x, y;
	cin >> x >> y;
	change(x, y);
	cout << x << " " << y;
	return 0;
}
