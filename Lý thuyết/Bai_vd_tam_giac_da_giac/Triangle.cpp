#include "Triangle.h"

Triangle::Triangle():A(1,1),B(1,2),C(1,3)
{
}

Triangle::Triangle(Point nA, Point nB, Point nC):
	A(nA),B(nB),C(nC)
{
}

Triangle::Triangle(float x1, float y1, float x2, float y2, float x3, float y3):
	A(x1,y1),B(x2,y2),C(x3,y3)
{
}
