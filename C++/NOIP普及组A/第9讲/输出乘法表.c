#include <stdio.h>

using namespace std;

int main(){
	for (int i = 1; i <= 9; i++){
		for (int j = 1; !(j == i); j++){
			printf("%d * %d = ", i, j);
			printf(" ");
		}
	printf("\n");
	}
	return 0;
}