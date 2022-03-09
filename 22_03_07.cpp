#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>

using namespace std;

//set/multiset����
#include <set>

void printSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin();it != s.end();it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;
}

void test01()
{
	set<int> s1;
	s1.insert(20);
	s1.insert(10);
	s1.insert(30);
	s1.insert(60);
	s1.insert(30);
	printSet(s1);

	set<int> s2(s1);
	printSet(s2);
}

void test02()
{
	multiset<int> s1;
	s1.insert(20);
	s1.insert(10);
	s1.insert(30);
	s1.insert(60);
	s1.insert(30);
	for (multiset<int>::iterator it = s1.begin();it != s1.end();it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;

	multiset<int> s2(s1);
	for (multiset<int>::iterator it = s2.begin();it != s2.end();it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;
}

//��С�ͽ�������
void test03()
{
	set<int> s1;
	s1.insert(20);
	s1.insert(10);
	s1.insert(30);
	s1.insert(60);
	s1.insert(30);
	printSet(s1);

	if (s1.empty())
	{
		cout << "s1Ϊ��" << endl;
	}
	else
	{
		cout << "s1��Ϊ��" << endl;
		cout << "s1�Ĵ�СΪ" << s1.size() << endl;
	}

	set<int> s2;
	s2.insert(200);
	s2.insert(100);
	s2.insert(300);
	s2.insert(600);
	s2.insert(300);

	cout << "����ǰ" << endl;
	printSet(s1);
	printSet(s2);

	cout << "������" << endl;
	s1.swap(s2);
	printSet(s1);
	printSet(s2);
}

//�����ɾ��
void test04()
{
	set<int> s1;
	s1.insert(20);
	s1.insert(10);
	s1.insert(30);
	s1.insert(60);
	s1.insert(30);
	printSet(s1);

	s1.erase(s1.begin());
	printSet(s1);

	s1.erase(60);
	printSet(s1);
}

//���Һ�ͳ��
void test05()
{
	set<int> s1;
	s1.insert(20);
	s1.insert(10);
	s1.insert(30);
	s1.insert(60);
	s1.insert(30);
	
	set<int>::iterator pos = s1.find(30);
	if (pos != s1.end())
	{
		cout << "�ҵ�Ԫ�أ�" << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

	int num = 0;
	num = s1.count(30);
	cout << "����Ϊ" << num << endl;
}

//����
void test06()
{
	set<int> s;
	pair<set<int>::iterator, bool> ret1 = s.insert(10);
	pair<set<int>::iterator, bool> ret2 = s.insert(10);
	if (ret2.second)
	{
		cout << "��һ�β���ɹ�" << endl;
	}
	else
	{
		cout << "��һ�β���ʧ��" << endl;
	}
}
void test07()
{
	pair<string, int> p1("����", 18);
	cout << "������" << p1.first << " ���䣺" << p1.second << endl;

	pair<string, int> p2;
	p2 = make_pair("����", 32);
	cout << "������" << p2.first << " ���䣺" << p2.second << endl;
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
void test08()
{
	set<int> s1;
	s1.insert(20);
	s1.insert(10);
	s1.insert(30);
	s1.insert(60);
	s1.insert(30);
	printSet(s1);

	set<int, MyCompare> s2;
	s2.insert(20);
	s2.insert(10);
	s2.insert(30);
	s2.insert(60);
	s2.insert(30);
	for (set<int, MyCompare>::iterator it = s2.begin();it != s2.end();it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;
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
class ComparePerson
{
public:
	bool operator()(const Person& p1, const Person& p2) const
	{
		return p1.m_Age > p2.m_Age;
	}
};
void test09()
{
	set<Person,ComparePerson> s;

	Person p1("����", 18);
	Person p2("����", 26);
	Person p3("����", 31);
	Person p4("����", 22);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, ComparePerson>::iterator it = s.begin();it != s.end();it++)
	{
		cout << "������" << it->m_Name << " ���䣺" << it->m_Age << endl;
	}
}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();
	//test08();
	test09();

	system("pause");
	return 0;
}