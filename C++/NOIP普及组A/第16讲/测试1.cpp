#include<iostream>
#include <string.h>
using namespace std;
int CharToInt(char a1[], int a[]){
	int len = strlen(a1);
	for (int i = 0; i < len; i++) a[i] = a1[len - i - 1] - '0';
	return len;
}
void PrintfX(int a[], int len)
{
	for (int i = 0; i < len; i++){
		cout << a[len - i - 1];
	}
	cout << endl;
}
int main(){
	char a1[101] = {}, b1[101] = {};
	int a[101] = {}, b[101] = {}, c[101] = {};
	cin >> a1 >> b1;
	int lena = CharToInt(a1, a);
	int lenb = CharToInt(b1, b);
	int x = 0;
	for(int i = 0; i < lenb; i++) {
		b[i] = b[i] * 2 + x;
		x = b[i] / 10;
		b[i] %= 10;
	}
	PrintfX(b, lenb);
	int maxLen = max(lena, lenb);
	for (int i = 0; i < maxLen; i++){
		c[i] = a[i] - b[i];
	}
	
	for (int i = 0; i < maxLen; i++){
		cout << c[maxLen - i - 1];
	}
	//for (int i = 0; i < maxLen; i++) c[i] = a[i] - b[i] * 2;
	
	return 0;
}
