#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	/*
		sort():ÅÅĞò
	*/
	int n;
	cin >> n;
	char a[101];
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a + 0, a + n);//ÄÚ´æµØÖ·
	cout << a[n - 1] << " " << a[0];
	return 0;
}
