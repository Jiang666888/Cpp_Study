#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string.h>

using namespace std;

//计算总成绩
int main()
{
	int sum = 0;
	int fraction[3][3] = { {100,100,100},{90,50,100},{60,70,80} };
	string name[] = { "张三","李四","王五" };
	int row = sizeof(fraction) / sizeof(fraction[0]);
	int col = sizeof(fraction[0]) / sizeof(fraction[0][0]);
	for (int i = 0;i < row;i++)
	{
		sum = 0;
		for (int j = 0;j < row;j++)
		{
			sum += fraction[i][j];
		}
		cout << name[i] << "的分数为：" << sum << endl;
	}
	system("pause");
	return 0;
}



//冒泡排序法
//int main()
//{
//	int arr[] = { 32,11,43,66,23,12,43,86,54 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0;i < sz-1;i++)
//	{
//		for (int j = 0;j < sz -1- i;j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//	for (int i = 0;i < sz;i++)
//	{
//		cout << arr[i] << " ";
//	}
//
//	system("pause");
//	return 0;
//}