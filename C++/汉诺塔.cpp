#include <iostream>
using namespace std;
int n, k=1;//n:圆盘个数   k:移动次数 
void hanoi(int n, char X, char Z, char Y){//n:圆盘个数  X:源柱  Y:过渡柱  Z:目标柱 
    if(n==1 )
	{ //当X柱上只剩一个圆盘的时候，直接移动到Z柱 
        cout << k << ":" << X << "---->"<< Z << endl;//移动过程 
        k++;//移动次数累计 
        return ;
    }
    hanoi( n-1, X, Y, Z);//填空1，当X柱上还有超过一个圆盘的时候，先把上面的n-1个圆盘移动到中间Y柱上面 
    cout << k << ":" << X << "---->"<< Z << endl;//当把n-1个圆盘移走之后，再把最后一个圆盘从X柱移动到Z柱 
    k++;//移动次数累计 
    hanoi(n-1, Y, Z, X); //填空2，当前Y柱上有n-1个圆盘，需要再把这n-1个圆盘移动到Z柱上，此时X变为过渡柱 
} 
int main()
{
    cin >> n;//输入圆盘个数 
    hanoi(n,'X','Z','Y');//调用汉诺塔函数，初始状态为：X柱上有n个圆盘，Y为中间过渡柱，Z为目标柱
    return 0;
}
