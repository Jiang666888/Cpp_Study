#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>

using namespace std;

//set/multiset容器
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

//大小和交换操作
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
		cout << "s1为空" << endl;
	}
	else
	{
		cout << "s1不为空" << endl;
		cout << "s1的大小为" << s1.size() << endl;
	}

	set<int> s2;
	s2.insert(200);
	s2.insert(100);
	s2.insert(300);
	s2.insert(600);
	s2.insert(300);

	cout << "交换前" << endl;
	printSet(s1);
	printSet(s2);

	cout << "交换后" << endl;
	s1.swap(s2);
	printSet(s1);
	printSet(s2);
}

//插入和删除
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

//查找和统计
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
		cout << "找到元素：" << *pos << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	int num = 0;
	num = s1.count(30);
	cout << "个数为" << num << endl;
}

//对组
void test06()
{
	set<int> s;
	pair<set<int>::iterator, bool> ret1 = s.insert(10);
	pair<set<int>::iterator, bool> ret2 = s.insert(10);
	if (ret2.second)
	{
		cout << "第一次插入成功" << endl;
	}
	else
	{
		cout << "第一次插入失败" << endl;
	}
}
void test07()
{
	pair<string, int> p1("张三", 18);
	cout << "姓名：" << p1.first << " 年龄：" << p1.second << endl;

	pair<string, int> p2;
	p2 = make_pair("李四", 32);
	cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;
}

//排序
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

	Person p1("张三", 18);
	Person p2("李四", 26);
	Person p3("王五", 31);
	Person p4("赵六", 22);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, ComparePerson>::iterator it = s.begin();it != s.end();it++)
	{
		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
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