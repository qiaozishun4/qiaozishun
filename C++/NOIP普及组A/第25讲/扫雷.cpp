#include <iostream>

using namespace std;

int main() {
    int n, m, cnt = 0;
    char arr[101][101] = {};
    cin >> n >> m;//n行 m列
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) cin >> arr[i][j];
    }
    //统计周围雷数
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            //如果是雷
            if (arr[i][j] == '*') cout << '*';
            //如果不是雷，统计周围8个格子的雷数
            else{
                if(arr[i - 1][j] == '*') cnt++;//上
                if(arr[i - 1][j + 1] == '*') cnt++;//右上
                if(arr[i][j + 1] == '*') cnt++; //右
                if(arr[i + 1][j + 1] == '*') cnt++;//右下
                if(arr[i + 1][j] == '*') cnt++;//下
                if(arr[i + 1][j - 1] == '*') cnt++;//左下
                if(arr[i][j - 1] == '*') cnt++;//左
                if(arr[i - 1][j - 1] == '*') cnt++;//左上
                cout << cnt;//输出当前格子周围的雷数
                cnt = 0;//统计完后归0，开始下一次的统计
            }
        }
        cout << endl;
    }
    return 0;
}