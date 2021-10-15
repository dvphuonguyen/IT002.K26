#pragma once
#include <iostream>
#include <math.h>
#define SO_LUONG_MANG 100
using namespace std;

class PhanSo
{
private:
	int iTuSo;
	int iMauSo;
	int Gcd(int iTuSo, int iMauSo);
public:
	PhanSo();
	void Input();
	void Output();
	PhanSo Add(PhanSo ps2);
	PhanSo Subtract(PhanSo ps2);
	PhanSo Multiply(PhanSo ps2);
	PhanSo Divide(PhanSo ps2);
	void Compact();
	~PhanSo();
};
