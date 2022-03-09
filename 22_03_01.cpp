#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>

using namespace std;

//模板
template <typename T>
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
void test01()
{
	int num1 = 10;
	int num2 = 20;
	double num3 = 3.4;
	double num4 = 1.7;

	cout << "交换前num1=" << num1 << " num2=" << num2 << endl;
	cout << "交换前num3=" << num3 << " num4=" << num4 << endl;

	//mySwap(num1, num2);
	//mySwap(num3, num4);
	mySwap<int>(num1, num2);
	mySwap<double>(num3, num4);

	cout << "交换后num1=" << num1 << " num2=" << num2 << endl;
	cout << "交换后num3=" << num3 << " num4=" << num4 << endl;
}

//排序实现
template <class T>
void mySort(T arr[],int len)
{
	for (int i = 0;i < len;i++)
	{
		for (int j = i + 1;j < 5;j++)
		{
			if (arr[i] > arr[j])
			{
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
template <class R>
void myPrint(R arr[],int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void test02()
{
	int arr1[] = { 1,3,4,2,5 };
	char arr2[] = "banpef";
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	mySort(arr1,len1);
	myPrint(arr1,len1);
	cout << "---------------------" << endl;
	mySort(arr2,len2);
	myPrint(arr2,len2);
}

template <class A>
A Add(A a, A b)
{
	return a + b;
}
void test03()
{
	int a = 10;
	int b = 20;
	char c = 'a';
	cout << Add(a, b) << endl;
	cout << Add<int>(a, c) << endl;
}

//自定义数据类型
class Person
{
public:
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	string m_Name;
	int m_Age;
};
template <class B>
bool myCompare(B &a, B &b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
template<> bool myCompare(Person &p1, Person &p2)
{
	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void test04()
{
	int a = 10;
	int b = 10;
	if (myCompare(a, b))
	{
		cout << "a==b" << endl;
	}
	else
	{
		cout << "a!=b" << endl;
	}

	Person p1("张三", 18);
	Person p2("李四", 27);
	if(myCompare(p1, p2))
	{
		cout << "p1==p2" << endl;
	}
	else
	{
		cout << "p1!=p2" << endl;
	}
}
int main()
{
	//test01();
	//test02();
	//test03();
	test04();

	system("pause");
	return 0;
}