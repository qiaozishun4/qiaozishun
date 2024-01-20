#include <iostream>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    int eaten = y / x;
    int remaining = n - eaten;
	
    if (remaining < 0) {
        remaining = 1;
    }
    cout << remaining - 1 << endl;

    return 0;
}
