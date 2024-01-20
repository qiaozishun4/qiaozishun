#include<iostream>
using namespace std;
int main(){
    double ans = 0, n;
	cin >> n;
	ans += n;
	int i = 1;
    for (int i = 0; i < 9; i++){
        n /= 2;
		ans += n * 2;
    }
    return 0;
}
