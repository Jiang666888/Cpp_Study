#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

using namespace std;

//继承
class Base
{
public:
	Base()
	{
		m_A = 10;
	}
	void func()
	{
		cout << "Base下的函数调用" << endl;
	}
	void func(int a)
	{
		cout << "Base下同名的函数调用" << endl;
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
		cout << "Son 下的函数调用" << endl;
	}
	int m_A;
};
void test01()
{
	Son s;
	cout << "Son  下的m_A：" << s.m_A << endl;
	cout << "Base 下的m_A：" << s.Base::m_A << endl;
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
//		cout << "公共内容" << endl;
//	}
//}; 
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java的内容" << endl;
//	}
//};
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python的内容" << endl;
//	}
//};
//class Cpp :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Cpp的内容" << endl;
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