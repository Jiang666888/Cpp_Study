#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>

using namespace std;

//map/multimap����//����ͬset
#include <map>
void printMap(const map<int, int>& m)
{
	for (map<int, int>::const_iterator it = m.begin();it != m.end();it++)
	{
		cout << "key=" << (*it).first << "��value=" << (*it).second << endl;
	}
	cout << endl;
}
void test01()
{
	map<int, int> m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(4, 40));
	printMap(m1);

	map<int, int> m2(m1);
	printMap(m2);

	map<int, int> m3;
	m3 = m2;
	printMap(m3);
}

//��С�ͽ�������
void test02()
{
	map<int, int> m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(4, 40));

	map<int, int> m2;
	m2.insert(pair<int, int>(1, 50));
	m2.insert(pair<int, int>(3, 70));
	m2.insert(pair<int, int>(2, 60));
	m2.insert(pair<int, int>(4, 80));

	if (m1.empty())
	{
		cout << "û������" << endl;
	}
	else
	{
		cout << "�����ݣ�Ԫ�ظ���Ϊ:" << m1.size() << endl;
	}

	cout << "����ǰ��" << endl;
	printMap(m1);
	printMap(m2);

	m1.swap(m2);
	cout << "������" << endl;
	printMap(m1);
	printMap(m2);
}

//�����ɾ��
void test03()
{
	map<int, int> m1;
	m1.insert(pair<int, int>(1, 10));
	m1[3] = 30;
	m1.insert(make_pair(2, 20));
	m1.insert(map<int, int>::value_type(4, 40));
	printMap(m1);

	m1.erase(m1.begin());
	printMap(m1);

	m1.erase(3);
	printMap(m1);

	m1.clear();
	printMap(m1);
}

//���Һ�ͳ��
void test04()
{
	map<int, int> m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(4, 40));

	map<int, int>::iterator pos = m1.find(2);
	if (pos != m1.end())
	{
		cout << "���ҵ��ˣ�value=" << pos->second << endl;
	}
	else
	{
		cout << "δ���ҵ�" << endl;
	}

	int num = m1.count(3);
	cout << "num=" << num << endl;
}

//����
class MyCompare
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}
};
void test05()
{
	map<int, int, MyCompare> m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(4, 40));
	for (map<int, int, MyCompare>::const_iterator it = m1.begin();it != m1.end();it++)
	{
		cout << "key=" << (*it).first << "��value=" << (*it).second << endl;
	}
}

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
class PersonCompare
{
public:
	bool operator()(const Person& p1, const Person& p2) const
	{
		return p1.m_Age < p2.m_Age;
	}
};
void test06()
{
	map<Person, int, PersonCompare> m;
	Person p1("����", 18);
	Person p2("����", 22);
	Person p3("����", 43);
	Person p4("����", 41);

	m.insert(pair<Person, int>(p1, 10));
	m.insert(pair<Person, int>(p2, 20));
	m.insert(pair<Person, int>(p3, 30));
	m.insert(pair<Person, int>(p4, 40));

	for (map<Person, int, PersonCompare>::const_iterator it = m.begin();it != m.end();it++)
	{
		cout << "������" << (*it).first.m_Name << "�����䣺" << (*it).first.m_Age << "��value=" << (*it).second << endl;
	}
}



//Ա������
#include <vector>

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker
{
public:
	string m_Name;
	int m_Salary;
};
void create_Worker(vector<Worker>& v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0;i < 10;i++)
	{
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += nameSeed[i];
		worker.m_Salary = rand() % 10000 + 10000;
		v.push_back(worker);
	}
}
void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin();it != v.end();it++)
	{
		int deptId = rand() % 3;
		m.insert(make_pair(deptId, *it));
	}
}
void showGroup(multimap<int, Worker>& m)
{
	cout << "�߻����ţ�" << endl;
	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int index = 0;
	int count = m.count(CEHUA);
	for ( ;pos != m.end() && index < count;pos++, index++)
	{
		cout << "Ա��" << pos->second.m_Name << "�����ʣ�" << pos->second.m_Salary << endl;
	}
	cout << "----------------------------" << endl;
	cout << "�������ţ�" << endl;
	pos = m.find(MEISHU);
	index = 0;
	count = m.count(MEISHU);
	for (;pos != m.end() && index < count;pos++, index++)
	{
		cout << "Ա��" << pos->second.m_Name << "�����ʣ�" << pos->second.m_Salary << endl;
	}
	cout << "----------------------------" << endl;
	cout << "�з����ţ�" << endl;
	pos = m.find(YANFA);
	index = 0;
	count = m.count(YANFA);
	for (;pos != m.end() && index < count;pos++, index++)
	{
		cout << "Ա��" << pos->second.m_Name << "�����ʣ�" << pos->second.m_Salary << endl;
	}
}
void test07()
{
	vector<Worker> vWorker;
	create_Worker(vWorker);

	/*for (vector<Worker>::iterator it = vWorker.begin();it != vWorker.end();it++)
	{
		cout << it->m_Name << " " << it->m_Salary << endl;
	}*/

	multimap<int, Worker> mGroup;
	setGroup(vWorker, mGroup);

	showGroup(mGroup);
}

int main()
{
	srand((int)time(NULL));
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	test07();

	system("pause");
	return 0;
}