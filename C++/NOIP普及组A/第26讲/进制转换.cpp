#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    /*
      进制转换
    */
    string m;//十六进制包含字母
    int n, a, res = 0, sum = 0;
    cin >> n >> m >> a;
    int len = m.length();
    //思路：n进制转换为10进制 10进制转换为a进制
    //1、n-->10 按权展开求和法（当前数字*位权 求和）
    for (int i = 0; i < len; i++) {
        if (m[i] < 'A') {//数字
            res = pow(n, len - 1 - i);//位权
            res = (m[i] - '0') * res;
            sum += res;
        } else {
            res = pow(n, len - 1 - i);
            res = (m[i] - 'A' + 10) * res;
            sum += res;
        }
    }
    //cout << sum;
    int b[101], j = 0;
    while (sum > 0) {
        b[j] = sum % a;
        sum /= a;
        j++;
    }

    for (int i = j - 1; i >= 0; i--) {
        if (b[i] >= 10) cout << (char)b[i] - 10 + 'A';
        else cout << b[i];
    }
    return 0;
}