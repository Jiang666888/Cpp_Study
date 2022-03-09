#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>

using namespace std;

//stack����
#include <stack>
void test01()
{
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout << "ջ�Ĵ�СΪ��" << s.size() << endl;
	while (!s.empty())
	{
		cout << "ջ����Ԫ�أ�" << s.top() << endl;
		s.pop();
	}
	cout << "ջ�Ĵ�СΪ��" << s.size() << endl;
}



//queue����
#include <queue>
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
void test02()
{
	queue<Person> q;
	Person p1("����", 18);
	Person p2("����", 21);
	Person p3("����", 33);
	Person p4("����", 24);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	while (!q.empty())
	{
		cout << "��ͷԪ��----������" << q.front().m_Name << " ���䣺" << q.front().m_Age << endl;
		cout << "��βԪ��----������" << q.back().m_Name << " ���䣺" << q.back().m_Age << endl;
		q.pop();
	}
	cout << "����Ԫ�ظ���Ϊ" << q.size() << endl;
}



//list����
#include <list>
void printList(const list<int> l)
{
	for (list<int>::const_iterator it = l.begin();it != l.end();it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;
}

//��ֵ��������
void test03()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	printList(l1);

	list<int> l2(l1.begin(), l1.end());
	printList(l2);

	list<int> l3(l2);
	printList(l3);

	list<int> l4(10, 1000);
	printList(l4);

	list<int> l5;
	l5 = l1;
	printList(l5);

	list<int> l6;
	l6.assign(l1.begin(), l1.end());
	printList(l6);

	list<int> l7;
	l7.assign(10, 100);
	printList(l7);

	cout << "����ǰ��" << endl;
	printList(l1);
	printList(l7);

	l1.swap(l7);
	cout << "������" << endl;
	printList(l1);
	printList(l7);
}

//��С����
void test04()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	printList(l1);

	if (l1.empty())
	{
		cout << "����Ϊ��" << endl;
	}
	else
	{
		cout << "������Ϊ��" << endl;
		cout << "Ԫ�ظ���Ϊ��" << l1.size() << endl;
	}

	l1.resize(10, 100);
	printList(l1);

	l1.resize(3);
	printList(l1);
}

//�����ɾ��
void test05()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_front(40);
	l1.push_front(50);
	l1.push_front(60);
	printList(l1);

	l1.pop_back();
	l1.pop_front();
	printList(l1);

	list<int>::iterator it = l1.begin();
	l1.insert(++it, 100);
	printList(l1);

	it = l1.begin();
	l1.erase(it);
	printList(l1);

	l1.push_back(1000);
	l1.push_back(1000);
	printList(l1);
	l1.remove(1000);
	printList(l1);

	l1.clear();
	printList(l1);
}

//���ݴ�ȡ
void test06()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	printList(l1);

	cout << "��һ��Ԫ��Ϊ��" << l1.front() << endl;
	cout << "���һ��Ԫ��Ϊ��" << l1.back() << endl;

}

//��ת
void test07()
{
	list<int> l1;
	l1.push_back(20);
	l1.push_back(10);
	l1.push_back(40);
	l1.push_back(30);
	printList(l1);

	l1.reverse();
	printList(l1);
}

//����
bool myCompare(int v1,int v2)
{
	return v1 > v2;
}
void test08()
{
	list<int> l1;
	l1.push_back(20);
	l1.push_back(10);
	l1.push_back(40);
	l1.push_back(30);
	printList(l1);

	l1.sort();
	printList(l1);

	l1.sort(myCompare);
	printList(l1);
}

//������
class Person1
{
public:
	Person1(string name, int height, int age)
	{
		this->m_Name = name;
		this->m_Height = height;
		this->m_Age = age;
	}

	string m_Name;
	int m_Height;
	int m_Age;
};
bool MyCompare1(Person1& p1, Person1& p2)
{
	if (p1.m_Age == p2.m_Age)
	{
		return p1.m_Height > p2.m_Height;
	}
	return p1.m_Age < p2.m_Age;
}
void test09()
{
	list<Person1> l;
	Person1 p1("����", 176, 34);
	Person1 p2("����", 172, 30);
	Person1 p3("����", 181, 30);
	Person1 p4("����", 179, 30);
	Person1 p5("����", 168, 22);

	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	l.push_back(p5);

	for (list<Person1>::iterator it = l.begin();it != l.end();it++)
	{
		cout << "������" << (*it).m_Name << " ��ߣ�" << (*it).m_Height << " ���䣺" << it->m_Age << endl;
	}

	cout << "-------------------" << endl;
	cout << "�����" << endl;

	l.sort(MyCompare1);
	for (list<Person1>::iterator it = l.begin();it != l.end();it++)
	{
		cout << "������" << (*it).m_Name << " ��ߣ�" << (*it).m_Height << " ���䣺" << it->m_Age << endl;
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