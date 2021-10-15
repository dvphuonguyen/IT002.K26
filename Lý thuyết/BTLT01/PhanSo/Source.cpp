#include <iostream>
#include <math.h>
#define SO_LUONG_CUA_MANG 1000
using namespace std;
// Tao struct PhanSo
struct PhanSo
{
	int iTuSo;
	int iMauSo;
};

// Nhap cac gia tri cua PhanSo
void Input(PhanSo psA[], int& iSoLuong)
{
	do
	{
		cout << "Nhap so luong phan so can tinh toan: "; cin >> iSoLuong;
	} while (iSoLuong <= 0);
	for (int i = 0; i < iSoLuong; i++)
	{
		do
		{
			cout << "Nhap tu so va mau so cua phan so thu " << i << " lan luot la: ";
			cin >> psA[i].iTuSo >> psA[i].iMauSo;
		} while (psA[i].iMauSo == 0);
	}
}

// Tim uoc chung lon nhat
int UocChungLonNhat(int iA, int iB)
{
	iA = abs(iA);
	iB = abs(iB);
	if (iA == 0 || iB == 0) return 0;
	while (iA != iB)
	{
		if (iA > iB)
		{
			iA = iA - iB;
		}
		else
		{
			iB = iB - iA;
		}
	}
	return iA;
}
// Ham rut gon
void Compact(PhanSo &psA)
{
	int iUCLN = UocChungLonNhat(psA.iMauSo, psA.iTuSo);
	psA.iTuSo = psA.iTuSo / iUCLN;
	psA.iMauSo = psA.iMauSo / iUCLN;
	if (psA.iMauSo < 0)
	{
		psA.iMauSo *= (-1);
		psA.iTuSo *= (-1);
	}
}
//Xuat phan so
void Output(PhanSo psA)
{
	if (psA.iMauSo == 0)
	{
		cout << "khong ton tai gia tri.";
	}
	if (psA.iTuSo == 0) {
		cout << psA.iTuSo << endl;
		return;
	}
	else {
		Compact(psA);
	}

	if (psA.iMauSo == 1) {
		cout << psA.iTuSo << endl;
	}

	else {
		cout << psA.iTuSo << " / " << psA.iMauSo << endl;
	}
}
// Ham tinh tong
void Additon(PhanSo psA[], int iSoLuong, PhanSo& psTong)
{
	psTong.iTuSo = psA[0].iTuSo;
	psTong.iMauSo = psA[0].iMauSo;
	for (int i = 1; i < iSoLuong; i++)
	{
		psTong.iTuSo = psTong.iTuSo * psA[i].iMauSo + psTong.iMauSo * psA[i].iTuSo;
		psTong.iMauSo = psTong.iMauSo * psA[i].iMauSo;
	}
	cout << "Tong cua phan so tren la: ";
	Output(psTong);
}
// Ham tinh hieu
void Subtraction(PhanSo psA[], int iSoLuong, PhanSo& psHieu)
{
	psHieu.iTuSo = psA[0].iTuSo;
	psHieu.iMauSo = psA[0].iMauSo;
	for (int i = 1; i < iSoLuong; i++)
	{
		psHieu.iTuSo = psHieu.iTuSo * psA[i].iMauSo - psHieu.iMauSo * psA[i].iTuSo;
		psHieu.iMauSo = psHieu.iMauSo * psA[i].iMauSo;
	}
	cout << "Hieu cua phan so tren la: ";
	Output(psHieu);
}
// Ham tinh nhan
void Multiplication(PhanSo psA[], int iSoLuong, PhanSo& psTich)
{
	psTich.iTuSo = psA[0].iTuSo;
	psTich.iMauSo = psA[0].iMauSo;
	for (int i = 1; i < iSoLuong; i++)
	{
		psTich.iTuSo = psTich.iTuSo * psA[i].iTuSo;
		psTich.iMauSo = psTich.iMauSo * psA[i].iMauSo;
	}
	cout << "Tich cua phan so tren la: ";
	Output(psTich);
}
// Ham tinh thuong
void Division(PhanSo psA[], int iSoLuong, PhanSo& psThuong)
{
	psThuong.iTuSo = psA[0].iTuSo;
	psThuong.iMauSo = psA[0].iMauSo;
	for (int i = 1; i < iSoLuong; i++)
	{
		psThuong.iTuSo = psThuong.iTuSo * psA[i].iMauSo;
		psThuong.iMauSo = psThuong.iMauSo * psA[i].iTuSo;
	}
	cout << "Thuong cua phan so tren la: ";
	Output(psThuong);
}
int main()
{
	PhanSo psA[SO_LUONG_CUA_MANG];
	PhanSo psTong, psHieu, psTich, psThuong;
	int iSoLuong;
	Input(psA, iSoLuong);
	Additon(psA, iSoLuong, psTong);
	Subtraction(psA, iSoLuong, psHieu);
	Multiplication(psA, iSoLuong, psTich);
	Division(psA, iSoLuong, psThuong);
	return 0;
}