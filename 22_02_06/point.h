#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <iostream>
using namespace std;

class Point
{
public:
	void setX(int newx);
	int getX();
	void setY(int newy);
	int getY();
private:
	int x;
	int y;
};