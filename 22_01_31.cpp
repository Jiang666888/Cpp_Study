#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
	system("pause");
	return 0;
}



//struct Hero
//{
//	string name;
//	int age;
//	string sex;
//};
//void printHero(struct Hero hero[], int len)
//{
//	for (int i = 0;i < len;i++)
//	{
//		cout << "姓名：" << hero[i].name << " 年龄：" << hero[i].age << " 性别：" << hero[i].sex << endl;
//	}
//}
//void sortHero(struct Hero hero[], int len)
//{
//	for (int i = 0;i < len-1;i++)
//	{
//		for (int j = 0;j < len-i-1;j++)
//		{
//			if (hero[j].age < hero[j + 1].age)
//			{
//				struct Hero tmp = hero[j];
//				hero[j] = hero[j + 1];
//				hero[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	struct Hero hero[5] =
//	{
//		{"刘备",23,"男"},
//		{"关羽",19,"男"},
//		{"张飞",21,"男"},
//		{"赵云",22,"男"},
//		{"貂蝉",20,"女"},
//	};
//	int sz = sizeof(hero) / sizeof(hero[0]);
//	printHero(hero, sz);
//	sortHero(hero, sz);
//	cout << endl;
//	printHero(hero, sz);
//
//	system("pause");
//	return 0;
//}



//struct Student
//{
//	string name;
//	int score;
//};
//struct Teacher
//{
//	string name;
//	struct Student stu[5];
//};
//void asignMent(struct Teacher t[], int sz_t, int sz_s)
//{
//	string nameTea = "ABC";
//	string nameStu = "ABCDE";
//	for (int i = 0;i < sz_t;i++)
//	{
//		t[i].name = "Teacher_";
//		t[i].name += nameTea[i];
//		for (int j = 0;j < sz_s;j++)
//		{
//			t[i].stu[j].name = "Student_";
//			t[i].stu[j].name += nameStu[j];
//			t[i].stu[j].score = rand() % 61 + 40;
//		}
//	}
//}
//void printTeacher(struct Teacher t[],int sz_t,int sz_s)
//{
//	
//	for (int i = 0;i < sz_t;i++)
//	{
//		cout << "老师姓名：" << t[i].name << " 老师所带学生" << endl;
//		for (int j = 0;j < sz_s;j++)
//		{
//			cout << "\t学生姓名：" << t[i].stu[j].name << " 学生成绩：" << t[i].stu[j].score << endl;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned)time(NULL));
//	struct Teacher t[3];
//	int sz_t = sizeof(t) / sizeof(t[0]);
//	int sz_s = sizeof(t->stu) / sizeof(t->stu[0]);
//	asignMent(t,sz_t, sz_s);
//	printTeacher(t, sz_t, sz_s);
//	
//	system("pause");
//	return 0;
//}