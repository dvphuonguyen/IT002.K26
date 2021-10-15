#pragma once
#include <iostream>
#include <math.h>
using namespace std;
class SoPhuc
{
private:
	float thuc;
	float ao;
public:
	SoPhuc();
	SoPhuc(float x);
	friend SoPhuc operator+(SoPhuc a, SoPhuc b);
	SoPhuc operator-(SoPhuc a);
	bool operator>=(SoPhuc a);
	void nhap();
	void xuat();
	~SoPhuc();
};

