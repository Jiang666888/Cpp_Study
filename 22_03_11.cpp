#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

//�����㷨
//����
void test01()
{
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(0);
	v.push_back(3);
	v.push_back(3);
	v.push_back(2);
	v.push_back(4);

	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
	if (pos == v.end())
	{
		cout << "δ��ѯ������" << endl;
	}
	else
	{
		cout << "�ҵ��ˣ�����Ϊ��" << *pos << endl;
	}
}

void test02()
{

}

int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}