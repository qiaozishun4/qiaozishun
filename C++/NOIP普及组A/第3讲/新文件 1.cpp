#include <iostream>
using namespace std;

int main(){
	float zgl;
	cin >> zgl;
	if (zgl <= 5){
		cout << zgl * 3.0 << endl;
	}
	else {
		zgl -= 5;
		cout << 15.0 + ((zgl * 3.0) * 0.8) << endl;
	}
	return 0;
}