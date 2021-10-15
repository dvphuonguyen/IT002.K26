#include "SoPhuc.h"

void Input(SoPhuc spA[], int &iSoLuong)
{
	do
	{
		cout << "Nhap so luong so phuc: "; cin >> iSoLuong;
	} while (iSoLuong <= 0);
	for (int i = 0; i < iSoLuong; i++)
	{
		cout << "Nhap so thuc va so ao cua so phuc thu " << i << " la: ";
		cin >> spA[i].fSoThuc >> spA[i].fSoAo;
	}
}
void Output(SoPhuc spA)
{
	if (spA.fSoAo == 0)
	{
		cout << spA.fSoThuc << endl;
	}
	else if (spA.fSoThuc == 0)
	{
		cout << spA.fSoAo << "i" << endl;
	}
	else if (spA.fSoAo > 0)
	{
		cout << spA.fSoThuc << " + " << spA.fSoAo << "i" << endl;
	}
	else
	{
		cout << spA.fSoThuc << " - " << spA.fSoAo * (-1) << "i" << endl;
	}
}
void Addition(SoPhuc spA[], int iSoLuong, SoPhuc &spTong)
{
	spTong.fSoThuc = spA[0].fSoThuc;
	spTong.fSoAo = spA[0].fSoAo;
	for (int i = 1; i < iSoLuong; i++)
	{
		spTong.fSoThuc += spA[i].fSoThuc;
		spTong.fSoAo += spA[i].fSoAo;
	}
	cout << "Tong cua so phuc la: ";
	Output(spTong);
}
void Subtraction(SoPhuc spA[], int iSoLuong, SoPhuc &spHieu)
{
	spHieu.fSoThuc = spA[0].fSoThuc;
	spHieu.fSoAo = spA[0].fSoAo;
	for (int i = 1; i < iSoLuong; i++)
	{
		spHieu.fSoThuc -= spA[i].fSoThuc;
		spHieu.fSoAo -= spA[i].fSoAo;
	}
	cout << "Hieu cua so phuc la: ";
	Output(spHieu);
}
