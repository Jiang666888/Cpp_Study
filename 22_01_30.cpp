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
	cout << "姓名：" << s->name << "年龄：" << s->age << "分数：" << s->score << endl;
}
int main()
{
	struct Student s1 = { "张三",22,78 };
	printStudent(&s1);

	system("pause");
	return 0;
}
//int main()
//{
//	//struct Student s1 = { "张三",20,88 };
//	//cout << "姓名：" << s1.name << "年龄：" << s1.age << "分数：" << s1.score << endl;
//	struct Student s2[] =
//	{
//		{"张三",21,89},
//		{"李四",22,67},
//		{"王五",20,97}
//	};
//	s2[2].name = "牛七";
//	s2[2].age = 32;
//	s2[2].score = 98;
//	int sz = sizeof(s2) / sizeof(s2[0]);
//	for (int i = 0;i < sz;i++)
//	{
//		cout << "姓名：" << s2[i].name << "  年龄：" << s2[i].age << "  分数：" << s2[i].score << endl;
//	}
//
//	system("pause");
//	return 0;
//}