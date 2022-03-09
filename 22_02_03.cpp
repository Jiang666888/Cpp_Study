#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

using namespace std;

//学生信息展示
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
		cout << "学生的姓名：" << name << endl;
		cout << "学生的学号：" << id << endl;
	}
};
int main()
{
	Student s1;
	//cout << "请输入学生的姓名：";
	s1.setName("张三");
	//cout << "请输入学生的学号：";
	s1.setId(11);
	s1.Print_info();

	system("pause");
	return 0;
}



//圆周长
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
//	cout << "请输入圆的半径：";
//	cin >> c1.r;
//	cout << "圆的周长为：" << c1.Perimeter() << endl;
//
//	system("pause");
//	return 0;
//}