#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string.h >
#include <stdlib.h>

using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};
void printStudent(const struct Student* s)
{
	cout << "������" << s->name << "���䣺" << s->age << "������" << s->score << endl;
}
int main()
{
	struct Student s1 = { "����",22,78 };
	printStudent(&s1);

	system("pause");
	return 0;
}
//int main()
//{
//	//struct Student s1 = { "����",20,88 };
//	//cout << "������" << s1.name << "���䣺" << s1.age << "������" << s1.score << endl;
//	struct Student s2[] =
//	{
//		{"����",21,89},
//		{"����",22,67},
//		{"����",20,97}
//	};
//	s2[2].name = "ţ��";
//	s2[2].age = 32;
//	s2[2].score = 98;
//	int sz = sizeof(s2) / sizeof(s2[0]);
//	for (int i = 0;i < sz;i++)
//	{
//		cout << "������" << s2[i].name << "  ���䣺" << s2[i].age << "  ������" << s2[i].score << endl;
//	}
//
//	system("pause");
//	return 0;
//}