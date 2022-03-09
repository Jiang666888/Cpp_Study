#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>

using namespace std;

//类模板
//类外实现
template<class NameType,class AgeType = int>
class Person
{
public:
	Person(NameType name, AgeType age);
	void showInfo();
	NameType m_Name;
	AgeType m_Age;
};
template<class NameType,class AgeType>
Person<NameType, AgeType>::Person(NameType name, AgeType age)
{
	this->m_Name = name;
	this->m_Age = age;
}
template<class NameType, class AgeType>
void Person<NameType, AgeType>::showInfo()
{
	cout << "m_Name=" << this->m_Name << " m_Age=" << this->m_Age << endl;
}
void test01()
{
	Person<string, int> p("张三", 27);
	p.showInfo();
}
int main()
{
	test01();

	system("pause");
	return 0;
}




//类模板继承
//template<class T>
//class Base
//{
//public:
//	T m;
//};
//class Son1 :public Base<int>
//{
//
//};
//template<class T1,class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1的数据类型为" << typeid(T1).name() << endl;
//		cout << "T2的数据类型为" << typeid(T2).name() << endl;
//	}
//	T1 n;
//};
//void test01()
//{
//	Son2<string, int> s;
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}




//template<class NameType,class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showInfo()
//	{
//		cout << "m_Name=" << this->m_Name << " m_Age=" << this->m_Age << endl;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//};
//void test01()
//{
//	Person<string> p1("张三", 18);
//	p1.showInfo();
//}
//
//
//class Person1
//{
//public:
//	void showInfo1()
//	{
//		cout << "Person1的打印" << endl;
//	}
//};
//class Person2
//{
//public:
//	void showInfo2()
//	{
//		cout << "Person2的打印" << endl;
//	}
//};
//template<class T>
//class MyClass
//{
//public:
//	T obj;
//	void print1()
//	{
//		obj.showInfo1();
//	}
//	void print2()
//	{
//		obj.showInfo2();
//	}
//};
//void test02()
//{
//	MyClass<Person1> c1;
//	c1.print1();
//}
//
//
////指定传入类型
//template<class T1,class T2>
//class Person3
//{
//public:
//	Person3(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void PrintInfo()
//	{
//		cout << "m_Name=" << this->m_Name << " m_Age=" << this->m_Age << endl;
//	}
//	T1 m_Name;
//	T2 m_Age;
//};
//void printPerson1(Person3<string, int> &n)
//{
//	n.PrintInfo();
//}
//void test03()
//{
//	Person3<string, int> p("李四", 48);
//	printPerson1(p);
//}
////参数模板化
//template<class T1, class T2>
//void printPerson2(Person3<T1, T2>& m)
//{
//	m.PrintInfo();
//	cout << "T1的类型为" << typeid(T1).name() << endl;
//	cout << "T2的类型为" << typeid(T2).name() << endl;
//}
//void test04()
//{
//	Person3<string, int> p("李六", 32);
//	printPerson2(p);
//}
////整个类模板化
//template<class T>
//void printPerson3(T &q)
//{
//	q.PrintInfo();
//	cout << "T的数据类型为" << typeid(T).name() << endl;
//}
//void test05()
//{
//	Person3<string, int> p("琪琪", 21);
//	printPerson3(p);
//}
//int main()
//{
//	//test01();
//	//test02();
//	//test03();
//	//test04();
//	test05();
//
//	system("pause");
//	return 0;
//}