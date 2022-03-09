#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

using namespace std;

int main()
{
	int* arr = new int[10];
	for (int i = 0;i < 10 ;i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0;i < 10;i++)
	{
		cout << arr[i] << " ";
	}
	delete [] arr;

	system("pause");
	return 0;
}



//在堆区创建内存
//int* fun()
//{
//	int* p = new int(10);
//	return p;
//}
//int main()
//{
//	int* p = fun();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	delete p;
//
//	system("pause");
//	return 0;
//}