#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

using namespace std;

//��Ͷ���
int main()
{
	
	system("pause");
	return 0;
}



//����
//��������
//void fun()
//{
//	cout << "��һ������" << endl;
//}
//void fun(int a)
//{
//	cout << "�ڶ�������" << endl;
//}
//void fun(double a)
//{
//	cout << "����������" << endl;
//}
//void fun(double a,int b)
//{
//	cout << "���ĸ�����" << endl;
//}
//void fun(int a,double b)
//{
//	cout << "���������" << endl;
//}
//int main()
//{
//	fun();
//	fun(10);
//	fun(3.14);
//	fun(3.14,1);
//	fun(1,3.14);
//
//	system("pause");
//	return 0;
//}



//Ĭ�ϲ���
//int fun(int a, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
//ռλ
//void func(int a, int = 10)
//{ 
//	cout << "�����" << a << endl;
//}
//
//int main()
//{
//	func(10);
//	//cout << fun(10, 30) << endl;
//
//	system("pause");
//	return 0;
//}






//����
//int& test()
//{
//	static int a = 10;
//	return a;
//}
//int main()
//{
//	const int& a = 10;
//	//a=20;������ֵ
//
//	//int& b = test();
//	//test() = 100;
//	//cout << b << endl;
//	//cout << b << endl;
//
//	system("pause");
//	return 0;
//}



//void mySwap(int& a,int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	mySwap(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	cout << a << endl;
//	int& b = a;
//	b = 20;
//	cout << a << endl;
//	cout << b << endl;
//
//	system("pause");
//	return 0;
//}