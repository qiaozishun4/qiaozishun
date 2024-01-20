#include <iostream>
using namespace std;

int main(){
	/*
		break:跳出循环
		continue:跳过本次循环，开始下一次循环
	*/
	int i = 0;
	while (i <= 100){
		i++;
		if(i == 6){
			continue;//break;
		}
		cout << i << " ";
	}
	return 0;
}