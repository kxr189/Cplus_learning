#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;

int main6()
{
	//起名时最好见名知意
	int a1=1;
	int a_1=2;
	int _a1=3;
	int _A1=4;//区分大小写
	//int 1_a;无效，会报错
	cout << "a1=" << a1 << endl;
	cout << "a_1=" << a_1 << endl;
	cout << "_a1=" << _a1 << endl;
	cout << "_A1=" << _A1 << endl;
	system("pause");
	return 0;
}
