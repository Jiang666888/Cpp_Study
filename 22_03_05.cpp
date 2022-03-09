#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

//deque容器
void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin();it != d.end();it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int> d1;
	for (int i = 0;i < 10;i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	deque<int> d2(d1.begin(), d1.end());
	printDeque(d2);

	deque<int> d3(10, 100);
	printDeque(d3);

	deque<int> d4(d3);
	printDeque(d4);
}

//赋值操作
void test02()
{
	deque<int> d1;
	for (int i = 0;i < 10;i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	deque<int> d2;
	d2 = d1;
	printDeque(d2);

	deque<int> d3;
	d3.assign(d1.begin(), d1.end());
	printDeque(d3);

	deque<int> d4;
	d4.assign(10, 100);
	printDeque(d4);
}

//大小操作
void test03()
{
	deque<int> d1;
	for (int i = 0;i < 10;i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	if (d1.empty())
	{
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "容器不为空" << endl;
		cout << "d1的大小为：" << d1.size() << endl;
	}

	d1.resize(15, 1);
	printDeque(d1);

	d1.resize(5);
	printDeque(d1);
}

//插入和删除
void test04()
{
	deque<int> d1;
	for (int i = 0;i < 10;i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(30);
	d1.push_front(40);
	printDeque(d1);

	d1.pop_back();
	d1.pop_front();
	printDeque(d1);
}
void test05()
{
	deque<int> d1;
	for (int i = 0;i < 10;i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	d1.insert(d1.begin(), 1000);
	printDeque(d1);

	d1.insert(d1.begin(), 2, 999);
	printDeque(d1);

	deque<int> d2;
	d2.push_back(10);
	d2.push_back(20);
	d2.push_back(30);
	d2.push_back(40);
	d1.insert(d1.begin(), d2.begin(), d2.end());
	printDeque(d1);

	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	printDeque(d1);

	//d1.clear();
	d1.erase(d1.begin(), d1.end());
	printDeque(d1);
}

//数据存取
void test06()
{
	deque<int> d1;
	for (int i = 0;i < 10;i++)
	{
		d1.push_back(i);
	}
	
	for (int i = 0;i < d1.size();i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;

	for (int i = 0;i < d1.size();i++)
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;

	cout << "第一个元素：" << d1.front() << endl;
	cout << "最后一个元素：" << d1.back() << endl;
}

//排序
void test07()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	printDeque(d);

	sort(d.begin(), d.end());
	printDeque(d);
}



//案例-评委打分
class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;
	int m_Score;
};
void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0;i < 5;i++)
	{
		string name = "选手";
		name += nameSeed[i];
		int score = 0;
		Person p(name, score);
		v.push_back(p);
	}
}
void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin();it != v.end();it++)
	{
		deque<int> d;
		for (int i = 0;i < 10;i++)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}
		/*cout << "选手" << it->m_Name << "的打分：" ;
		for (deque<int>::iterator it = d.begin();it != d.end();it++)
		{
			cout << (*it) << " ";
		}
		cout << endl;*/
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		int sum = 0;
		for (deque<int>::iterator it = d.begin();it != d.end();it++)
		{
			sum += (*it);
		}
		int avg = sum / d.size();
		it->m_Score = avg;
	} 
}
void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "选手" << it->m_Name << "的打分：" << it->m_Score << endl;
	}
}
void printPerson(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "姓名：" << (*it).m_Name << " 分数：" << (*it).m_Score << endl;
	}
	cout << endl;
}
void test08()
{
	vector<Person> v;
	createPerson(v);
	setScore(v);
	showScore(v);

	//printPerson(v);
}

int main()
{
	srand((int)time(0));
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();
	test08();

	system("pause");
	return 0;
}