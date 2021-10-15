#include "DanhSach.h"

void DanhSach::Nhap()
{
	cout << "Nhap so luong phan so: "; cin >> iSoLuong;
	a = new PhanSo[iSoLuong];
	for (int i = 0; i < iSoLuong; i++)
	{
		cout << "Nhap phan thu " << i << " : ";
		a[i].Nhap();
		cout << endl;
	}
}

void DanhSach::Xuat()
{
	for (int i = 0; i < iSoLuong; i++)
	{
		cout << "Xuat phan so thu " << i << " la: ";
		a[i].Xuat();
	}
}
