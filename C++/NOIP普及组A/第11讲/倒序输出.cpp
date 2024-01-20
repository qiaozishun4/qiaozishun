#include <iostream>
using namespace std;

int main(){
	/*
		
	*/
	char a[501];
	while (cin >> a){
		//倒序输出
		strrev(a);
		cout << a << " ";
	}
	return 0;
}