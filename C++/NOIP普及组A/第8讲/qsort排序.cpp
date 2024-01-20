#include <stdlib.h>
#include <iostream>
using namespace std;

int compare(const void * a, const void * b){
	return ( *(int*)a - *(int*)b );
}

int main(){
    int arr[5] = {6, 9, 3, 5, 7};
    qsort(arr, 5, sizeof(int), compare);
    for (int value : arr){
        cout << value << " ";
    }
    return 0;
}