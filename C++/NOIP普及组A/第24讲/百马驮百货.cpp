#include <iostream>

using namespace std;

int main() {
	int s = 0;
	for (int i = 0; i <= 33; i++){
		for (int j = 0; j <= 50; j++){
			s = 100 - i - j;
			if (i * 3 + j * 2 + s * 0.5 == 100){
				cout << i << " " << j << " " << s << endl;
			}
		}
	}
	return 0;
}
