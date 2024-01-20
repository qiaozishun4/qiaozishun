#include <iostream>
#include <cstring>

using namespace std;

int main() {
    /*
        英文警示符
    */
    char s[105];
    cin.getline(s, 105);
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') cout << char(s[i] - 32);
        else cout << s[i];
    }
}