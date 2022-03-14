#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>

using namespace std;

//函数对象
class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};
void test01()
{
	MyAdd myAdd;
	int ret = myAdd(10, 20);
	cout << ret << endl;
}

class MyPrint
{
public:
	MyPrint()
	{
		this->count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}
	int count;
};
void test02()
{
	MyPrint myPrint;
	myPrint("HelloWorld");
	myPrint("HelloWorld");
	myPrint("HelloWorld");
	myPrint("HelloWorld");
	cout << myPrint.count << endl;
}
void doPrint(MyPrint& m, string test)
{
	m(test);
}
void test03()
{
	MyPrint myPrint;
	doPrint(myPrint, "Hello c++");
}



//谓词
#include <vector>
#include <algorithm>

//一元谓词
class GreateFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};
void test04()
{
	vector<int> v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreateFive());
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到了，位置：" << *it << endl;
	}
}

//二元谓词
class MyCompare
{
public:
	bool operator()(int num1, int num2)
	{
		return num1 > num2;
	}
};
void test05()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(60);
	v.push_back(20);
	v.push_back(50);
	v.push_back(70);

	sort(v.begin(), v.end());

	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;


	sort(v.begin(), v.end(),MyCompare());

	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}



//内建函数对象
#include <functional>

//算数仿函数
void test06()
{
	negate<int> n;
	cout << n(50) << endl;

	plus<int> p;
	cout << p(1, 2) << endl;
}

//关系仿函数
void test07()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(60);
	v.push_back(20);
	v.push_back(50);
	v.push_back(70);

	sort(v.begin(), v.end());

	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;


	sort(v.begin(), v.end(), greater<int>());

	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//逻辑仿函数
void test08()
{
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	vector<bool> v2;
	v2.resize(v.size());
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());

	for (vector<bool>::iterator it = v2.begin();it != v2.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}






//常用算法
//遍历
void print01(int val)
{
	cout << val << " ";
}
class print02
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test09()
{
	vector<int> v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), print01);
	cout << endl;

	for_each(v.begin(), v.end(), print02());
	cout << endl;
}

class MyTransform
{
public:
	int operator()(int v)
	{
		return v + 100;
	}
};
void test10()
{
	vector<int> v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}

	vector<int> vTarget;
	vTarget.resize(v.size());
	transform(v.begin(), v.end(), vTarget.begin(), MyTransform());

	for_each(vTarget.begin(), vTarget.end(), print02());
	cout << endl;
}


//查找
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	bool operator==(const Person& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
		return false;
	}
	string m_Name;
	int m_Age;
};
void test11()
{
	vector<int> v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator pos = find(v.begin(), v.end(), 5);
	if (pos == v.end())
	{
		cout << "未查找到" << endl;
	}
	else
	{
		cout << "查找到了，位置在：" << *pos << endl;
	}

	vector<Person> vPerson;
	Person p1("aaa", 12);
	Person p2("bbb", 33);
	Person p3("ccc", 36);
	Person p4("ddd", 41);
	vPerson.push_back(p1);
	vPerson.push_back(p2);
	vPerson.push_back(p3);
	vPerson.push_back(p4);
	vector<Person>::iterator pos2 = find(vPerson.begin(), vPerson.end(), p2);
	if (pos2 == vPerson.end())
	{
		cout << "未查找到" << endl;
	}
	else
	{
		cout << "查找到了，姓名：" << pos2->m_Name << " 年龄：" << pos2->m_Age << endl;
	}
}

class GreaterFive
{
public:
	bool operator()(int num)
	{
		return num > 5;
	}
};
class Greater20
{
public:
	bool operator()(Person& p)
	{
		return p.m_Age > 20;
	}
};
void test12()
{
	vector<int> v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "未查找到" << endl;
	}
	else
	{
		cout << "查找到了，大于5的数字：" << *it << endl;
	}

	vector<Person> vPerson;
	Person p1("aaa", 12);
	Person p2("bbb", 31);
	Person p3("ccc", 29);
	Person p4("ddd", 41);
	vPerson.push_back(p1);
	vPerson.push_back(p2);
	vPerson.push_back(p3);
	vPerson.push_back(p4);
	vector<Person>::iterator pos = find_if(vPerson.begin(), vPerson.end(), Greater20());
	if (pos == vPerson.end())
	{
		cout << "未查找到" << endl;
	}
	else
	{
		cout << "查找到了，姓名：" << pos->m_Name << " 年龄：" << pos->m_Age << endl;
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
	//test09();
	//test10();
	//test11();
	test12();

	system("pause");
	return 0;
}