#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
//�ṹ������

// 1������ṹ��
struct student
{
	string name;
	int age;
	int score;
};




int main2()
{
// 2�������ṹ������
	struct student stuarray[3] =
	{
		{"����",18,100},
		{"����",28,99},
		{"����",38,99}
	};
// 3�����ṹ�������е�Ԫ�ظ�ֵ
	stuarray[2].name = "����";
	stuarray[2].age = 90;
	stuarray[2].score = 60;
//4�������ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << "������" << stuarray[i].name <<' '
			<< "���䣺" << stuarray[i].age <<' '
			<< "������" << stuarray[i].score << endl;
	}
	system("pause");
	return 0;
}