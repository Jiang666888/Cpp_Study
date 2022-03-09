#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//�ļ�����
void test01()
{
	ofstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;
	ofs.close();
}
void test02()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ�ܣ�" << endl;
		return;
	}
	/*char buf[1024] = { 0 };*/
	/*while (ifs >> buf)
	{
		cout << buf << endl;
	}*/
	/*while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/
	/*string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}*/
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}
	ifs.close();
}
class Person
{
public:
	char m_name[64];
	int m_age;
};
void test03()
{
	Person p = { "����",18 };
	ofstream ofs("person.txt", ios::out | ios::binary);
	ofs.write((const char*)&p, sizeof(Person));
	ofs.close();
}
void test04()
{
	ifstream ifs("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "������" << p.m_name << " ���䣺" << p.m_age << endl;
	ifs.close();
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