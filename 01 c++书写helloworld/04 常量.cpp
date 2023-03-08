#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
//#define定义的宏常量
#define DAY 7
//定义后不可修改

using namespace std;

int main4()
{
	//const修饰的变量也是常量
	const int month = 30;
	//定义后不可修改
	cout << "一周总共有：" << DAY <<"天" << endl;

	cout << "一个月总共有" <<  month<<"天" << endl;

	system("pause");

	return 0;
}