#include "TamGiac.h"

void TamGiac::Nhap()
{
	DaGiac::n = 3;
	DaGiac::point = new Point[this->n];
	for (int i = 0; i < this->n; i++) {
		DaGiac::point[i].Nhap();
	}
}

void TamGiac::Xuat()
{
	DaGiac::Xuat();
}
