#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

using namespace std;

//�̳�
class Base
{
public:
	Base()
	{
		m_A = 10;
	}
	void func()
	{
		cout << "Base�µĺ�������" << endl;
	}
	void func(int a)
	{
		cout << "Base��ͬ���ĺ�������" << endl;
	}
	int m_A;
};
class Son : public Base
{
public:
	Son()
	{
		m_A = 20;
	}
	void func()
	{
		cout << "Son �µĺ�������" << endl;
	}
	int m_A;
};
void test01()
{
	Son s;
	cout << "Son  �µ�m_A��" << s.m_A << endl;
	cout << "Base �µ�m_A��" << s.Base::m_A << endl;
}
void test02()
{
	Son s;
	s.func();
	s.Base::func();
	s.Base::func(10);
}
int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}



//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class A :public Base
//{
//public:
//	int m_D;
//};
//void test01()
//{
//	cout << sizeof(A) << endl;
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}



//class BasePage
//{
//public:
//	void Page()
//	{
//		cout << "��������" << endl;
//	}
//}; 
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java������" << endl;
//	}
//};
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python������" << endl;
//	}
//};
//class Cpp :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Cpp������" << endl;
//	}
//};
//void test01()
//{
//	Java j;
//	j.Page();
//	j.content();
//	cout << "---------------" << endl;
//	Python p;
//	p.Page();
//	p.content();
//	cout << "---------------" << endl;
//	Java c;
//	c.Page();
//	c.content();
//	cout << "---------------" << endl;
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}