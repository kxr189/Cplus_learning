#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>//ʹ��c++���ַ�������Ҫ����ͷ�ļ�
using namespace std;

//1������ѧ�����������ͣ�ѧ�������ԣ����������䡢����
//�������͵ļ���
//�Զ������������
struct student
{
	//��Ա�б�
	string name;
	int age;
	int score;
}s3;//˳�㴴���ṹ�����

//2��ͨ��ѧ�������ʹ��������ѧ��

// 2.1 struct syudent s1
// 2.2 struct student s1={....}
// 2.3 �ڶ�����˳�㴴���ṹ�����

int main1()
{
	//2.1
	//�ṹ�崴������ʱstruct����ʡ�ԡ�����ʱ�򲻿���
	student s1;
	s1.name = "kxr";
	s1.age = 21;
	s1.score = 100;
	cout << "������" << s1.name << endl;
	cout << "���䣺" << s1.age << endl;
	cout << "������" << s1.score << endl;
	//2.2
	struct student s2 = { "kxr",21,100 };
	cout << "������" << s2.name << endl;
	cout << "���䣺" << s2.age << endl;
	cout << "������" << s2.score << endl;
	//2.3 �����ṹ��ʱ˳�㴴������
	s3.name = "kxr";
	s3.age = 21;
	s3.score = 100;
	cout << "������" << s3.name << endl;
	cout << "���䣺" << s3.age << endl;
	cout << "������" << s3.score << endl;
	system("pause");

	return 0;
}