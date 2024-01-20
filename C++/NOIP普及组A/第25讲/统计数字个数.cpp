#include <iostream>

using namespace std;

int main() {
    /*
        统计数字个数
        arr数组（个数）0 2 4 0 4 0 0 0 0 0 0  0  0  0  0  0
        输入的数（下标）0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
    */
    int arr[16] = {}, num;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        arr[num]++;//让对应下标位置上的值+1
    }
    //遍历15个数字，输出>0的值
    for (int i = 0; i < 15; i++) {
        if (arr[i] > 0) cout << i << " " << arr[i] << endl;
    }
    return 0;
}