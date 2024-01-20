#include <iostream>
using namespace std;

int main(){
    bool nums[31];
	int n;
	cin >> n;
	for (int i = 0; i < 31; i++){
		nums[i] = true;
	}
	for (int i = 0; i < n; i++){
		if (i % 2 == 0){
			nums[i] = (1 - nums[i]) != 0;
		}
		if (i % 3 == 0){
			nums[i] = (1 - nums[i]) != 0;
		}
		if (i % 4 == 0){
			nums[i] = (1 - nums[i]) != 0;
		}
		if (i % 5 == 0){
			nums[i] = (1 - nums[i]) != 0;
		}
	}
	for (int i = 0; i < n; i++){
		if (nums[i] == 1){
			cout << i << " ";
		}
	}
    return 0;
}