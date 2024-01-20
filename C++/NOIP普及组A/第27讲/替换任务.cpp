#include <iostream>
#include <cstring>

using namespace std;

int main() {
    /*
        替换任务
    */
    char str[205];
    cin.getline(str, 205);
    char a, b;
    cin >> a >> b;
    for (int i = 0; i < strlen(str); i++) {
        //替换
        if (str[i] == a) cout <<  b;
        else cout << str[i];
    }
    return 0;
}