#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>
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
    freopen("sushu.in", "r", stdin);
	freopen("sushu.out", "w", stdout);
	int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    vector<int> primes;
    for (int num : numbers) {
        if (isPrime(num)) {
            primes.push_back(num);
        }
    }

    if (primes.empty()) {
        cout << -1 << endl;
    } else {
        for (int prime : primes) {
            cout << prime << " ";
        }
        cout << endl;
    }
	
	fclose(stdin);
	fclose(stdout);
    return 0;
}
