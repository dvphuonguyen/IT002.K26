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
public:
	PhanSo();
	void Input();
	void Output();
	float Float();
	~PhanSo();
};

