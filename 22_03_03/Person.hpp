#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>

using namespace std;

template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age);
	void PrintPerson();
	string m_Name;
	int m_Age;
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}
template<class T1, class T2>
void Person<T1, T2>::PrintPerson()
{
	cout << "m_Name=" << this->m_Name << ", m_Age=" << this->m_Age << endl;
}
