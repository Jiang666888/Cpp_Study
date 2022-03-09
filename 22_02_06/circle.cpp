#define _CRT_SECURE_NO_WARNINGS 1

#include "circle.h"

void Circle::setCenter(Point newcenter)
{
	center = newcenter;
}
Point Circle::getCenter()
{
	return center;
}
void Circle::setR(int newr)
{
	r = newr;
}
int Circle::getR()
{
	return r;
}