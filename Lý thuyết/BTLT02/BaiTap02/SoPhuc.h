#pragma once
#include <iostream>
#define SO_LUONG_MANG 1000
using namespace std;
struct SoPhuc
{
	float fSoThuc;
	float fSoAo;
};
void Input(SoPhuc spA[], int& iSoLuong);
void Output(SoPhuc spA);
void Addition(SoPhuc spA[], int iSoLuong, SoPhuc &spTong);
void Subtraction(SoPhuc spA[], int iSoLuong, SoPhuc &spHieu);
