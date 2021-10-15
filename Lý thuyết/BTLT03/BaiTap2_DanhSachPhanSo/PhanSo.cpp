#include "PhanSo.h"

PhanSo::PhanSo()
{
	iTu = 0;
	iMau = 1;
}

void PhanSo::Nhap()
{
	cin >> iTu;
	do
	{
		cin >> iMau;
	} while (iMau == 0);
}

void PhanSo::Xuat()
{
	cout << iTu << "/" << iMau << endl;
}

PhanSo::~PhanSo()
{
}
