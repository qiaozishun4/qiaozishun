#include <iostream>

using namespace std;

int main(){
	float metre;
	float walk = 0;
	float bike = 0;
	cin >> metre;
	walk = metre / 1.2;
	bike = metre / 3.0 + 23.0 + 27.0;
	if (walk < bike){
		cout << "Walk" << endl;
	} else if (walk > bike){
		cout << "Bike" << endl;
	} else{
		cout << "All" << endl;
	}
	return 0;
}
