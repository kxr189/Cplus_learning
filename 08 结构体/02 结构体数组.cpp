#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
//结构体数组

// 1、定义结构体
struct student
{
	string name;
	int age;
	int score;
};




int main2()
{
// 2、创建结构体数组
	struct student stuarray[3] =
	{
		{"张三",18,100},
		{"李四",28,99},
		{"王五",38,99}
	};
// 3、给结构体数组中的元素赋值
	stuarray[2].name = "赵六";
	stuarray[2].age = 90;
	stuarray[2].score = 60;
//4、遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << stuarray[i].name <<' '
			<< "年龄：" << stuarray[i].age <<' '
			<< "分数：" << stuarray[i].score << endl;
	}
	system("pause");
	return 0;
}