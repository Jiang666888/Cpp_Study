#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person的无参函数构造" << endl;
	}
	Person(int newAge,int newHeight)
	{
		age = newAge;
		height = new int(newHeight);
		cout << "Person的有参函数构造" << endl;
	}
	Person(const Person &p)
	{
		cout << "Person的无参函数构造" << endl;
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
		cout << "Person的析构函数构造" << endl;
	}
	int age;
	int* height;
};
void test01()
{
	Person p1(18, 175);
	cout << "p1的age为" << p1.age << ",p1的height为" << *p1.height << endl;
	Person p2(p1);
	cout << "p2的age为" << p2.age << ",p2的height为" << *p2.height << endl;
}
int main()
{
	test01();

	system("pause");
	return 0;
}