#pragma once
#include<iostream>
#include <math.h>
using namespace std;
class DaThuc
{
private:
	float *a;
	int n;
public:
	DaThuc();
	float getA(int i) {
		return this->a[i];
	}
	int getN() {
		return this->n;
	}
	void nhap();
	void xuat();
	DaThuc operator+(DaThuc a);
	DaThuc operator-(DaThuc a);
	bool operator!=(DaThuc a);
	float The_Gia_Tri(float x);
	~DaThuc();
};

