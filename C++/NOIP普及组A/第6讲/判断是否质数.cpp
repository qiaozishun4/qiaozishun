#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime(int num){
	if(num == 1)   return false;
	if(num == 2)	return true;
	for(int i = 2;i < sqrt(num) + 1; i++){
		if((num % i) == 0)	return false;
	}
	return true;
}

int main(){
	int a;
	cin >> a;
	cout << (IsPrime(a) ? "Y" : "N") << endl;
	return 0;
}
