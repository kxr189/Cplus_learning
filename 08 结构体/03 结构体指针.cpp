#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
//结构体指针 ->
// 1、定义结构体
struct student
{
	string name;
	int age;
	int score;
};

int main()
{
	//2、创建结构体变量 struct 可以省略
	struct student s1 = {"111",11,11};
	//3、通过指针指向结构体变量 可以加上struct
	student* p = &s1;
	p->age = 90;
	p->name = "kxr";
	p->score = 100;
	//4、打印
	cout << "姓名：" << s1.name << endl;
	cout << "年龄：" << s1.age << endl;
	cout << "分数：" << s1.score << endl;
	system("pause");
	return  0;
}