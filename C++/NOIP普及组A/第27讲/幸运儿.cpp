#include <iostream>

using namespace std;

int main() {
    /*
        幸运儿
        思路：用字母的ascii码值作为下标，
        对应数组中元素作为个数
        ababdc
        2   1   3   0   0
        97  98  99  100 101
        再遍历ababdc 看下第一个对应的值为1 输出即可
    */
    char str[101];
    cin >> str;
    int count[256] = {};
    //统计每个字符的个数
    int n = 0;
    while (str[n] != '\0') {
        count[str[n]]++;
        n++;
    }
    //顺序查看谁是以一个出现的
    n = 0;
    while (str[n] != '\0') {
        if (count[str[n]] == 1) {
            cout << n + 1;
            return 0;
        }
        n++;
    }
    cout << "no";
    return 0;
}