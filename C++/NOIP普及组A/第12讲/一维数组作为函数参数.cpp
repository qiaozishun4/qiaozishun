#include <iostream>
using namespace std;

void out_put(int a[], int length){
	//�������е�Ԫ��ȫ����ֵΪ0
	for (int i = 0; i < length; i++){
		a[i] = 0;
		cout << a[i] << " ";
	}
}

int main(){
	/*
		һά������Ϊ����������ʽ�������� ������[];([]������д��Ԫ�ظ���)
								  void ������(int a[])
		*������Ϊ��������ʱ���Ǵ����õģ����β�����ı��β�Ҳ��ı�
	*/
	int a[4] = {4, 15, 6, 9};
	out_put(a, 4);
	return 0;
}
