#include "PhanSo.h"

void Input(PhanSo psA[], int& iSoLuong)
{
	do
	{
		cout << "Nhap so luong phan so: ";cin >> iSoLuong;
	} while (iSoLuong <= 0);
	for (int i = 0; i < iSoLuong; i++)
	{
		do
		{
			cout << "Nhap tu va mau cua phan so thu " << i << " la: ";
			cin >> psA[i].iTuSo >> psA[i].iMauSo;
		} while (psA[i].iMauSo == 0);
	}
}
void Output(PhanSo psA[], int iSoLuong)
{
	for (int i = 0; i < iSoLuong; i++)
	{
		cout << "Xuat tu va mau cua phan so thu " << i << " la: " << psA[i].iTuSo << " / " << psA[i].iMauSo << endl;
	}
}