#include "SoPhuc.h"

void SoPhuc::Nhap()
{
	cout << "Nhap so thuc : "; cin >> this->fSoThuc;
	cout << "Nhap so ao : "; cin >> this->fSoAo;
}

void SoPhuc::Xuat()
{
	cout << this->fSoThuc;
	if (this->fSoAo < 0) {
		cout << " - " << abs(this->fSoAo) << "i\n";
	}
	else if (this->fSoAo > 0) {
		cout << " + " << abs(this->fSoAo) << "i\n";
	}
}

void SoPhuc::Sum(SoPhuc a)
{
	cout << "Tinh tong la : ";
	SoPhuc b;
	b.fSoThuc = this->fSoThuc + a.fSoThuc;
	b.fSoAo = this->fSoAo + a.fSoAo;
	b.Xuat();
}
