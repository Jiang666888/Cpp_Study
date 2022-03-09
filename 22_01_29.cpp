#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

using namespace std;

//void bubble_sorting(int arr[],int len)
//{
//	for (int i = 0;i < len - 1;i++)
//	{
//		for (int j = 0;j < len - i - 1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
void bubble_sorting(int* p, int len)
{
	for (int i = 0;i < len - 1;i++)
	{
		for (int j = 0;j < len - i - 1;j++)
		{
			if (*(p+j) > *(p+j+1))
			{
				int tmp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = tmp;
			}
		}
	}
}
void print_arr(int* arr, int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << arr[i] << " ";
	}
}
int main()
{
	int arr[] = { 32,53,11,65,87,43,32,12,9,77 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sorting(arr,sz);
	print_arr(arr, sz);
	
	system("pause");
	return 0;
}



//void swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 10, b = 20;
//	swap(&a, &b);
//	cout << a << endl;
//	cout << b << endl;
//
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0;i < sz;i++)
//	{
//		cout << *(p++) << endl;
//	}
//	system("pause");
//	return 0;
//}