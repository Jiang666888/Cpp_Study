#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <ctime>

using namespace std;

//������
int main()
{
	int i = 1;
	for (i = 1;i <= 100;i++)
	{
		if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0)
		{
			cout << "������" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}

	system("pause");
	return 0;
}



//ˮ�ɻ���
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



//������
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
//		cout << "������²�����֣�";
//		cin >> guess;
//		if (guess > num)
//		{
//			left = middle;
//			cout << "�´��ˣ�" << endl;
//		}
//		else if (guess < num)
//		{
//			right = middle;
//			cout << "��С�ˣ�" << endl;
//		}
//		else
//		{
//			cout << "��ϲ��¶���" << endl;
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
//	//c++��Ŀ��������ر�����c���Է���ֵ
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
//	cout << "������С��A��������";
//	cin >> num1;
//	cout << "������С��B��������";
//	cin >> num2;
//	cout << "������С��C��������";
//	cin >> num3;
//	if (num1 > num2)
//	{
//		if (num1 > num3)
//		{
//			cout << "С��A����" << endl;
//		}
//		else if (num1 < num3)
//		{
//			cout << "С��C����" << endl;
//		}
//		else
//		{
//			cout << "С��A��С��Cһ����" << endl;
//		}
//	}
//	else if(num1 < num2)
//	{
//		if (num2 > num3)
//		{
//			cout << "С��B����" << endl;
//		}
//		else if (num2 < num3)
//		{
//			cout << "С��C����" << endl;
//		}
//		else
//		{
//			cout << "С��B��С��Cһ����" << endl;
//		}
//	}
//	else
//	{
//		if (num2 > num3)
//		{
//			cout << "С��A��B����" << endl;
//		}
//		else if (num2 < num3)
//		{
//			cout << "С��C����" << endl;
//		}
//		else
//		{
//			cout << "С��A��С��B��С��Cһ����" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}