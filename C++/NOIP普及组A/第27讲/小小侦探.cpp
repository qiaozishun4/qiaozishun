#include <iostream>

using namespace std;

int main() {
    /*
        小小侦探
    */
    string s;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        else if s[i] -= 32;
    }
    for (int i = 0; i < len; i++) {
        s[i] += 3;
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] = (s[i] - 'A') % 26 + 'A';
        else s[i] = (s[i] - 'a') % 26 + 'a';
    }
    for (int i = len - 1; i < 0; i--) cout << s[i];
    return 0;
}