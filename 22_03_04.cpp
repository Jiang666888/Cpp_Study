#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Vector����
void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test11()
{
	vector<int> v1;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	vector<int> v2(v1.begin(), v1.end());
	printVector(v2);

	vector<int> v3(10, 100);
	printVector(v3);

	vector<int> v4(v3);
	printVector(v4);
}
void test12()
{
	vector<int> v1;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
	}
	vector<int> v2 = v1;
	printVector(v2);

	vector<int> v3;
	v3.assign(v2.begin(), v2.end());
	printVector(v3);

	vector<int> v4;
	v4.assign(10, 100);
	printVector(v4);
}
void test13()
{
	vector<int> v1;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	if (v1.empty())
	{
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1��Ϊ��" << endl;
		cout << "v1������Ϊ:" << v1.capacity() << endl;
		cout << "v1�Ĵ�СΪ:" << v1.size() << endl;
	}

	v1.resize(15,100);
	printVector(v1);

	v1.resize(5);
	printVector(v1);
}

void test14()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	printVector(v1);

	v1.pop_back();
	printVector(v1);

	v1.insert(v1.begin(), 99);
	printVector(v1);

	v1.insert(v1.begin(), 2, 100);
	printVector(v1);

	v1.erase(v1.begin());
	printVector(v1);

	//v1.erase(v1.begin(), v1.end());
	v1.clear();
	printVector(v1);
}

void test15()
{
	vector<int> v1;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
	}

	for (int i = 0;i < v1.size();i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	for (int i = 0;i < v1.size();i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	cout << "��һ��Ԫ�أ�" << v1.front() << endl;
	cout << "���һ��Ԫ�أ�" << v1.back() << endl;
}

void test16()
{
	vector<int> v1;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	vector<int> v2;
	for (int i = 10;i < 20;i++)
	{
		v2.push_back(i);
	}
	printVector(v2);

	cout << "������" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
}

void test17()
{
	vector<int> v;
	for (int i = 0;i < 100000;i++)
	{
		v.push_back(i);
	}
	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;

	v.resize(3);
	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;

	vector<int>(v).swap(v);
	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;
}

void test18()
{
	vector<int> v;
	int num = 0;
	int* p = NULL;
	v.reserve(100000);
	for (int i = 0;i < 100000;i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << num << endl;
}

int main()
{
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






//string����
//����
void test01()
{
	string s1 = "abcdefgde";
	//find�����Ҳ��ң�rfind��֮
	//int pos = s1.find("df");
	int pos = s1.rfind("de");
	if (pos == -1)
	{
		cout << "δ�ҵ����ַ���" << endl;
	}
	else
	{
		cout << "�ҵ��ַ�����λ��Ϊ��" << pos << endl;
	}
}

//�滻
void test02()
{
	string str = "abcdef";
	str.replace(1, 3, "1111");
	cout << str << endl;
}

//�Ƚ�
void test03()
{
	string str1 = "hello";
	string str2 = "xello";
	if (str1.compare(str2) == 0)
	{
		cout << "str1==str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1>str2" << endl;
	}
	else
	{
		cout << "str1<str2" << endl;
	}
}

//��ȡ
void test04()
{
	string str = "Hello";
	for (int i = 0;i < str.size();i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	for (int i = 0;i < str.size();i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	str[0] = 'x';
	cout << str << endl;
	str.at(1) = 'n';
	cout << str << endl;
}

//�����ɾ��
void test05()
{
	string str = "Hello";
	str.insert(1, " Y ");
	cout << str << endl;

	str.erase(1, 3);
	cout << str << endl;
}

//�Ӵ���ȡ
void test06()
{
	string str = "Hello";
	string subStr = str.substr(1, 3);
	cout << subStr << endl;
}

//ʵ��Ӧ��
void test07()
{
	string str = "zhangsan@qq.com";
	int pos = str.find('@');
	string subStr = str.substr(0, pos);
	cout << subStr << endl;
}


//int main()
//{
//	//test01();
//	//test02();
//	//test03();
//	//test04();
//	//test05();
//	//test06();
//	test07();
//
//	system("pause");
//	return 0;
//}