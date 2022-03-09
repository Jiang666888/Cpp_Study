#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <iostream>
#include "point.h"
using namespace std;

class Circle
{
public:
	void setCenter(Point newcenter);
	Point getCenter();
	void setR(int newr);
	int getR();
private:
	Point center;
	int r;
};