#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
//�ṹ��ָ�� ->
// 1������ṹ��
struct student
{
	string name;
	int age;
	int score;
};

int main()
{
	//2�������ṹ����� struct ����ʡ��
	struct student s1 = {"111",11,11};
	//3��ͨ��ָ��ָ��ṹ����� ���Լ���struct
	student* p = &s1;
	p->age = 90;
	p->name = "kxr";
	p->score = 100;
	//4����ӡ
	cout << "������" << s1.name << endl;
	cout << "���䣺" << s1.age << endl;
	cout << "������" << s1.score << endl;
	system("pause");
	return  0;
}