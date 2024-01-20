#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int k, temp = 0, k2;
	char j;
	cin >> k >> j;
	if (k <= 1000){
		if (j != 'y'){
			cout << 5 << endl;
		} else{
			cout << 10 << endl;
		}
	} else{
		k -= 1000;
		temp += 8;
		k2 = k / 500;
		temp += k2 * 4;
		k -= k2 * 500;
		if (k != 0){
			temp += 4;
		}
		if (j != 'y'){
			cout << temp << endl;
		} else{
			cout << temp + 5 << endl; 
		}
	}
	return 0;
}