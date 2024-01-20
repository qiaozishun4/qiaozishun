#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    /*
        字符串定义、获取带有空客个字符串：
        1、字符数组 char a[10]; gets(a)/cin.getline(a,10);
        2、字符串 string b   getline(cin,b);
        解决getline吸收数字后回车问题 getchar();
    */
    //string a;
    //cin >> a;
    //cout << a << endl;
    ////1、带有空格的字符数组
    //char a[10];
    ////gets(a);
    //cin.getline(a,10);
    //cout << a << " " << strlen(a) << endl;
    ////2、带有空格的字符串
    //string b;
    //getline(cin,b);
    //cout << b << " " << b.length() << endl;
    int n;
    cin >> n;
    string s,s1;
    //getchar(); //获取第一个字符（吸收回车）
    //getline(cin,s1);//吸收回车
    getline(cin, s);
    getline(cin, s1);
    cout << s << " " << s.length();
    return 0;
}