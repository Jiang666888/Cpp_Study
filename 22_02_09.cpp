#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person���޲κ�������" << endl;
	}
	Person(int newAge,int newHeight)
	{
		age = newAge;
		height = new int(newHeight);
		cout << "Person���вκ�������" << endl;
	}
	Person(const Person &p)
	{
		cout << "Person���޲κ�������" << endl;
		age = p.age;
		height = new int(p.age);
	}
	~Person()
	{
		if (height != NULL)
		{
			delete height;
			height = NULL;
		}
		cout << "Person��������������" << endl;
	}
	int age;
	int* height;
};
void test01()
{
	Person p1(18, 175);
	cout << "p1��ageΪ" << p1.age << ",p1��heightΪ" << *p1.height << endl;
	Person p2(p1);
	cout << "p2��ageΪ" << p2.age << ",p2��heightΪ" << *p2.height << endl;
}
int main()
{
	test01();

	system("pause");
	return 0;
}