#include <iostream>

using namespace std;

int gxjs(int m, int n) {
    if (m > n) return gxjs(m - n, n);
    else if (m < n) return gxjs(m, n - m);
    else return m;
}

int main() {
    /*最大公约数-更相减损法*/
    int m, n;
    cin >> m >> n;
    cout << gxjs(m, n) << endl;
    return 0;
}