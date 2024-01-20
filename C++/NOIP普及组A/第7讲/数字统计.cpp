#include <iostream>
using namespace std;

int main(){
    int l, r, q;
    int s = 0;
    cin >> l >> r;
    for (int i = l; i <= r; i++){
        q = i;
        while (q){
            if (q % 10 == 2) s++;
            q /= 10;
        }
    }
    cout << s;
    return 0;
}
