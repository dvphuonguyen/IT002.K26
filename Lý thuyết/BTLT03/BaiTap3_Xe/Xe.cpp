#include "Xe.h"

void Xe::Nhap()
{
	cout << "Nhap so luong xe: "; cin >> iSoLuong;
	a = new Xe[iSoLuong];
	Bx = new BanhXe[iSoLuong];
	for (int i = 0; i < iSoLuong; i++)
	{
		cout << "Nhap xe thu " << i << " la : " << endl;
		cout << "Nhap ten xe: ";
		cin.ignore();
		getline(cin,a[i]. sTenXe);
		cout << "Nhap hang xe: ";
		getline(cin,a[i]. sHangXe);
		cout << "Nhap nam san xuat: ";cin >> a[i].iNamSX;
		cout << "Nhap so luong cho ngoi: "; cin >>a[i]. iChoNgoi;
		cout << "Thong tin banh xe: " << endl;
		Bx[i].Nhap();
		cout << endl;
	}
}

void Xe::Xuat()
{
	for (int i = 0; i < iSoLuong; i++)
	{
		cout << "Xuat thu " << i << " la : " << endl;
		cout << "Xuat ten xe: " << a[i].sTenXe << endl;
		cout << "Xuat hang xe: " <<a[i]. sHangXe << endl;
		cout << "Xuat nam san xuat: " << a[i].iNamSX << endl;
		cout << "Xuat so luong cho ngoi: " << a[i].iChoNgoi << endl;
		cout << "Xuat thong tin banh xe: " << endl;
		Bx[i].Xuat();
		cout << endl;
	}
}
