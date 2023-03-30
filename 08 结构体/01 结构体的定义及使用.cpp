#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>//使用c++的字符串，需要包含头文件
using namespace std;

//1、创建学生的数据类型：学生的属性：姓名、年龄、分数
//数据类型的集合
//自定义的数据类型
struct student
{
	//成员列表
	string name;
	int age;
	int score;
}s3;//顺便创建结构体变量

//2、通过学生的类型创建具体的学生

// 2.1 struct syudent s1
// 2.2 struct student s1={....}
// 2.3 在定义是顺便创建结构体变量

int main1()
{
	//2.1
	//结构体创建变量时struct可以省略、定义时则不可以
	student s1;
	s1.name = "kxr";
	s1.age = 21;
	s1.score = 100;
	cout << "姓名：" << s1.name << endl;
	cout << "年龄：" << s1.age << endl;
	cout << "分数：" << s1.score << endl;
	//2.2
	struct student s2 = { "kxr",21,100 };
	cout << "姓名：" << s2.name << endl;
	cout << "年龄：" << s2.age << endl;
	cout << "分数：" << s2.score << endl;
	//2.3 创建结构体时顺便创建变量
	s3.name = "kxr";
	s3.age = 21;
	s3.score = 100;
	cout << "姓名：" << s3.name << endl;
	cout << "年龄：" << s3.age << endl;
	cout << "分数：" << s3.score << endl;
	system("pause");

	return 0;
}