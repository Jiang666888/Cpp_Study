#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <ctime>

using namespace std;

//敲桌子
int main()
{
	int i = 1;
	for (i = 1;i <= 100;i++)
	{
		if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}

	system("pause");
	return 0;
}



//水仙花数
//int main()
//{
//	int num = 100;
//	int one = 0, ten = 0, hundred = 0;
//	do
//	{
//		one = num % 10;
//		ten = num / 10 % 10;
//		hundred = num / 100;
//		if ((one * one * one + ten * ten * ten + hundred * hundred * hundred) == num)
//		{
//			cout << num << endl;
//		}
//		num++;
//	} while (num<1000);
//	return 0;
//}



//猜数字
//int main()
//{
//	srand((unsigned)time(NULL));
//	int num = rand() % 100 + 1;
//	cout << num << endl;
//	int left = 0, right = 100;
//	int guess = 0,middle=0;
//	while (left < right)
//	{
//		middle = (left + right) / 2;
//		cout << "请输入猜测的数字：";
//		cin >> guess;
//		if (guess > num)
//		{
//			left = middle;
//			cout << "猜大了！" << endl;
//		}
//		else if (guess < num)
//		{
//			right = middle;
//			cout << "猜小了！" << endl;
//		}
//		else
//		{
//			cout << "恭喜你猜对了" << endl;
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int num = 0;
//	while (num++ < 10)
//	{
//		cout << num << endl;
//	}
//
//	system("pause");
//	return 0;
//}



//int main()
//{
//	//c++三目运算符返回变量，c语言返回值
//	int a = 10, b = 20;
//	(a > b ? a : b) = 100;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int num1 = 0, num2 = 0, num3 = 0;
//	cout << "请输入小猪A的重量：";
//	cin >> num1;
//	cout << "请输入小猪B的重量：";
//	cin >> num2;
//	cout << "请输入小猪C的重量：";
//	cin >> num3;
//	if (num1 > num2)
//	{
//		if (num1 > num3)
//		{
//			cout << "小猪A最重" << endl;
//		}
//		else if (num1 < num3)
//		{
//			cout << "小猪C最重" << endl;
//		}
//		else
//		{
//			cout << "小猪A和小猪C一样重" << endl;
//		}
//	}
//	else if(num1 < num2)
//	{
//		if (num2 > num3)
//		{
//			cout << "小猪B最重" << endl;
//		}
//		else if (num2 < num3)
//		{
//			cout << "小猪C最重" << endl;
//		}
//		else
//		{
//			cout << "小猪B和小猪C一样重" << endl;
//		}
//	}
//	else
//	{
//		if (num2 > num3)
//		{
//			cout << "小猪A和B最重" << endl;
//		}
//		else if (num2 < num3)
//		{
//			cout << "小猪C最重" << endl;
//		}
//		else
//		{
//			cout << "小猪A和小猪B和小猪C一样重" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}