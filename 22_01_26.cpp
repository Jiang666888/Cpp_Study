#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <iomanip>

using namespace std;

//数组元素逆置
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0;i < sz/2;i++)//0 1
	{
		int tmp = arr[i];
		arr[i] = arr[sz - 1 - i];
		arr[sz - 1 - i] = tmp;
	}
	for (int i = 0;i < sz;i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");
	return 0;
}



//五只小猪称体重
//int main()
//{
//	int arr[] = { 33,23,13,45,64,34 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 1;i < sz;i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	cout << "最重的小猪是：" << max << endl;
//
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	cout << arr << endl;
//	cout << arr+1 << endl;
//	cout << &arr << endl;
//	cout << &arr+1 << endl;
//	cout << &arr[0] << endl;
//	cout << &arr[0]+1 << endl;
//
//	system("pause");
//	return 0;
//}



//int  main()
//{
//	cout << "1" << endl;
//	cout << "2" << endl;
//	goto FLAG;
//	cout << "3" << endl;
//	cout << "4" << endl;
//FLAG:cout << "5" << endl;
//	system("pause");
//	return 0;
//}



//九九乘法表
//int main()
//{
//	for (int i = 1;i <= 9;i++)
//	{
//		
//		for (int j = 1;j <= i;j++)
//		{
//			cout << j << "*" << i << "=" << scientific << setw(2) << setfill(' ') << left << i * j << " ";
//		}
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}




//int main()
//{
//	for (int i = 0;i < 10;i++)
//	{
//		for (int j = 0;j < 10;j++)
//		{
//			cout << "* ";
//		}
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}