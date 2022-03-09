#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

using namespace std;

//运算符重载
//函数调用运算符重载
class MyPrint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
	int operator()(int a, int b)
	{
		return a + b;
	}
};
void test01()
{
	MyPrint myprint1;
	myprint1("Hello World!");
}
void test02()
{
	MyPrint myprint2;
	int ret = myprint2(10, 20);
	cout << ret << endl;
	cout << MyPrint()(100,200) << endl;
}
int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}



//关系运算符重载
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	bool operator==(Person& p)
//	{
//		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	bool operator!=(Person& p)
//	{
//		if (this->m_Age != p.m_Age || this->m_Name != p.m_Name)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	string m_Name;
//	int m_Age;
//};
//void test01()
//{
//	Person p1("Marry", 19);
//	Person p2("Marry", 19);
//	if (p1 != p2)
//	{
//		cout << "p1和p2不相等" << endl;
//	}
//	else
//	{
//		cout << "p1和p2相等" << endl;
//	}
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}


//赋值运算符重载
//class Person
//{
//public:
//	Person(int a)
//	{
//		this->m_Age = new int(a);
//	}
//	Person& operator=(Person& p)
//	{
//		if (this->m_Age != NULL)
//		{
//			delete this->m_Age;
//			this->m_Age = NULL;
//		}
//		this->m_Age = p.m_Age;
//		return *this;
//	}
//	int* m_Age;
//};
//void test01()
//{
//	Person p1(10);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1;
//	cout << "p1=" << *p1.m_Age << endl;
//	cout << "p2=" << *p2.m_Age << endl;
//	cout << "p3=" << *p3.m_Age << endl;
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}



//左移运算符重载
//递增递减运算符重载
//class Person
//{
//	friend ostream& operator<<(ostream& out, Person p);
//public:
//	Person(int a)
//	{
//		this->m_Num = a;
//	}
//	Person& operator++()
//	{
//		m_Num++;
//		return *this;
//	}
//	Person operator++(int)
//	{
//		Person temp = *this;
//		m_Num++;
//		return temp;
//	}
//	Person& operator--()
//	{
//		m_Num--;
//		return *this;
//	}
//	Person operator--(int)
//	{
//		Person temp = *this;
//		m_Num--;
//		return temp;
//	}
//private:
//	int m_Num;
//};
//
//ostream& operator<<(ostream& out, Person p)
//{
//	out << "m_Num=" << p.m_Num;
//	return out;
//}
//
//void test01()
//{
//	Person p1(10);
//	/*cout << ++(++p1) << endl;
//	cout << p1 << endl;*/
//	cout << --p1 << endl;
//	cout << p1 << endl;
//}
//void test02()
//{
//	Person p2(10);
//	/*cout << p2++ << endl;
//	cout << p2 << endl;*/
//	cout << p2-- << endl;
//	cout << p2 << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	
//	system("pause");
//	return 0;
//}



//加法运算符重载
//class Person
//{
//public:
//	/*Person operator+(Person& p)
//	{
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}*/
//	int m_A;
//	int m_B;
//};
//Person operator+(Person& p1, Person& p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//int operator+(Person& p, int a)
//{
//	return p.m_A + a;
//}
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 20;
//	p2.m_B = 20;
//	Person p3;
//	//成员函数调用
//	//p3 = p1.operator+(p2);
//	//p3 = p1 + p2;
//	//全局函数调用
//	p3 = operator+(p1, p2);
//	//p3 = p1 + p2;
//	int ret = p1 + 30;
//	cout << p3.m_A << endl;
//	cout << p3.m_B << endl;
//	cout << ret << endl;
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}