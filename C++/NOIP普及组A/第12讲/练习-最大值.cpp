#include <iostream>
using namespace std;

int maxn(int a, int b, int c, int d){
	if (a < b) a = b;
	if (a < c) a = c;
	if (a < d) a = d;
	return a;
}

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << maxn(a, b, c, d);
	return 0;
}
