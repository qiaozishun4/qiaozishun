#include <stdio.h>

int main(){
	int a = 12;
	double b = 123.4212;
	char c = 'a';
	//scanf("%d", &a);
	//scanf("%lf", &b);
	scanf("%d,%lf,%c", &a, &b, &c);
	
	printf("%c\n", c);
	printf("a = %d\n", a);
	printf("b = %.3lf\n", b);
	
	printf("a = %d, b = %.2lf", a, b);
	return 0;
}
