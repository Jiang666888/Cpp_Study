#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

using namespace std;

//��̬��Ա����
class Person
{
public:
	static void func()
	{
		m_A = 100;
		cout << "Person�ľ�̬��Ա��������" << endl;
	}
	
	static int m_A;
};
int Person::m_A = 0;
void test01()
{
	Person p;
	p.func();
	Person::func();
}
int main()
{
	test01();

	system("pause");
	return 0;
}



//class Phone
//{
//public:
//	Phone(string name)
//	{
//		cout << "Phone�Ĺ��캯��" << endl;
//		m_PName = name;
//	}
//	~Phone()
//	{
//		cout << "Phone����������" << endl;
//	}
//	string m_PName;
//};
//class Person
//{
//public:
//	Person(string name, string pName):m_Name(name),m_phone(pName)
//	{
//		cout << "Person�Ĺ��캯��" << endl;
//	}
//	~Person()
//	{
//		cout << "Person����������" << endl;
//	}
//	string m_Name;
//	Phone m_phone;
//};
//void test01()
//{
//	Person p("����", "ƻ���ֻ�");
//	cout << p.m_Name << "����" << p.m_phone.m_PName << endl;
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}



//class Person
//{
//public:
//	Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c)
//	{
//
//	}
//	int m_A;
//	int m_B;
//	int m_C;
//};
//int main()
//{
//	Person p(30, 20, 10);
//	cout << "a��ֵΪ" << p.m_A << endl;
//	cout << "b��ֵΪ" << p.m_B << endl;
//	cout << "c��ֵΪ" << p.m_C << endl;
//
//	system("pause");
//	return 0;
//}