#include <stdio.h>

int main(){
    int n, t1, t2, cnt = 0, maxn = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d%d", &t1, &t2);
        if (t1 >= 90 && t1 <= 140 && t2 >= 60 && t2 <= 90){
            cnt ++;
            if (cnt > maxn){
                maxn = cnt;
            }
        } else{
            cnt = 0;
        }
    }
    printf("%d", maxn);
    return 0;
}