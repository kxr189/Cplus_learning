#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main2()
{
	//整型：short \ int \ long \ long long
	short num1 = 10;
	cout << "short占用的内存空间为多大：" << sizeof(short) << endl;
	cout << "num1占用的内存空间为多大：" << sizeof(num1) << endl;
	int num2 = 10;
	cout << "int占用的内存空间为多大：" << sizeof(int) << endl;
	cout << "num2占用的内存空间为多大：" << sizeof(num2) << endl;
	long num3 = 10;
	cout << "long占用的内存空间为多大：" << sizeof(long) << endl;
	cout << "num3占用的内存空间为多大：" << sizeof(num3) << endl;
	long long num4 = 10;
	cout << "long long占用的内存空间为多大：" << sizeof(long long) << endl;
	cout << "num4占用的内存空间为多大：" << sizeof(num4) << endl;

	//short < int <= long < long long

	system("pause");
	return 0;
}