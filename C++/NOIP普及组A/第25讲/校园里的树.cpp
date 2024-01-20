#include <iostream>

using namespace std;

int main() {
    /*
        校园里的树
    */
    int tree[18] = {}, n, year;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> year;
        //让年份作为下标(年份 - 2000)，统计的个数作为值
        tree[year - 2000]++;
    }
    //找最大值
    for (int i = 0; i < n; i++) {
        if (tree[i] > max) max = tree[i];
    }
    //输出 （从数组中找到最大值，通过最大值找到对应的下标（年份），因为是按照从前向后的顺序找的，所以先找年份较小的，符合题意）
    for (int i = 0; i < n; i++) if (tree[i] == max) cout << i + 2000 << " ";
    }
    return 0;
}