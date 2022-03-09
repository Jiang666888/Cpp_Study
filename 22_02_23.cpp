#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

using namespace std;

//多态
// 饮品制作
class AbstractDrinking
{
public:
	virtual void Boil() = 0;
	virtual void Brew() = 0;
	virtual void PourInCup() = 0;
	virtual void PutSomething() = 0;
	void MakeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};
class Coffee : public AbstractDrinking
{
public:
	void Boil()
	{
		cout << "煮饮用水" << endl;
	}
	void Brew()
	{
		cout << "加咖啡粉" << endl;
	}
	void PourInCup()
	{
		cout << "放入水杯" << endl;
	}
	void PutSomething()
	{
		cout << "加入白糖" << endl;
	}
};
class Tea : public AbstractDrinking
{
public:
	void Boil()
	{
		cout << "煮矿泉水" << endl;
	}
	void Brew()
	{
		cout << "加入茶叶" << endl;
	}
	void PourInCup()
	{
		cout << "放入水杯" << endl;
	}
	void PutSomething()
	{
		cout << "加入枸杞" << endl;
	}
};
void doWork(AbstractDrinking* drinking)
{
	drinking->MakeDrink();
	delete drinking;
}
void test01()
{
	doWork(new Tea);
}
int main()
{
	test01();

	system("pause");
	return 0;
}



// 纯虚函数和抽象类
//class Person
//{
//public:
//	virtual void func() = 0;
//};
//class Son :public Person
//{
//public:
//	virtual void func() 
//	{
//		cout << "func的函数调用" << endl;
//	};
//};
//void test01()
//{
//	Person* person = new Son;
//	person->func();
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}



// 计算器
//class Calculator
//{
//public:
//	virtual void count()
//	{
//		cout << "符号有误！" << endl;
//	}
//	int m_A;
//	int m_B;
//};
//class Add :public Calculator
//{
//public:
//	void count()
//	{
//		cout << m_A << " + " << m_B << " = " << m_A + m_B << endl;
//	}
//};
//class Sub :public Calculator
//{
//public:
//	void count()
//	{
//		cout << m_A << " - " << m_B << " = " << m_A - m_B << endl;
//	}
//};
//class Mul :public Calculator
//{
//public:
//	void count()
//	{
//		cout << m_A << " * " << m_B << " = " << m_A * m_B << endl;
//	}
//};
//class Div :public Calculator
//{
//public:
//	void count()
//	{
//		cout << m_A << " / " << m_B << " = " << m_A / m_B << endl;
//	}
//};
//void test01()
//{
//	Calculator* add = new Add;
//	add->m_A = 10;
//	add->m_B = 10;
//	add->count();
//	delete add;
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}



//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "动物在叫" << endl;
//	}
//};
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "猫在叫" << endl;
//	}
//};
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "狗在叫" << endl;
//	}
//};
//void doSpeak(Animal& animal)
//{
//	animal.speak();
//}
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//	Dog dog;
//	doSpeak(dog);
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}






//继承
//菱形继承 
//class Animal
//{
//public:
//	int m_Age;
//};
//class Sheep :virtual public Animal{};
//class Camel :virtual public Animal{};
//class Alpaca:public Sheep,public Camel{};
//void test01()
//{
//	Alpaca al;
//	al.Sheep::m_Age = 18;
//	al.Camel::m_Age = 28;
//	cout << "Sheep的m_Age:" << al.Sheep::m_Age << endl;
//	cout << "Camel的m_Age:" << al.Camel::m_Age << endl;
//	cout << "Alpaca的m_Age:" << al.m_Age << endl;
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}



//多继承语法
//class Base1
//{
//public:
//	Base1()
//	{
//		m_A = 10;
//	}
//	int m_A;
//};
//class Base2
//{
//public:
//	Base2()
//	{
//		m_A = 20;
//	}
//	int m_A;
//};
//class Son :public Base1, public Base2
//{
//public:
//	Son()
//	{
//		m_C = 30;
//		m_D = 40;
//	}
//	int m_C;
//	int m_D;
//};
//void test01()
//{
//	Son s;
//	cout << sizeof(s) << endl;
//	cout << "Base1下的m_A：" << s.Base1::m_A << endl;
//	cout << "Base2下的m_A：" << s.Base2::m_A << endl;
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}