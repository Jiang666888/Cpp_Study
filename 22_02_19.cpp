#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string.h>

using namespace std;

//友元
//成员函数
class Building;
class People
{
public:
	People();
	void visit1();
	void visit2();
	Building* building;
};
class Building
{
	friend void People::visit2();
public:
	Building();
public:
	string m_SettingRoom;
private:
	string m_BedRoom;
};

People::People()
{
	building = new Building;
}
void People::visit1()
{
	cout << "进入：" << building->m_SettingRoom << endl;
}
void People::visit2()
{
	cout << "进入：" << building->m_BedRoom << endl;
}
Building::Building()
{
	m_SettingRoom = "客厅";
	m_BedRoom = "卧室";
}
void test01()
{
	People p;
	p.visit1();
	p.visit2();
}
int main()
{
	test01();

	system("pause");
	return 0;
}



//类
//class Building;
//class People
//{
//public:
//	People();
//	void visit();
//	Building* building;
//};
//class Building
//{
//	friend class People;
//public:
//	Building();
//public:
//	string m_SettingRoom;
//private:
//	string m_BedRoom;
//};
//
//Building::Building()
//{
//	m_SettingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//People::People()
//{
//	building = new Building;
//}
//void People::visit()
//{
//	cout << "正在访问：" << building->m_SettingRoom << endl;
//	cout << "正在访问：" << building->m_BedRoom << endl;
//}
//void test01()
//{
//	People p;
//	p.visit();
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}



//全局函数
//class Building
//{
//	friend void func(Building* buliding);
//public:
//	Building()
//	{
//		m_SettingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//public:
//	string m_SettingRoom;
//private:
//	string m_BedRoom;
//};
//void func(Building *buliding)
//{
//	cout << buliding->m_SettingRoom << endl;
//	cout << buliding->m_BedRoom << endl;
//}
//int main()
//{
//	Building build;
//	func(&build);
//
//	system("pause");
//	return 0;
//}