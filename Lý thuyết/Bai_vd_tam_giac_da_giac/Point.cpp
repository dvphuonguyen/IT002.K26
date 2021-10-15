#include "Point.h"

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(float x, float y)
{
	this->x = x;
	this->y = y;
}

Point::Point(const Point& a)
{
	this->x = a.x;
	this->y = a.y;
}

Point::~Point()
{
}
