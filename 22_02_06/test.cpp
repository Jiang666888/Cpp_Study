#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string.h>
#include <math.h>

#include "point.h"
#include "circle.h"

using namespace std;

//构造函数和析构函数
class Person
{
public:
	Person()
	{
		cout << "Person无参构造函数调用" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person有参构造函数调用" << endl;
	}
	Person(const Person& p)
	{
		age = p.age;
		cout << "Person拷贝构造函数调用" << endl;
	}

	~Person()
	{
		cout << "Person析构函数调用" << endl;
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



//圆和点位置关系
//方法一
//void judgePos(Circle c, Point p)
//{
//	int len = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX())
//		+ (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	if (len > (c.getR() * c.getR()))
//	{
//		cout << "点在圆外" << endl;
//	}
//	else if (len == (c.getR() * c.getR()))
//	{
//		cout << "点在圆上" << endl;
//	}
//	else
//	{
//		cout << "点在圆内" << endl;
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


//方法二
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
//		cout << "点在圆外！" << endl;
//	}
//	else if (ret == 1)
//	{
//		cout << "点在圆上！" << endl;
//	}
//	else
//	{
//		cout << "点在圆内！" << endl;
//	}
//
//	system("pause");
//	return 0;
//}



//立方体设计
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
//	cout << "cu1的面积为" << vol1 << endl;
//	int ar1 = cu1.area();
//	cout << "cu1的体积为" << ar1 << endl;
//
//	Cube cu2;
//	cu2.setm_H(10);
//	cu2.setm_L(10);
//	cu2.setm_W(10);
//	int vol2 = cu2.volume();
//	cout << "cu2的面积为" << vol2 << endl;
//	int ar2 = cu2.area();
//	cout << "cu2的体积为" << ar2 << endl;
//	//利用全局函数
//	bool ret1 = isSame(cu1, cu2);
//	if (ret1)
//	{
//		cout << "两个长方体相等" << endl;
//	}
//	else
//	{
//		cout << "两个长方体不相等" << endl;
//	}
//	//利用成员函数
//	bool ret2 = cu1.isSameByClass(cu2);
//	if (ret2)
//	{
//		cout << "两个长方体相等" << endl;
//	}
//	else
//	{
//		cout << "两个长方体不相等" << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}



//可读可写操作
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
//			cout << "输入年龄不正确！" << endl;
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
//	cout << "请输入姓名：";
//	cin >> name;
//	p1.setName(name);
//	int age;
//	cout << "请输入年龄：";
//	cin >> age;
//	p1.setAge(age);
//	cout << "姓名为：" << p1.getName() << endl;
//	cout << "年龄为：" << p1.getAge() << endl;
//
//	system("pause");
//	return 0;
//}



//权限学习
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
//		name = "张三";
//		car = "奔驰";
//		password = 123456;
//	}
//};
//int main()
//{
//	Info I;
//	I.name = "李四";
//
//	system("pause");
//	return 0;
//}