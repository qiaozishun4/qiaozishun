#include <iostream>
#include <algorithm>
using namespace std;

struct num{
	int n;
	int rank;
	int index;
};

bool compare1(num a, num b){
	return a.n < b.n;
}

bool compare2(num a, num b){
	return a.index < b.index;
}

int main(){
	num a[10005];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i].n;
		a[i].index = i;
	}
	// 8 2 6 9 4
	sort(a, a + n, compare1);
	// 2 4 6 8 9
	for (int i = 0; i < n; i++){
		a[i].rank = i + 1;
	}
	sort(a, a + n, compare2);
	// 8 2 6 9 4
	for (int i = 0;i < n; i++){
		cout << a[i].rank << " ";
	}
	return 0;
}
