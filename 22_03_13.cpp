#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>
#include <numeric>

using namespace std;

//查找算法
void test01()
{
	vector<int> v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}

	bool ret = binary_search(v.begin(), v.end(), 9);
	if (ret)
	{
		cout << "找到了" << endl;
	}
	else
	{
		cout << "没有找到" << endl;
	}
}

void test02()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(10);

	int ret = count(v.begin(), v.end(), 40);
	cout << ret << endl;
}

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
		if(this->m_Age==p.m_Age)
		{
			return true;
		}
		return false;
	}
	string m_Name;
	int m_Age;
};
void test03()
{
	vector<Person> v;
	Person p1("张三", 25);
	Person p2("李四", 25);
	Person p3("王五", 35);
	Person p4("赵六", 25);
	Person p5("吴七", 35);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person p("诸葛亮", 35);

	int ret = count(v.begin(), v.end(), p);

	cout << ret << endl;
}

class Greate20
{
public:
	bool operator()(int& val)
	{
		return val > 20;
	}
};
void test04()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(10);

	int ret = count_if(v.begin(), v.end(), Greate20());
	cout << ret << endl;
}

class GreateAge
{
public:
	bool operator()(Person& p)
	{
		return p.m_Age > 30;
	}
};
void test05()
{
	vector<Person> v;
	Person p1("张三", 25);
	Person p2("李四", 25);
	Person p3("王五", 35);
	Person p4("赵六", 25);
	Person p5("吴七", 35);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	int ret = count_if(v.begin(), v.end(), GreateAge());
	cout << ret << endl;
}





//排序算法
void myPrint(int& val)
{
	cout << val << " ";
}
void test06()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(50);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	sort(v.begin(), v.end(),greater<int>());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

void test07()
{
	vector<int> v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

void test08()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int> vTarget;
	vTarget.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), vTarget.end(), myPrint);
	cout << endl;
}

void test09()
{
	vector<int> v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}





//拷贝和替代算法
void test10()
{
	vector<int> v1;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
	}
	vector<int> v2;
	v2.resize(v1.size());
	copy(v1.begin(), v1.end(), v2.begin());
	for_each(v2.begin(), v2.end(), myPrint);
	cout << endl;
}

void test11()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(50);
	v.push_back(20);
	v.push_back(20);
	v.push_back(40);

	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	replace(v.begin(), v.end(), 20, 2000);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

class Greate30
{
public:
	bool operator()(int& val)
	{
		return val >= 30;
	}
};
void test12()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	replace_if(v.begin(), v.end(), Greate30(), 3000);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

void test13()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
		v2.push_back(i + 10);
	}
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint);
	cout << endl;
	cout << "-----------------" << endl;

	v1.swap(v2);
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint);
	cout << endl;
}





//算术生成算法
void test14()
{
	vector<int> v;
	for (int i = 0;i <= 100;i++)
	{
		v.push_back(i);
	}
	int total = accumulate(v.begin(), v.end(), 0);
	cout << total << endl;
}

void test15()
{
	vector<int> v;
	v.resize(10);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}





//集合算法
void test16()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int> vTarget;
	vTarget.resize(min(v1.size(), v2.size()));
	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), itEnd, myPrint);
	cout << endl;
}

void test17()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int> vTarget;
	vTarget.resize(v1.size() + v2.size());
	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), itEnd, myPrint);
	cout << endl;
}

void test18()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int> vTarget;
	vTarget.resize(max(v1.size(), v2.size()));
	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), itEnd, myPrint);
	cout << endl;
}

int main()
{
	srand((unsigned int)time(NULL));
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
	//test12();
	//test13();
	//test14();
	//test15();
	//test16();
	//test17();
	test18();

	system("pause");
	return 0;
}