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
//		cout << "������" << hero[i].name << " ���䣺" << hero[i].age << " �Ա�" << hero[i].sex << endl;
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
//		{"����",23,"��"},
//		{"����",19,"��"},
//		{"�ŷ�",21,"��"},
//		{"����",22,"��"},
//		{"����",20,"Ů"},
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
//		cout << "��ʦ������" << t[i].name << " ��ʦ����ѧ��" << endl;
//		for (int j = 0;j < sz_s;j++)
//		{
//			cout << "\tѧ��������" << t[i].stu[j].name << " ѧ���ɼ���" << t[i].stu[j].score << endl;
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