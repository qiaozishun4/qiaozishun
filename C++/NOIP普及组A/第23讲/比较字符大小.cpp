#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	/*
		sort():����
	*/
	int n;
	cin >> n;
	char a[101];
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a + 0, a + n);//�ڴ��ַ
	cout << a[n - 1] << " " << a[0];
	return 0;
}
