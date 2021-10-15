#pragma once
#include <iostream>
using namespace std;
class Point
{
private:
	float x, y;
public:
	Point();
	Point(float x, float y);
	Point(const Point& );
	float getX() {
		return this->x;
	}
	float getY() {
		return this->y;
	}
	void setX(float x) {
		this->x = x;
	}
	void setY(float y) {
		this->y = y;
	}
	~Point();
};

