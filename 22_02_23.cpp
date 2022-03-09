#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

using namespace std;

//��̬
// ��Ʒ����
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
		cout << "������ˮ" << endl;
	}
	void Brew()
	{
		cout << "�ӿ��ȷ�" << endl;
	}
	void PourInCup()
	{
		cout << "����ˮ��" << endl;
	}
	void PutSomething()
	{
		cout << "�������" << endl;
	}
};
class Tea : public AbstractDrinking
{
public:
	void Boil()
	{
		cout << "���Ȫˮ" << endl;
	}
	void Brew()
	{
		cout << "�����Ҷ" << endl;
	}
	void PourInCup()
	{
		cout << "����ˮ��" << endl;
	}
	void PutSomething()
	{
		cout << "�������" << endl;
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



// ���麯���ͳ�����
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
//		cout << "func�ĺ�������" << endl;
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



// ������
//class Calculator
//{
//public:
//	virtual void count()
//	{
//		cout << "��������" << endl;
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
//		cout << "�����ڽ�" << endl;
//	}
//};
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "è�ڽ�" << endl;
//	}
//};
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "���ڽ�" << endl;
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






//�̳�
//���μ̳� 
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
//	cout << "Sheep��m_Age:" << al.Sheep::m_Age << endl;
//	cout << "Camel��m_Age:" << al.Camel::m_Age << endl;
//	cout << "Alpaca��m_Age:" << al.m_Age << endl;
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}



//��̳��﷨
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
//	cout << "Base1�µ�m_A��" << s.Base1::m_A << endl;
//	cout << "Base2�µ�m_A��" << s.Base2::m_A << endl;
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}