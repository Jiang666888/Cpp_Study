#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>

using namespace std;

//stack容器
#include <stack>
void test01()
{
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout << "栈的大小为：" << s.size() << endl;
	while (!s.empty())
	{
		cout << "栈顶的元素：" << s.top() << endl;
		s.pop();
	}
	cout << "栈的大小为：" << s.size() << endl;
}



//queue容器
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
	Person p1("张三", 18);
	Person p2("李四", 21);
	Person p3("王五", 33);
	Person p4("赵六", 24);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	while (!q.empty())
	{
		cout << "队头元素----姓名：" << q.front().m_Name << " 年龄：" << q.front().m_Age << endl;
		cout << "队尾元素----姓名：" << q.back().m_Name << " 年龄：" << q.back().m_Age << endl;
		q.pop();
	}
	cout << "队内元素个数为" << q.size() << endl;
}



//list容器
#include <list>
void printList(const list<int> l)
{
	for (list<int>::const_iterator it = l.begin();it != l.end();it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;
}

//赋值交换操作
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

	cout << "互换前：" << endl;
	printList(l1);
	printList(l7);

	l1.swap(l7);
	cout << "互换后：" << endl;
	printList(l1);
	printList(l7);
}

//大小操作
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
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "容器不为空" << endl;
		cout << "元素个数为：" << l1.size() << endl;
	}

	l1.resize(10, 100);
	printList(l1);

	l1.resize(3);
	printList(l1);
}

//插入和删除
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

//数据存取
void test06()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	printList(l1);

	cout << "第一个元素为：" << l1.front() << endl;
	cout << "最后一个元素为：" << l1.back() << endl;

}

//反转
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

//排序
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

//排序案例
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
	Person1 p1("张三", 176, 34);
	Person1 p2("李四", 172, 30);
	Person1 p3("王五", 181, 30);
	Person1 p4("王五", 179, 30);
	Person1 p5("赵六", 168, 22);

	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	l.push_back(p5);

	for (list<Person1>::iterator it = l.begin();it != l.end();it++)
	{
		cout << "姓名：" << (*it).m_Name << " 身高：" << (*it).m_Height << " 年龄：" << it->m_Age << endl;
	}

	cout << "-------------------" << endl;
	cout << "排序后：" << endl;

	l.sort(MyCompare1);
	for (list<Person1>::iterator it = l.begin();it != l.end();it++)
	{
		cout << "姓名：" << (*it).m_Name << " 身高：" << (*it).m_Height << " 年龄：" << it->m_Age << endl;
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