#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string.h>

using namespace std;

//��Ԫ
//��Ա����
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
	cout << "���룺" << building->m_SettingRoom << endl;
}
void People::visit2()
{
	cout << "���룺" << building->m_BedRoom << endl;
}
Building::Building()
{
	m_SettingRoom = "����";
	m_BedRoom = "����";
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



//��
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
//	m_SettingRoom = "����";
//	m_BedRoom = "����";
//}
//People::People()
//{
//	building = new Building;
//}
//void People::visit()
//{
//	cout << "���ڷ��ʣ�" << building->m_SettingRoom << endl;
//	cout << "���ڷ��ʣ�" << building->m_BedRoom << endl;
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



//ȫ�ֺ���
//class Building
//{
//	friend void func(Building* buliding);
//public:
//	Building()
//	{
//		m_SettingRoom = "����";
//		m_BedRoom = "����";
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