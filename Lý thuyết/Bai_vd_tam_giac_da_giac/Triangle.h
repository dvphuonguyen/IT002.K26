#pragma once
#include "Point.h"
class Triangle
{
private:
	Point A, B, C;
public:
	Triangle();
	Triangle(Point nA, Point nB, Point nC);
	Triangle(float x1, float y1, float x2, float y2, float x3, float y3);
	~Triangle();
};

