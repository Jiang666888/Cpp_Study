#define _CRT_SECURE_NO_WARNINGS 1

//类模板

#include "Person.hpp"

void test01()
{
	Person<string, int>p("张三", 15);
	p.PrintPerson();
}



//友元
template<class T1, class T2>
class NewPerson;
template<class T1, class T2>
void PrintNewPerson2(NewPerson<T1, T2> p)
{
	cout << "类外实现：m_Name=" << p.m_Name << ", m_Age=" << p.m_Age << endl;
}
template<class T1, class T2>
class NewPerson
{
	friend void PrintNewPerson1(NewPerson<T1,T2> p)
	{
		cout << "类内实现：m_Name=" << p.m_Name << ", m_Age=" << p.m_Age << endl;
	}
	friend void PrintNewPerson2<>(NewPerson<T1, T2> p);
public:
	NewPerson(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
private:
	T1 m_Name;
	T2 m_Age;
};

void test02()
{
	NewPerson<string, int> p("Tom", 43);
	PrintNewPerson1(p);
}
void test03()
{
	NewPerson<string, int> p("Tom", 43);
	PrintNewPerson2(p);
}



//数组模板实现
#include "MyArray.hpp"
void printArray(MyArray<int>& arr)
{
	for (int i = 0;i < arr.getSize();i++)
	{
		cout << arr[i] << endl;
	}
}
void test04()
{
	MyArray<int> arr1(5);
	for (int i = 0;i < 5; i++)
	{
		arr1.Push_Back(i);
	}
	printArray(arr1);
	cout << "容量：" << arr1.getCapacity() << endl;
	cout << "大小：" << arr1.getSize() << endl;

	cout << "----------------------------" << endl;

	MyArray<int> arr2(arr1);
	printArray(arr2);
	arr2.Pop_Back();
	cout << "容量：" << arr2.getCapacity() << endl;
	cout << "大小：" << arr2.getSize() << endl;

	//MyArray<int> arr2(arr1);
	//MyArray<int> arr3(100);
	//arr3 = arr1;
}
void PrintPersonArray(MyArray<Person2>& arr)
{
	for (int i = 0;i < arr.getSize();i++)
	{
		cout << "m_Name=" << arr[i].m_Name << ", m_Age=" << arr[i].m_Age << endl;
	}
}
void test05()
{
	MyArray<Person2> arr2(10);
	Person2 p1("Tom", 12);
	Person2 p2("Jerry", 54);
	Person2 p3("Alex", 43);
	Person2 p4("John", 15);
	
	arr2.Push_Back(p1);
	arr2.Push_Back(p2);
	arr2.Push_Back(p3);
	arr2.Push_Back(p4);

	PrintPersonArray(arr2);
	cout << "容量：" << arr2.getCapacity() << endl;
	cout << "大小：" << arr2.getSize() << endl;
}




//STL
#include <vector>
#include <algorithm>

void myPrint(int val)
{
	cout << val << endl;
}
void test06()
{
	vector<int> v;
	for (int i = 0;i < 5;i++)
	{
		v.push_back(i);
	}

	//遍历数组
	/*vector<int>::iterator itBegin = v.begin();
	vector<int>::iterator itEnd = v.end();
	while(itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}*/

	/*for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << endl;
	}*/

	for_each(v.begin(), v.end(), myPrint);
}

void test07()
{
	vector<Person2> v;
	Person2 p1("aaa", 15);
	Person2 p2("bbb", 26);
	Person2 p3("ccc", 17);
	Person2 p4("ddd", 34);
	Person2 p5("eee", 12);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	for (vector<Person2>::iterator it = v.begin();it != v.end();it++)
	{
		//cout << "姓名：" << (*it).m_Name << ", 年龄：" << (*it).m_Age << endl;
		cout << "姓名：" << it->m_Name << ", 年龄：" << it->m_Age << endl;
	}
}

void test08()
{
	vector<vector<int>> v;
	
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	for (int i = 0;i < 4;i++)
	{
		v1.push_back(i+1);
		v2.push_back(i+2);
		v3.push_back(i+3);
		v4.push_back(i+4);
	}

	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	for (vector<vector<int>>::iterator it = v.begin();it != v.end();it++)
	{
		for (vector<int>::iterator jt = (*it).begin();jt != (*it).end();jt++)
		{
			cout << *jt << "  ";
		}
		cout << endl; 
	} 
}



//string容器
void test09()
{
	string s1;
	const char* str = "Hello World";
	string s2(str);
	cout << "s2=" << s2 << endl;
	string s3(s2);
	cout << "s3=" << s3 << endl;
	string s4(10, 'a');
	cout << "s4=" << s4 << endl;
	string s5;
	s5.assign("Hello", 3);
	cout << "s5=" << s5 << endl;

	string s6="Hello";
	s6 += "World";
	cout << "s6=" << s6 << endl;
	string s7 = "liuliu";
	s7 += s6;
	cout << "s7=" << s7 << endl;
	string s8 = "I";
	s8.append(" Love");
	cout << "s8=" << s8 << endl;
	s8.append(" Youuuu",4);
	cout << "s8=" << s8 << endl;
	string s9 = "Hello";
	s9.append(s6,2,3);
	cout << "s9=" << s9 << endl;
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