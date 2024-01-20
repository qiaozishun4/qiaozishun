#include <iostream>
#include <algorithm>
using namespace std;

int compare(int a, int b){
	return a < b;
}

int main(){
    /*
		sort():排序方法，默认按照升序排序(从小到大)
		包含头文件：#include <algorithm>
		格式：sort(初始位置，结束位置)
	*/
	
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	sort(arr, arr + n, compare);
	for (int value : arr){
		cout << value << " ";
	}
    return 0;
}
