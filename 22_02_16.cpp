#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

using namespace std;

//常函数和常对象
class Person
{
public:
	void showPerson() const
	{
		//this->m_A = 100;不可修改
		this->m_B = 100;
	}
	void func()
	{

	}
	int m_A;
	mutable int m_B;
};
void test01()
{
	const Person p;
	//p.m_A = 200;不可修改
	p.m_B = 200;
	p.showPerson();
	//p.func();常对象只能调用常函数
}
int main()
{


	system("pause");
	return 0;
}



//this的学习及空指针访问函数
//class Person
//{
//public:
//	Person()
//	{
//
//	}
//	Person(int age)
//	{
//		this->age = age;
//	}
//	Person& PersonAddAge(Person p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//	void ShowPersonName()
//	{
//		cout << "ShowPersonName" << endl; 
//	}
//	void ShowPersonAge()
//	{
//		cout << "ShowPersonAge:" << this->age << endl;
//	}
//	int age;
//};
//void test01()
//{
//	Person p1(18);
//	cout << p1.age << endl;
//}
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << p2.age << endl;
//}
//void test03()
//{
//	Person* p = NULL;
//	p->ShowPersonName();
//	//p->ShowPersonAge();
//}
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//
//	system("pause");
//	return 0;
//}



//静态成员函数
//class Person
//{
//public:
//	static void func()
//	{
//		//只能访问静态成员变量
//		m_A = 100;
//		cout << "静态成员函数调用" << endl;
//	}
//
//	static int m_A;
//};
//int Person::m_A = 0;
//void test01()
//{
//	Person p;
//	p.func();
//	Person::func();
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}




//静态成员变量
//class Person
//{
//public:
//	static int m_A;
//
//private:
//	static int m_B;
//};
//int Person::m_A = 100;
//int Person::m_B = 200;
//void test01()
//{
//	/*Person p1;
//	cout << p1.m_A << endl;
//	p1.m_A = 200;
//	Person p2;
//	cout << p2.m_A << endl;*/
//
//	cout << Person::m_A << endl;
//	//类外无法访问私有
//	//cout << Person::m_B << endl;
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}