#pragma once
#include <iostream>
#define SO_LUONG_MANG 1000
using namespace std;
struct PhanSo
{
	int iTuSo;
	int iMauSo;
};

void Input(PhanSo psA[], int& iSoLuong);
void Output(PhanSo psA[], int iSoLuong);