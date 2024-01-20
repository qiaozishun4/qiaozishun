#include <iostream>

using namespace std;

int main() {
    /*
        反之字矩阵
        奇数行倒序输出，偶数行正序输出
    */
    int n, a[50][50], cnt = 1;
    cin >> n;
    for (int i = n - 1; i >= 0; i--) {
        //奇数
        if (i % 2 == 1) for (int j = n - 1; j >= 0; j--) a[i][j] = cnt++;
        else for (int j = 0; j < n; j++) a[i][j] = cnt++;
    }
    //输出
    for (int i = 0; i < n; i++){//控制行
        for (int j = 0; j < n; j++) cout << a[i][j] << " ";
        cout << endl;
    }
}