#include <iostream>
#define s swap
using namespace std;

int main(){
	//1:
	int a = 1,b = 2,c;
	printf("%d %d\n", a, b);
	c = a;a = b;b = c;
	printf("%d %d\n", a, b);
	//2:
	int d = 1,e = 2;
	printf("%d %d\n", d, e);
	d = d + e;e = d - e;d = d - e;
	printf("%d %d\n", d, e);
	//3:
	int f = 1, g = 2;
	printf("%d %d\n", f, g);
	s(f, g);
	printf("%d %d\n", f, g);
	return 0;
}
