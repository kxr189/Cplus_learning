#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main2()
{
	//���ͣ�short \ int \ long \ long long
	short num1 = 10;
	cout << "shortռ�õ��ڴ�ռ�Ϊ���" << sizeof(short) << endl;
	cout << "num1ռ�õ��ڴ�ռ�Ϊ���" << sizeof(num1) << endl;
	int num2 = 10;
	cout << "intռ�õ��ڴ�ռ�Ϊ���" << sizeof(int) << endl;
	cout << "num2ռ�õ��ڴ�ռ�Ϊ���" << sizeof(num2) << endl;
	long num3 = 10;
	cout << "longռ�õ��ڴ�ռ�Ϊ���" << sizeof(long) << endl;
	cout << "num3ռ�õ��ڴ�ռ�Ϊ���" << sizeof(num3) << endl;
	long long num4 = 10;
	cout << "long longռ�õ��ڴ�ռ�Ϊ���" << sizeof(long long) << endl;
	cout << "num4ռ�õ��ڴ�ռ�Ϊ���" << sizeof(num4) << endl;

	//short < int <= long < long long

	system("pause");
	return 0;
}