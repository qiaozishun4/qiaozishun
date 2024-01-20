#include <iostream>

using namespace std;

int main() {
    /*
        蛇形矩阵
        1、N*N的矩阵，有2n-1条对角线
            （j表示行 k表示列）
        2、奇数对角线（左下到右上）：
            第1条对角线
            第3条对角线
            第5条对角线
            第i条对角线：j + k = i - 1
        3、偶数对角线（右上到左下）：
            第2条对角线
            第4条对角线
            第6条对角线
    */
    int n, s = 1, a[101][101];
    cin >> n;
    //对角线个数
    for(int i = 0; i <= 2 * n - 1; i++) {
        //奇数
        if(i % 2 != 0) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) if(j + k == i - 1) a[j][k] = s++;
            }
        }
        //偶数
        else {
            for (int j = n - 1; j >= 0; j--) {
                for (int k = n - 1; k >= 0; k--) {
                    if(j + k == i - 1) a[j][k] = s++;
                }
            }
        }
    }
    //输出
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}