#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string.h>
#include <math.h>

#include "point.h"
#include "circle.h"

using namespace std;

//���캯������������
class Person
{
public:
	Person()
	{
		cout << "Person�޲ι��캯������" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person�вι��캯������" << endl;
	}
	Person(const Person& p)
	{
		age = p.age;
		cout << "Person�������캯������" << endl;
	}

	~Person()
	{
		cout << "Person������������" << endl;
	}


	int age;
};
void test01()
{
	/*Person p1;
	Person p2(10);
	Person p3(p2);*/

	/*Person p1;
	Person p2 = Person(10);
	Person p3 = Person(p2);*/
	
	Person p1;
	Person p2 = 10;
	Person p3 = p2;


}
int main()
{
	test01();

	system("pause");
	return 0;
}



//Բ�͵�λ�ù�ϵ
//����һ
//void judgePos(Circle c, Point p)
//{
//	int len = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX())
//		+ (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	if (len > (c.getR() * c.getR()))
//	{
//		cout << "����Բ��" << endl;
//	}
//	else if (len == (c.getR() * c.getR()))
//	{
//		cout << "����Բ��" << endl;
//	}
//	else
//	{
//		cout << "����Բ��" << endl;
//	}
//}
//int main()
//{
//	Point cent;
//	Circle c;
//	cent.setX(10);
//	cent.setY(10);
//	c.setCenter(cent);
//	c.setR(11);
//	Point p;
//	p.setX(10);
//	p.setY(20);
//	judgePos(c, p);
//
//	system("pause");
//	return 0;
//}


//������
//class Circle
//{
//public:
//	void setC_X(int newX)
//	{
//		c_X = newX;
//	}
//	int getC_X()
//	{
//		return c_X;
//	}
//	void setC_Y(int newY)
//	{
//		c_Y = newY;
//	}
//	int getC_Y()
//	{
//		return c_Y;
//	}
//	void setC_R(int newR)
//	{
//		c_R = newR;
//	}
//	int getC_R()
//	{
//		return c_R;
//	}
//private:
//	int c_X;
//	int c_Y;
//	int c_R;
//};
//class Point
//{
//public:
//	void setP_X(int newX)
//	{
//		p_X = newX;
//	}
//	int getP_X()
//	{
//		return p_X;
//	}
//	void setP_Y(int newY)
//	{
//		p_Y = newY;
//	}
//	int getP_Y()
//	{
//		return p_Y;
//	}
//	int calculationPos(Circle c)
//	{
//		double len = sqrt((c.getC_X() - p_X) * (c.getC_X() - p_X) + (c.getC_Y() - p_Y) * (c.getC_Y() - p_Y));
//		if (len > c.getC_R())
//		{
//			return -1;
//		}
//		else if (len == c.getC_R())
//		{
//			return 1;
//		}
//		else 
//		{
//			return 0;
//		}
//	}
//private:
//	int p_X;
//	int p_Y;
//};
//int main()
//{
//	Circle c;
//	c.setC_X(10);
//	c.setC_Y(10);
//	c.setC_R(20);
//	Point p;
//	p.setP_X(15);
//	p.setP_Y(15);
//	int ret = p.calculationPos(c);
//	if (ret == -1)
//	{
//		cout << "����Բ�⣡" << endl;
//	}
//	else if (ret == 1)
//	{
//		cout << "����Բ�ϣ�" << endl;
//	}
//	else
//	{
//		cout << "����Բ�ڣ�" << endl;
//	}
//
//	system("pause");
//	return 0;
//}



//���������
//class Cube
//{
//public:
//	void setm_L(int len)
//	{
//		m_L = len;
//	}
//	int getm_L()
//	{
//		return m_L;
//	}
//	void setm_H(int height)
//	{
//		m_H = height;
//	}
//	int getm_H()
//	{
//		return m_H;
//	}
//	void setm_W(int weight)
//	{
//		m_W = weight;
//	}
//	int getm_W()
//	{
//		return m_W;
//	}
//	int volume()
//	{
//		return 2 * m_L * m_H + 2 * m_L * m_W + 2 * m_H * m_W;
//	}
//	int area()
//	{
//		return m_L * m_H * m_W;
//	}
//	bool isSameByClass(Cube &c)
//	{
//		if (c.m_H == m_H && c.m_L == m_L && c.m_W == m_W)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//private:
//	int m_L;
//	int m_H;
//	int m_W;
//};
//bool isSame(Cube c1, Cube c2)
//{
//	if (c1.getm_H() == c2.getm_H() && c1.getm_L() == c2.getm_L() && c1.getm_W() == c2.getm_W())
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//int main()
//{
//	Cube cu1;
//	cu1.setm_H(10);
//	cu1.setm_L(10);
//	cu1.setm_W(10);
//	int vol1 = cu1.volume();
//	cout << "cu1�����Ϊ" << vol1 << endl;
//	int ar1 = cu1.area();
//	cout << "cu1�����Ϊ" << ar1 << endl;
//
//	Cube cu2;
//	cu2.setm_H(10);
//	cu2.setm_L(10);
//	cu2.setm_W(10);
//	int vol2 = cu2.volume();
//	cout << "cu2�����Ϊ" << vol2 << endl;
//	int ar2 = cu2.area();
//	cout << "cu2�����Ϊ" << ar2 << endl;
//	//����ȫ�ֺ���
//	bool ret1 = isSame(cu1, cu2);
//	if (ret1)
//	{
//		cout << "�������������" << endl;
//	}
//	else
//	{
//		cout << "���������岻���" << endl;
//	}
//	//���ó�Ա����
//	bool ret2 = cu1.isSameByClass(cu2);
//	if (ret2)
//	{
//		cout << "�������������" << endl;
//	}
//	else
//	{
//		cout << "���������岻���" << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}



//�ɶ���д����
//class Person
//{
//public:
//	void setName(string newname)
//	{
//		name = newname;
//	}
//	string getName()
//	{
//		return name;
//	}
//	void setAge(int newage)
//	{
//		if (newage < 0 || newage > 150)
//		{
//			age = 0;
//			cout << "�������䲻��ȷ��" << endl;
//			return;
//		}
//		else
//		{
//			age = newage;
//		}
//	}
//	int getAge()
//	{
//		return age;
//	}
//
//private:
//	string name;
//	int age;
//	string sex;
//};
//int main()
//{
//	Person p1;
//	string name;
//	cout << "������������";
//	cin >> name;
//	p1.setName(name);
//	int age;
//	cout << "���������䣺";
//	cin >> age;
//	p1.setAge(age);
//	cout << "����Ϊ��" << p1.getName() << endl;
//	cout << "����Ϊ��" << p1.getAge() << endl;
//
//	system("pause");
//	return 0;
//}



//Ȩ��ѧϰ
//class Info
//{
//public:
//	string name;
//
//protected:
//	string car;
//
//private:
//	int password;
//
//public:
//	void fun()
//	{
//		name = "����";
//		car = "����";
//		password = 123456;
//	}
//};
//int main()
//{
//	Info I;
//	I.name = "����";
//
//	system("pause");
//	return 0;
//}