#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    freopen("goldbach.in", "r", stdin);
	freopen("goldbach.out", "w", stdout);
    
	int n;
    cin >> n;

    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            cout << n << "=" << i << "+" << n - i << endl;
            break;
        }
    }
	
	fclose(stdin);
	fclose(stdout);
    return 0;
}
