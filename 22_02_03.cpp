#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

using namespace std;

//ѧ����Ϣչʾ
class Student
{
public:

	string name;
	int id;

	void setName(string newname)
	{
		name = newname;
	}
	void setId(int newid)
	{
		id = newid;
	}
	void Print_info()
	{
		cout << "ѧ����������" << name << endl;
		cout << "ѧ����ѧ�ţ�" << id << endl;
	}
};
int main()
{
	Student s1;
	//cout << "������ѧ����������";
	s1.setName("����");
	//cout << "������ѧ����ѧ�ţ�";
	s1.setId(11);
	s1.Print_info();

	system("pause");
	return 0;
}



//Բ�ܳ�
//const double PI=3.14;
//class Circle
//{
//public:
//	int r;
//	double Perimeter()
//	{
//		return 2 * PI * r;
//	}
//};
//int main()
//{
//	Circle c1;
//	cout << "������Բ�İ뾶��";
//	cin >> c1.r;
//	cout << "Բ���ܳ�Ϊ��" << c1.Perimeter() << endl;
//
//	system("pause");
//	return 0;
//}