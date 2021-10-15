#include "SoAo.h"

void SoAo::Nhap()
{
	SoPhuc::fSoThuc = 0;
	cout << "Nhap so ao : "; cin >> this->fSoAo;
}

void SoAo::Xuat()
{
	SoPhuc::Xuat();
}

void SoAo::Sum(SoAo a)
{
	SoPhuc::Sum(a);
}
