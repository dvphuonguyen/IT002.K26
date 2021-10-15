#include "DaGiac.h"

void DaGiac::Nhap()
{
	do {
		cout << "Nhap so luong diem : ";
		cin >> this->n;
	} while (this->n < 3);
	this->point = new Point[this->n];
	for (int i = 0; i < this->n; i++) {
		this->point[i].Nhap();
	}
}

void DaGiac::Xuat()
{
	for (int i = 0; i < this->n; i++) {
		cout << "Xuat diem thu " << i + 1 << " la: ";
		this->point[i].Xuat();
	}
}
