#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	if (n % 5 == 0){
		cout << n / 5 << endl;
	} else{
		cout << "No" << endl;
	}
	return 0;
}

